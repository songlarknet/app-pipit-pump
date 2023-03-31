/* 
  This file was generated by KaRaMeL <https://github.com/FStarLang/karamel>
  KaRaMeL invocation: krml Example_Compile_Pump.krml -skip-linking
  F* version: <unknown>
  KaRaMeL version: bd359d86
 */

#include "Example_Compile_Pump.h"

#include "internal/Prims.h"

void Example_Compile_Pump_reset(Example_Compile_Pump_state *stref)
{
  stref[0U] =
    (
      (Example_Compile_Pump_state){
        .fst = {
          .fst = {  },
          .snd = { .fst = { .fst = {  }, .snd = {  } }, .snd = (krml_checked_int_t)0 }
        },
        .snd = {
          .fst = {
            .fst = { .fst = { .fst = {  }, .snd = {  } }, .snd = (krml_checked_int_t)0 },
            .snd = { .fst = true, .snd = (krml_checked_int_t)0 }
          },
          .snd = { .fst = {  }, .snd = { .fst = {  }, .snd = {  } } }
        }
      }
    );
}

Example_Compile_Pump_output
Example_Compile_Pump_step(Example_Compile_Pump_input inp, Example_Compile_Pump_state *stref)
{
  Example_Compile_Pump_state st = stref[0U];
  K___K______________K___K________________K______________Prims_int___ s10 = st.fst;
  K___K___________K___K________________K______________Prims_int________K___bool______Prims_int_K______K___________K____________________________
  s20 = st.snd;
  K___K___________K___K________________K______________Prims_int______K___bool______Prims_int
  s110 = s20.fst;
  K___K______________K___K________________K______________Prims_int___ s260 = s10;
  K___K________________K______________Prims_int s270 = s260.snd;
  Prims_int ite0;
  if (inp.estop)
    ite0 = (krml_checked_int_t)1;
  else
    ite0 = (krml_checked_int_t)0;
  Prims_int ite1;
  if (ite0 == (krml_checked_int_t)0)
    ite1 = (krml_checked_int_t)1;
  else
    ite1 = (krml_checked_int_t)0;
  Prims_int ite2;
  if (ite1 != (krml_checked_int_t)0)
    if (inp.level_low)
      ite2 = (krml_checked_int_t)1;
    else
      ite2 = (krml_checked_int_t)0;
  else
    ite2 = (krml_checked_int_t)0;
  krml_checked_int_t ite3;
  if (ite2 != (krml_checked_int_t)0)
    ite3 = s270.snd;
  else
    ite3 = (krml_checked_int_t)0;
  Prims_int ite4;
  if (Prims_op_LessThanOrEqual((krml_checked_int_t)100, ite3))
    ite4 = (krml_checked_int_t)1;
  else
    ite4 = (krml_checked_int_t)0;
  Prims_int ite5;
  if (ite4 != (krml_checked_int_t)0)
  {
    K___K________________K______________Prims_int s17 = s110.fst;
    K___bool______Prims_int s27 = s110.snd;
    K___K________________K______________Prims_int s280 = s17;
    K___K________________K______________Prims_int s29 = s280;
    K___K______________K___K________________K______________Prims_int___ s2100 = s10;
    K___K________________K______________Prims_int s211 = s2100.snd;
    Prims_int ite0;
    if (inp.estop)
      ite0 = (krml_checked_int_t)1;
    else
      ite0 = (krml_checked_int_t)0;
    Prims_int ite1;
    if (ite0 == (krml_checked_int_t)0)
      ite1 = (krml_checked_int_t)1;
    else
      ite1 = (krml_checked_int_t)0;
    Prims_int ite2;
    if (ite1 != (krml_checked_int_t)0)
      if (inp.level_low)
        ite2 = (krml_checked_int_t)1;
      else
        ite2 = (krml_checked_int_t)0;
    else
      ite2 = (krml_checked_int_t)0;
    krml_checked_int_t ite3;
    if (ite2 != (krml_checked_int_t)0)
      ite3 = s211.snd;
    else
      ite3 = (krml_checked_int_t)0;
    Prims_int ite4;
    if (Prims_op_LessThanOrEqual((krml_checked_int_t)100, ite3))
      ite4 = (krml_checked_int_t)1;
    else
      ite4 = (krml_checked_int_t)0;
    krml_checked_int_t ite6;
    if (ite4 != (krml_checked_int_t)0)
      ite6 = s29.snd;
    else
      ite6 = (krml_checked_int_t)0;
    Prims_int ite7;
    if (Prims_op_LessThanOrEqual((krml_checked_int_t)1000, ite6))
      ite7 = (krml_checked_int_t)1;
    else
      ite7 = (krml_checked_int_t)0;
    Prims_int ite8;
    if (ite7 != (krml_checked_int_t)0)
    {
      K___K________________K______________Prims_int s28 = s17;
      K___K________________K______________Prims_int s29 = s28;
      K___K______________K___K________________K______________Prims_int___ s210 = s10;
      K___K________________K______________Prims_int s211 = s210.snd;
      Prims_int ite0;
      if (inp.estop)
        ite0 = (krml_checked_int_t)1;
      else
        ite0 = (krml_checked_int_t)0;
      Prims_int ite1;
      if (ite0 == (krml_checked_int_t)0)
        ite1 = (krml_checked_int_t)1;
      else
        ite1 = (krml_checked_int_t)0;
      Prims_int ite2;
      if (ite1 != (krml_checked_int_t)0)
        if (inp.level_low)
          ite2 = (krml_checked_int_t)1;
        else
          ite2 = (krml_checked_int_t)0;
      else
        ite2 = (krml_checked_int_t)0;
      krml_checked_int_t ite3;
      if (ite2 != (krml_checked_int_t)0)
        ite3 = s211.snd;
      else
        ite3 = (krml_checked_int_t)0;
      Prims_int ite4;
      if (Prims_op_LessThanOrEqual((krml_checked_int_t)100, ite3))
        ite4 = (krml_checked_int_t)1;
      else
        ite4 = (krml_checked_int_t)0;
      krml_checked_int_t ite;
      if (ite4 != (krml_checked_int_t)0)
        ite = s29.snd;
      else
        ite = (krml_checked_int_t)0;
      if (Prims_op_LessThanOrEqual((krml_checked_int_t)1000, ite))
        ite8 = (krml_checked_int_t)1;
      else
        ite8 = (krml_checked_int_t)0;
    }
    else
    {
      bool iflag = s27.fst;
      Prims_int s28 = s27.snd;
      if (iflag)
        ite8 = (krml_checked_int_t)0;
      else
        ite8 = s28;
    }
    if (ite8 == (krml_checked_int_t)0)
      ite5 = (krml_checked_int_t)1;
    else
      ite5 = (krml_checked_int_t)0;
  }
  else
    ite5 = (krml_checked_int_t)0;
  krml_checked_int_t ite6;
  if (ite5 != (krml_checked_int_t)0)
    ite6 = (krml_checked_int_t)1;
  else
    ite6 = (krml_checked_int_t)0;
  K___K________________K______________Prims_int s15 = s110.fst;
  K___bool______Prims_int s250 = s110.snd;
  K___K________________K______________Prims_int s261 = s15;
  K___K________________K______________Prims_int s271 = s261;
  K___K______________K___K________________K______________Prims_int___ s280 = s10;
  K___K________________K______________Prims_int s290 = s280.snd;
  Prims_int ite7;
  if (inp.estop)
    ite7 = (krml_checked_int_t)1;
  else
    ite7 = (krml_checked_int_t)0;
  Prims_int ite8;
  if (ite7 == (krml_checked_int_t)0)
    ite8 = (krml_checked_int_t)1;
  else
    ite8 = (krml_checked_int_t)0;
  Prims_int ite9;
  if (ite8 != (krml_checked_int_t)0)
    if (inp.level_low)
      ite9 = (krml_checked_int_t)1;
    else
      ite9 = (krml_checked_int_t)0;
  else
    ite9 = (krml_checked_int_t)0;
  krml_checked_int_t ite10;
  if (ite9 != (krml_checked_int_t)0)
    ite10 = s290.snd;
  else
    ite10 = (krml_checked_int_t)0;
  Prims_int ite11;
  if (Prims_op_LessThanOrEqual((krml_checked_int_t)100, ite10))
    ite11 = (krml_checked_int_t)1;
  else
    ite11 = (krml_checked_int_t)0;
  krml_checked_int_t ite12;
  if (ite11 != (krml_checked_int_t)0)
    ite12 = s271.snd;
  else
    ite12 = (krml_checked_int_t)0;
  Prims_int ite13;
  if (Prims_op_LessThanOrEqual((krml_checked_int_t)1000, ite12))
    ite13 = (krml_checked_int_t)1;
  else
    ite13 = (krml_checked_int_t)0;
  Prims_int ite14;
  if (ite13 != (krml_checked_int_t)0)
  {
    K___K________________K______________Prims_int s26 = s15;
    K___K________________K______________Prims_int s27 = s26;
    K___K______________K___K________________K______________Prims_int___ s28 = s10;
    K___K________________K______________Prims_int s29 = s28.snd;
    Prims_int ite0;
    if (inp.estop)
      ite0 = (krml_checked_int_t)1;
    else
      ite0 = (krml_checked_int_t)0;
    Prims_int ite1;
    if (ite0 == (krml_checked_int_t)0)
      ite1 = (krml_checked_int_t)1;
    else
      ite1 = (krml_checked_int_t)0;
    Prims_int ite2;
    if (ite1 != (krml_checked_int_t)0)
      if (inp.level_low)
        ite2 = (krml_checked_int_t)1;
      else
        ite2 = (krml_checked_int_t)0;
    else
      ite2 = (krml_checked_int_t)0;
    krml_checked_int_t ite3;
    if (ite2 != (krml_checked_int_t)0)
      ite3 = s29.snd;
    else
      ite3 = (krml_checked_int_t)0;
    Prims_int ite4;
    if (Prims_op_LessThanOrEqual((krml_checked_int_t)100, ite3))
      ite4 = (krml_checked_int_t)1;
    else
      ite4 = (krml_checked_int_t)0;
    krml_checked_int_t ite;
    if (ite4 != (krml_checked_int_t)0)
      ite = s27.snd;
    else
      ite = (krml_checked_int_t)0;
    if (Prims_op_LessThanOrEqual((krml_checked_int_t)1000, ite))
      ite14 = (krml_checked_int_t)1;
    else
      ite14 = (krml_checked_int_t)0;
  }
  else
  {
    bool iflag = s250.fst;
    Prims_int s26 = s250.snd;
    if (iflag)
      ite14 = (krml_checked_int_t)0;
    else
      ite14 = s26;
  }
  krml_checked_int_t ite15;
  if (ite14 != (krml_checked_int_t)0)
    ite15 = (krml_checked_int_t)2;
  else
    ite15 = (krml_checked_int_t)0;
  Prims_int res = Prims_op_Addition(ite6, ite15);
  K___K______________K___K________________K______________Prims_int___ s1 = st.fst;
  K___K___________K___K________________K______________Prims_int________K___bool______Prims_int_K______K___________K____________________________
  s2 = st.snd;
  K___K______________K___K________________K______________Prims_int___ s21 = s1;
  K___K________________K______________Prims_int s22 = s21.snd;
  K___K________________K______________Prims_int s26 = s21.snd;
  Prims_int ite16;
  if (inp.estop)
    ite16 = (krml_checked_int_t)1;
  else
    ite16 = (krml_checked_int_t)0;
  Prims_int ite17;
  if (ite16 == (krml_checked_int_t)0)
    ite17 = (krml_checked_int_t)1;
  else
    ite17 = (krml_checked_int_t)0;
  Prims_int ite18;
  if (ite17 != (krml_checked_int_t)0)
    if (inp.level_low)
      ite18 = (krml_checked_int_t)1;
    else
      ite18 = (krml_checked_int_t)0;
  else
    ite18 = (krml_checked_int_t)0;
  krml_checked_int_t ite19;
  if (ite18 != (krml_checked_int_t)0)
    ite19 = s26.snd;
  else
    ite19 = (krml_checked_int_t)0;
  Prims_int ite20;
  if
  (
    Prims_op_LessThanOrEqual(Prims_op_Addition(ite19, (krml_checked_int_t)1),
      (krml_checked_int_t)65535)
  )
    ite20 = (krml_checked_int_t)1;
  else
    ite20 = (krml_checked_int_t)0;
  Prims_int ite21;
  if (ite20 != (krml_checked_int_t)0)
  {
    K___K________________K______________Prims_int s25 = s21.snd;
    Prims_int ite0;
    if (inp.estop)
      ite0 = (krml_checked_int_t)1;
    else
      ite0 = (krml_checked_int_t)0;
    Prims_int ite1;
    if (ite0 == (krml_checked_int_t)0)
      ite1 = (krml_checked_int_t)1;
    else
      ite1 = (krml_checked_int_t)0;
    Prims_int ite2;
    if (ite1 != (krml_checked_int_t)0)
      if (inp.level_low)
        ite2 = (krml_checked_int_t)1;
      else
        ite2 = (krml_checked_int_t)0;
    else
      ite2 = (krml_checked_int_t)0;
    krml_checked_int_t ite;
    if (ite2 != (krml_checked_int_t)0)
      ite = s25.snd;
    else
      ite = (krml_checked_int_t)0;
    ite21 = Prims_op_Addition(ite, (krml_checked_int_t)1);
  }
  else
    ite21 = (krml_checked_int_t)65535;
  K___K___________K___K________________K______________Prims_int______K___bool______Prims_int
  s11 = s2.fst;
  K___K________________K______________Prims_int s12 = s11.fst;
  K___K________________K______________Prims_int s23 = s12;
  K___K________________K______________Prims_int s240 = s23;
  K___K________________K______________Prims_int s281 = s23;
  K___K______________K___K________________K______________Prims_int___ s29 = s1;
  K___K________________K______________Prims_int s210 = s29.snd;
  Prims_int ite22;
  if (inp.estop)
    ite22 = (krml_checked_int_t)1;
  else
    ite22 = (krml_checked_int_t)0;
  Prims_int ite23;
  if (ite22 == (krml_checked_int_t)0)
    ite23 = (krml_checked_int_t)1;
  else
    ite23 = (krml_checked_int_t)0;
  Prims_int ite24;
  if (ite23 != (krml_checked_int_t)0)
    if (inp.level_low)
      ite24 = (krml_checked_int_t)1;
    else
      ite24 = (krml_checked_int_t)0;
  else
    ite24 = (krml_checked_int_t)0;
  krml_checked_int_t ite25;
  if (ite24 != (krml_checked_int_t)0)
    ite25 = s210.snd;
  else
    ite25 = (krml_checked_int_t)0;
  Prims_int ite26;
  if (Prims_op_LessThanOrEqual((krml_checked_int_t)100, ite25))
    ite26 = (krml_checked_int_t)1;
  else
    ite26 = (krml_checked_int_t)0;
  krml_checked_int_t ite27;
  if (ite26 != (krml_checked_int_t)0)
    ite27 = s281.snd;
  else
    ite27 = (krml_checked_int_t)0;
  Prims_int ite28;
  if
  (
    Prims_op_LessThanOrEqual(Prims_op_Addition(ite27, (krml_checked_int_t)1),
      (krml_checked_int_t)65535)
  )
    ite28 = (krml_checked_int_t)1;
  else
    ite28 = (krml_checked_int_t)0;
  Prims_int ite29;
  if (ite28 != (krml_checked_int_t)0)
  {
    K___K________________K______________Prims_int s27 = s23;
    K___K______________K___K________________K______________Prims_int___ s28 = s1;
    K___K________________K______________Prims_int s29 = s28.snd;
    Prims_int ite0;
    if (inp.estop)
      ite0 = (krml_checked_int_t)1;
    else
      ite0 = (krml_checked_int_t)0;
    Prims_int ite1;
    if (ite0 == (krml_checked_int_t)0)
      ite1 = (krml_checked_int_t)1;
    else
      ite1 = (krml_checked_int_t)0;
    Prims_int ite2;
    if (ite1 != (krml_checked_int_t)0)
      if (inp.level_low)
        ite2 = (krml_checked_int_t)1;
      else
        ite2 = (krml_checked_int_t)0;
    else
      ite2 = (krml_checked_int_t)0;
    krml_checked_int_t ite3;
    if (ite2 != (krml_checked_int_t)0)
      ite3 = s29.snd;
    else
      ite3 = (krml_checked_int_t)0;
    Prims_int ite4;
    if (Prims_op_LessThanOrEqual((krml_checked_int_t)100, ite3))
      ite4 = (krml_checked_int_t)1;
    else
      ite4 = (krml_checked_int_t)0;
    krml_checked_int_t ite;
    if (ite4 != (krml_checked_int_t)0)
      ite = s27.snd;
    else
      ite = (krml_checked_int_t)0;
    ite29 = Prims_op_Addition(ite, (krml_checked_int_t)1);
  }
  else
    ite29 = (krml_checked_int_t)65535;
  K___K________________K______________Prims_int s14 = s11.fst;
  K___bool______Prims_int s24 = s11.snd;
  K___K________________K______________Prims_int s251 = s14;
  K___K________________K______________Prims_int s262 = s251;
  K___K______________K___K________________K______________Prims_int___ s272 = s1;
  K___K________________K______________Prims_int s28 = s272.snd;
  Prims_int ite30;
  if (inp.estop)
    ite30 = (krml_checked_int_t)1;
  else
    ite30 = (krml_checked_int_t)0;
  Prims_int ite31;
  if (ite30 == (krml_checked_int_t)0)
    ite31 = (krml_checked_int_t)1;
  else
    ite31 = (krml_checked_int_t)0;
  Prims_int ite32;
  if (ite31 != (krml_checked_int_t)0)
    if (inp.level_low)
      ite32 = (krml_checked_int_t)1;
    else
      ite32 = (krml_checked_int_t)0;
  else
    ite32 = (krml_checked_int_t)0;
  krml_checked_int_t ite33;
  if (ite32 != (krml_checked_int_t)0)
    ite33 = s28.snd;
  else
    ite33 = (krml_checked_int_t)0;
  Prims_int ite34;
  if (Prims_op_LessThanOrEqual((krml_checked_int_t)100, ite33))
    ite34 = (krml_checked_int_t)1;
  else
    ite34 = (krml_checked_int_t)0;
  krml_checked_int_t ite35;
  if (ite34 != (krml_checked_int_t)0)
    ite35 = s262.snd;
  else
    ite35 = (krml_checked_int_t)0;
  Prims_int ite36;
  if (Prims_op_LessThanOrEqual((krml_checked_int_t)1000, ite35))
    ite36 = (krml_checked_int_t)1;
  else
    ite36 = (krml_checked_int_t)0;
  Prims_int ite37;
  if (ite36 != (krml_checked_int_t)0)
  {
    K___K________________K______________Prims_int s25 = s14;
    K___K________________K______________Prims_int s26 = s25;
    K___K______________K___K________________K______________Prims_int___ s27 = s1;
    K___K________________K______________Prims_int s28 = s27.snd;
    Prims_int ite0;
    if (inp.estop)
      ite0 = (krml_checked_int_t)1;
    else
      ite0 = (krml_checked_int_t)0;
    Prims_int ite1;
    if (ite0 == (krml_checked_int_t)0)
      ite1 = (krml_checked_int_t)1;
    else
      ite1 = (krml_checked_int_t)0;
    Prims_int ite2;
    if (ite1 != (krml_checked_int_t)0)
      if (inp.level_low)
        ite2 = (krml_checked_int_t)1;
      else
        ite2 = (krml_checked_int_t)0;
    else
      ite2 = (krml_checked_int_t)0;
    krml_checked_int_t ite3;
    if (ite2 != (krml_checked_int_t)0)
      ite3 = s28.snd;
    else
      ite3 = (krml_checked_int_t)0;
    Prims_int ite4;
    if (Prims_op_LessThanOrEqual((krml_checked_int_t)100, ite3))
      ite4 = (krml_checked_int_t)1;
    else
      ite4 = (krml_checked_int_t)0;
    krml_checked_int_t ite;
    if (ite4 != (krml_checked_int_t)0)
      ite = s26.snd;
    else
      ite = (krml_checked_int_t)0;
    if (Prims_op_LessThanOrEqual((krml_checked_int_t)1000, ite))
      ite37 = (krml_checked_int_t)1;
    else
      ite37 = (krml_checked_int_t)0;
  }
  else
  {
    bool iflag = s24.fst;
    Prims_int s25 = s24.snd;
    if (iflag)
      ite37 = (krml_checked_int_t)0;
    else
      ite37 = s25;
  }
  Example_Compile_Pump_state
  st_ =
    {
      .fst = { .fst = {  }, .snd = { .fst = { .fst = {  }, .snd = {  } }, .snd = ite21 } },
      .snd = {
        .fst = {
          .fst = { .fst = { .fst = {  }, .snd = {  } }, .snd = ite29 },
          .snd = { .fst = false, .snd = ite37 }
        },
        .snd = { .fst = {  }, .snd = { .fst = {  }, .snd = {  } } }
      }
    };
  stref[0U] = st_;
  Prims_int res0 = res;
  return
    (
      (Example_Compile_Pump_output){
        .sol_en = Prims_op_GreaterThanOrEqual(Prims_op_Modulus(res0, (krml_checked_int_t)2),
          (krml_checked_int_t)1),
        .nok_stuck = Prims_op_GreaterThanOrEqual(Prims_op_Modulus(res0, (krml_checked_int_t)4),
          (krml_checked_int_t)2)
      }
    );
}

