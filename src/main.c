#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/drivers/pwm.h>

#include "Example_Compile_Pump.h"

#define SLEEP_TIME_MS   10

static const struct gpio_dt_spec in_level_low =
	GPIO_DT_SPEC_GET(DT_ALIAS(in_level_low), gpios);
static const struct gpio_dt_spec in_estop_ok =
	GPIO_DT_SPEC_GET(DT_ALIAS(in_estop_ok), gpios);
static const struct gpio_dt_spec out_pump_en =
	GPIO_DT_SPEC_GET(DT_ALIAS(out_pump_en), gpios);

static const struct pwm_dt_spec pwm_led_pump = PWM_DT_SPEC_GET(DT_ALIAS(pwm_led_pump));
static const struct pwm_dt_spec pwm_led_ok = PWM_DT_SPEC_GET(DT_ALIAS(pwm_led_ok));
static const struct pwm_dt_spec pwm_led_stuck = PWM_DT_SPEC_GET(DT_ALIAS(pwm_led_stuck));

Example_Compile_Pump_state state;
static void ctl_init() {
	Example_Compile_Pump_reset(&state);
}

static inline void pwm_set_led(const struct pwm_dt_spec *spec, int value)
{
	// 1KHz, 5% duty
	pwm_set_dt(spec, 1000000, value ? 50000 : 0);
}

static void ctl_step() {
	int level_low = gpio_pin_get_dt(&in_level_low);
	int estop_ok = gpio_pin_get_dt(&in_estop_ok);

	Example_Compile_Pump_input input = { .estop = !estop_ok, .level_low = level_low };
	Example_Compile_Pump_output output = Example_Compile_Pump_step(input, &state);

	pwm_set_led(&pwm_led_ok, estop_ok);
	pwm_set_led(&pwm_led_stuck, output.nok_stuck);
	pwm_set_led(&pwm_led_pump, output.sol_en);
	gpio_pin_set_dt(&out_pump_en, output.sol_en);
}

static void main_timer_work_step(struct k_work *work) {
	ctl_step();
}

K_WORK_DEFINE(main_timer_work, main_timer_work_step);

static void main_timer_step(struct k_timer *timer) {
	k_work_submit(&main_timer_work);
}

K_TIMER_DEFINE(main_timer, main_timer_step, NULL);


void main(void) {
	int ret;

	if (!device_is_ready(in_estop_ok.port)) {
		return;
	}

	ret =
		gpio_pin_configure_dt(&in_level_low, GPIO_INPUT) ||
		gpio_pin_configure_dt(&in_estop_ok, GPIO_INPUT) ||
		gpio_pin_configure_dt(&out_pump_en, GPIO_OUTPUT_INACTIVE) ||
		!device_is_ready(pwm_led_ok.dev) ||
		!device_is_ready(pwm_led_stuck.dev) ||
		!device_is_ready(pwm_led_pump.dev) ||
		0;
	if (ret < 0) {
		return;
	}

	ctl_init();

	k_timer_start(&main_timer, K_MSEC(10), K_MSEC(10));
}
