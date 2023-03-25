cmake_minimum_required(VERSION 3.20.0)

set(BOARD rpi_pico)

find_package(Zephyr)
project(pump)

target_sources(app PRIVATE src/main.c gen/Example_Compile_Pump.c rts/dist/generic/prims.c)

target_include_directories(app PRIVATE gen rts/include rts/dist/generic)