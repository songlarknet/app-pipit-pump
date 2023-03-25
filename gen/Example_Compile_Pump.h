/* 
  This file was generated by KaRaMeL <https://github.com/FStarLang/karamel>
  KaRaMeL invocation: krml Example_Compile_Pump.krml -skip-linking
  F* version: <unknown>
  KaRaMeL version: bd359d86
 */

#ifndef __Example_Compile_Pump_H
#define __Example_Compile_Pump_H

#include "krmllib.h"

typedef struct K_________s {  } K________;

typedef struct K___K___K____________K____________s
{
  K________ fst;
  K________ snd;
}
K___K___K____________K___________;

typedef struct K___K___K______________K______________Prims_int_s
{
  K___K___K____________K___________ fst;
  Prims_int snd;
}
K___K___K______________K______________Prims_int;

typedef struct K___K_________K___K___K______________K______________Prims_int____s
{
  K________ fst;
  K___K___K______________K______________Prims_int snd;
}
K___K_________K___K___K______________K______________Prims_int___;

typedef struct K___bool_K______Prims_int_s
{
  bool fst;
  Prims_int snd;
}
K___bool_K______Prims_int;

typedef struct K___K_________bool___K______Prims_int_s
{
  K________ fst;
  K___bool_K______Prims_int snd;
}
K___K_________bool___K______Prims_int;

typedef struct K____________s {  } K___________;

typedef struct K___K____________K____________s
{
  K___________ fst;
  K___________ snd;
}
K___K____________K___________;

typedef struct K________K_________K______________K____________s
{
  K________ fst;
  K___K____________K___________ snd;
}
K________K_________K______________K___________;

typedef struct
K___K___K_________bool___K______Prims_int_K________K_________K______________K____________s
{
  K___K_________bool___K______Prims_int fst;
  K________K_________K______________K___________ snd;
}
K___K___K_________bool___K______Prims_int_K________K_________K______________K___________;

typedef struct
K________K___K___K______________K______________Prims_int______K___K_________bool___K______Prims_int___K________K_________K______________K____________s
{
  K___K___K______________K______________Prims_int fst;
  K___K___K_________bool___K______Prims_int_K________K_________K______________K___________ snd;
}
K________K___K___K______________K______________Prims_int______K___K_________bool___K______Prims_int___K________K_________K______________K___________;

typedef struct Example_Compile_Pump_state_s
{
  K___K_________K___K___K______________K______________Prims_int___ fst;
  K________K___K___K______________K______________Prims_int______K___K_________bool___K______Prims_int___K________K_________K______________K___________
  snd;
}
Example_Compile_Pump_state;

typedef struct Example_Compile_Pump_input_s
{
  bool estop_ok;
  bool level_low;
}
Example_Compile_Pump_input;

typedef struct Example_Compile_Pump_output_s
{
  bool pump_en;
  bool nok_stuck;
}
Example_Compile_Pump_output;

void Example_Compile_Pump_reset(Example_Compile_Pump_state *stref);

Example_Compile_Pump_output
Example_Compile_Pump_step(Example_Compile_Pump_input inp, Example_Compile_Pump_state *stref);


#define __Example_Compile_Pump_H_DEFINED
#endif