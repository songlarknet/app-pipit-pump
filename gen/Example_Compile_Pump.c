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
          .fst = { .fst = { .fst = {  }, .snd = {  } }, .snd = (krml_checked_int_t)0 },
          .snd = {
            .fst = { .fst = {  }, .snd = { .fst = true, .snd = (krml_checked_int_t)0 } },
            .snd = { .fst = {  }, .snd = { .fst = {  }, .snd = {  } } }
          }
        }
      }
    );
}

Example_Compile_Pump_output
Example_Compile_Pump_step(Example_Compile_Pump_input inp, Example_Compile_Pump_state *stref)
{
  Example_Compile_Pump_state st = stref[0U];
  K___K_________K___K___K______________K______________Prims_int___ s10 = st.fst;
  K________K___K___K______________K______________Prims_int______K___K_________bool___K______Prims_int___K________K_________K______________K___________
  s20 = st.snd;
  K___K___K______________K______________Prims_int s110 = s20.fst;
  K___K___K_________bool___K______Prims_int_K________K_________K______________K___________
  s212 = s20.snd;
  K___K_________bool___K______Prims_int s120 = s212.fst;
  K___K_________K___K___K______________K______________Prims_int___ s270 = s10;
  K___K___K______________K______________Prims_int s280 = s270.snd;
  Prims_int ite0;
  if (inp.estop_ok)
    ite0 = (krml_checked_int_t)1;
  else
    ite0 = (krml_checked_int_t)0;
  Prims_int ite1;
  if (ite0 != (krml_checked_int_t)0)
    if (inp.level_low)
      ite1 = (krml_checked_int_t)1;
    else
      ite1 = (krml_checked_int_t)0;
  else
    ite1 = (krml_checked_int_t)0;
  krml_checked_int_t ite2;
  if (ite1 != (krml_checked_int_t)0)
    ite2 = s280.snd;
  else
    ite2 = (krml_checked_int_t)0;
  Prims_int ite3;
  if (Prims_op_LessThanOrEqual((krml_checked_int_t)100, ite2))
    ite3 = (krml_checked_int_t)1;
  else
    ite3 = (krml_checked_int_t)0;
  Prims_int ite4;
  if (ite3 != (krml_checked_int_t)0)
  {
    K___bool_K______Prims_int s28 = s120.snd;
    K___K___K______________K______________Prims_int s2100 = s110;
    K___K_________K___K___K______________K______________Prims_int___ s2110 = s10;
    K___K___K______________K______________Prims_int s212 = s2110.snd;
    Prims_int ite0;
    if (inp.estop_ok)
      ite0 = (krml_checked_int_t)1;
    else
      ite0 = (krml_checked_int_t)0;
    Prims_int ite1;
    if (ite0 != (krml_checked_int_t)0)
      if (inp.level_low)
        ite1 = (krml_checked_int_t)1;
      else
        ite1 = (krml_checked_int_t)0;
    else
      ite1 = (krml_checked_int_t)0;
    krml_checked_int_t ite2;
    if (ite1 != (krml_checked_int_t)0)
      ite2 = s212.snd;
    else
      ite2 = (krml_checked_int_t)0;
    Prims_int ite3;
    if (Prims_op_LessThanOrEqual((krml_checked_int_t)100, ite2))
      ite3 = (krml_checked_int_t)1;
    else
      ite3 = (krml_checked_int_t)0;
    krml_checked_int_t ite5;
    if (ite3 != (krml_checked_int_t)0)
      ite5 = s2100.snd;
    else
      ite5 = (krml_checked_int_t)0;
    Prims_int ite6;
    if (Prims_op_LessThanOrEqual((krml_checked_int_t)1000, ite5))
      ite6 = (krml_checked_int_t)1;
    else
      ite6 = (krml_checked_int_t)0;
    Prims_int ite7;
    if (ite6 != (krml_checked_int_t)0)
    {
      K___K___K______________K______________Prims_int s210 = s110;
      K___K_________K___K___K______________K______________Prims_int___ s211 = s10;
      K___K___K______________K______________Prims_int s212 = s211.snd;
      Prims_int ite0;
      if (inp.estop_ok)
        ite0 = (krml_checked_int_t)1;
      else
        ite0 = (krml_checked_int_t)0;
      Prims_int ite1;
      if (ite0 != (krml_checked_int_t)0)
        if (inp.level_low)
          ite1 = (krml_checked_int_t)1;
        else
          ite1 = (krml_checked_int_t)0;
      else
        ite1 = (krml_checked_int_t)0;
      krml_checked_int_t ite2;
      if (ite1 != (krml_checked_int_t)0)
        ite2 = s212.snd;
      else
        ite2 = (krml_checked_int_t)0;
      Prims_int ite3;
      if (Prims_op_LessThanOrEqual((krml_checked_int_t)100, ite2))
        ite3 = (krml_checked_int_t)1;
      else
        ite3 = (krml_checked_int_t)0;
      krml_checked_int_t ite;
      if (ite3 != (krml_checked_int_t)0)
        ite = s210.snd;
      else
        ite = (krml_checked_int_t)0;
      if (Prims_op_LessThanOrEqual((krml_checked_int_t)1000, ite))
        ite7 = (krml_checked_int_t)1;
      else
        ite7 = (krml_checked_int_t)0;
    }
    else
    {
      bool iflag = s28.fst;
      Prims_int s29 = s28.snd;
      if (iflag)
        ite7 = (krml_checked_int_t)0;
      else
        ite7 = s29;
    }
    if (ite7 == (krml_checked_int_t)0)
      ite4 = (krml_checked_int_t)1;
    else
      ite4 = (krml_checked_int_t)0;
  }
  else
    ite4 = (krml_checked_int_t)0;
  krml_checked_int_t ite5;
  if (ite4 != (krml_checked_int_t)0)
    ite5 = (krml_checked_int_t)1;
  else
    ite5 = (krml_checked_int_t)0;
  K___bool_K______Prims_int s260 = s120.snd;
  K___K___K______________K______________Prims_int s281 = s110;
  K___K_________K___K___K______________K______________Prims_int___ s290 = s10;
  K___K___K______________K______________Prims_int s210 = s290.snd;
  Prims_int ite6;
  if (inp.estop_ok)
    ite6 = (krml_checked_int_t)1;
  else
    ite6 = (krml_checked_int_t)0;
  Prims_int ite7;
  if (ite6 != (krml_checked_int_t)0)
    if (inp.level_low)
      ite7 = (krml_checked_int_t)1;
    else
      ite7 = (krml_checked_int_t)0;
  else
    ite7 = (krml_checked_int_t)0;
  krml_checked_int_t ite8;
  if (ite7 != (krml_checked_int_t)0)
    ite8 = s210.snd;
  else
    ite8 = (krml_checked_int_t)0;
  Prims_int ite9;
  if (Prims_op_LessThanOrEqual((krml_checked_int_t)100, ite8))
    ite9 = (krml_checked_int_t)1;
  else
    ite9 = (krml_checked_int_t)0;
  krml_checked_int_t ite10;
  if (ite9 != (krml_checked_int_t)0)
    ite10 = s281.snd;
  else
    ite10 = (krml_checked_int_t)0;
  Prims_int ite11;
  if (Prims_op_LessThanOrEqual((krml_checked_int_t)1000, ite10))
    ite11 = (krml_checked_int_t)1;
  else
    ite11 = (krml_checked_int_t)0;
  Prims_int ite12;
  if (ite11 != (krml_checked_int_t)0)
  {
    K___K___K______________K______________Prims_int s28 = s110;
    K___K_________K___K___K______________K______________Prims_int___ s29 = s10;
    K___K___K______________K______________Prims_int s210 = s29.snd;
    Prims_int ite0;
    if (inp.estop_ok)
      ite0 = (krml_checked_int_t)1;
    else
      ite0 = (krml_checked_int_t)0;
    Prims_int ite1;
    if (ite0 != (krml_checked_int_t)0)
      if (inp.level_low)
        ite1 = (krml_checked_int_t)1;
      else
        ite1 = (krml_checked_int_t)0;
    else
      ite1 = (krml_checked_int_t)0;
    krml_checked_int_t ite2;
    if (ite1 != (krml_checked_int_t)0)
      ite2 = s210.snd;
    else
      ite2 = (krml_checked_int_t)0;
    Prims_int ite3;
    if (Prims_op_LessThanOrEqual((krml_checked_int_t)100, ite2))
      ite3 = (krml_checked_int_t)1;
    else
      ite3 = (krml_checked_int_t)0;
    krml_checked_int_t ite;
    if (ite3 != (krml_checked_int_t)0)
      ite = s28.snd;
    else
      ite = (krml_checked_int_t)0;
    if (Prims_op_LessThanOrEqual((krml_checked_int_t)1000, ite))
      ite12 = (krml_checked_int_t)1;
    else
      ite12 = (krml_checked_int_t)0;
  }
  else
  {
    bool iflag = s260.fst;
    Prims_int s27 = s260.snd;
    if (iflag)
      ite12 = (krml_checked_int_t)0;
    else
      ite12 = s27;
  }
  krml_checked_int_t ite13;
  if (ite12 != (krml_checked_int_t)0)
    ite13 = (krml_checked_int_t)2;
  else
    ite13 = (krml_checked_int_t)0;
  Prims_int res = Prims_op_Addition(ite5, ite13);
  K___K_________K___K___K______________K______________Prims_int___ s1 = st.fst;
  K________K___K___K______________K______________Prims_int______K___K_________bool___K______Prims_int___K________K_________K______________K___________
  s2 = st.snd;
  K___K_________K___K___K______________K______________Prims_int___ s211 = s1;
  K___K___K______________K______________Prims_int s220 = s211.snd;
  K___K___K______________K______________Prims_int s261 = s211.snd;
  Prims_int ite14;
  if (inp.estop_ok)
    ite14 = (krml_checked_int_t)1;
  else
    ite14 = (krml_checked_int_t)0;
  Prims_int ite15;
  if (ite14 != (krml_checked_int_t)0)
    if (inp.level_low)
      ite15 = (krml_checked_int_t)1;
    else
      ite15 = (krml_checked_int_t)0;
  else
    ite15 = (krml_checked_int_t)0;
  krml_checked_int_t ite16;
  if (ite15 != (krml_checked_int_t)0)
    ite16 = s261.snd;
  else
    ite16 = (krml_checked_int_t)0;
  Prims_int ite17;
  if
  (
    Prims_op_LessThanOrEqual(Prims_op_Addition(ite16, (krml_checked_int_t)1),
      (krml_checked_int_t)65535)
  )
    ite17 = (krml_checked_int_t)1;
  else
    ite17 = (krml_checked_int_t)0;
  Prims_int ite18;
  if (ite17 != (krml_checked_int_t)0)
  {
    K___K___K______________K______________Prims_int s25 = s211.snd;
    Prims_int ite0;
    if (inp.estop_ok)
      ite0 = (krml_checked_int_t)1;
    else
      ite0 = (krml_checked_int_t)0;
    Prims_int ite1;
    if (ite0 != (krml_checked_int_t)0)
      if (inp.level_low)
        ite1 = (krml_checked_int_t)1;
      else
        ite1 = (krml_checked_int_t)0;
    else
      ite1 = (krml_checked_int_t)0;
    krml_checked_int_t ite;
    if (ite1 != (krml_checked_int_t)0)
      ite = s25.snd;
    else
      ite = (krml_checked_int_t)0;
    ite18 = Prims_op_Addition(ite, (krml_checked_int_t)1);
  }
  else
    ite18 = (krml_checked_int_t)65535;
  K___K___K______________K______________Prims_int s11 = s2.fst;
  K___K___K_________bool___K______Prims_int_K________K_________K______________K___________
  s21 = s2.snd;
  K___K___K______________K______________Prims_int s22 = s11;
  K___K___K______________K______________Prims_int s262 = s11;
  K___K_________K___K___K______________K______________Prims_int___ s271 = s1;
  K___K___K______________K______________Prims_int s282 = s271.snd;
  Prims_int ite19;
  if (inp.estop_ok)
    ite19 = (krml_checked_int_t)1;
  else
    ite19 = (krml_checked_int_t)0;
  Prims_int ite20;
  if (ite19 != (krml_checked_int_t)0)
    if (inp.level_low)
      ite20 = (krml_checked_int_t)1;
    else
      ite20 = (krml_checked_int_t)0;
  else
    ite20 = (krml_checked_int_t)0;
  krml_checked_int_t ite21;
  if (ite20 != (krml_checked_int_t)0)
    ite21 = s282.snd;
  else
    ite21 = (krml_checked_int_t)0;
  Prims_int ite22;
  if (Prims_op_LessThanOrEqual((krml_checked_int_t)100, ite21))
    ite22 = (krml_checked_int_t)1;
  else
    ite22 = (krml_checked_int_t)0;
  krml_checked_int_t ite23;
  if (ite22 != (krml_checked_int_t)0)
    ite23 = s262.snd;
  else
    ite23 = (krml_checked_int_t)0;
  Prims_int ite24;
  if
  (
    Prims_op_LessThanOrEqual(Prims_op_Addition(ite23, (krml_checked_int_t)1),
      (krml_checked_int_t)65535)
  )
    ite24 = (krml_checked_int_t)1;
  else
    ite24 = (krml_checked_int_t)0;
  Prims_int ite25;
  if (ite24 != (krml_checked_int_t)0)
  {
    K___K___K______________K______________Prims_int s25 = s11;
    K___K_________K___K___K______________K______________Prims_int___ s26 = s1;
    K___K___K______________K______________Prims_int s27 = s26.snd;
    Prims_int ite0;
    if (inp.estop_ok)
      ite0 = (krml_checked_int_t)1;
    else
      ite0 = (krml_checked_int_t)0;
    Prims_int ite1;
    if (ite0 != (krml_checked_int_t)0)
      if (inp.level_low)
        ite1 = (krml_checked_int_t)1;
      else
        ite1 = (krml_checked_int_t)0;
    else
      ite1 = (krml_checked_int_t)0;
    krml_checked_int_t ite2;
    if (ite1 != (krml_checked_int_t)0)
      ite2 = s27.snd;
    else
      ite2 = (krml_checked_int_t)0;
    Prims_int ite3;
    if (Prims_op_LessThanOrEqual((krml_checked_int_t)100, ite2))
      ite3 = (krml_checked_int_t)1;
    else
      ite3 = (krml_checked_int_t)0;
    krml_checked_int_t ite;
    if (ite3 != (krml_checked_int_t)0)
      ite = s25.snd;
    else
      ite = (krml_checked_int_t)0;
    ite25 = Prims_op_Addition(ite, (krml_checked_int_t)1);
  }
  else
    ite25 = (krml_checked_int_t)65535;
  K___K_________bool___K______Prims_int s12 = s21.fst;
  K___bool_K______Prims_int s25 = s12.snd;
  K___K___K______________K______________Prims_int s272 = s11;
  K___K_________K___K___K______________K______________Prims_int___ s283 = s1;
  K___K___K______________K______________Prims_int s29 = s283.snd;
  Prims_int ite26;
  if (inp.estop_ok)
    ite26 = (krml_checked_int_t)1;
  else
    ite26 = (krml_checked_int_t)0;
  Prims_int ite27;
  if (ite26 != (krml_checked_int_t)0)
    if (inp.level_low)
      ite27 = (krml_checked_int_t)1;
    else
      ite27 = (krml_checked_int_t)0;
  else
    ite27 = (krml_checked_int_t)0;
  krml_checked_int_t ite28;
  if (ite27 != (krml_checked_int_t)0)
    ite28 = s29.snd;
  else
    ite28 = (krml_checked_int_t)0;
  Prims_int ite29;
  if (Prims_op_LessThanOrEqual((krml_checked_int_t)100, ite28))
    ite29 = (krml_checked_int_t)1;
  else
    ite29 = (krml_checked_int_t)0;
  krml_checked_int_t ite30;
  if (ite29 != (krml_checked_int_t)0)
    ite30 = s272.snd;
  else
    ite30 = (krml_checked_int_t)0;
  Prims_int ite31;
  if (Prims_op_LessThanOrEqual((krml_checked_int_t)1000, ite30))
    ite31 = (krml_checked_int_t)1;
  else
    ite31 = (krml_checked_int_t)0;
  Prims_int ite32;
  if (ite31 != (krml_checked_int_t)0)
  {
    K___K___K______________K______________Prims_int s27 = s11;
    K___K_________K___K___K______________K______________Prims_int___ s28 = s1;
    K___K___K______________K______________Prims_int s29 = s28.snd;
    Prims_int ite0;
    if (inp.estop_ok)
      ite0 = (krml_checked_int_t)1;
    else
      ite0 = (krml_checked_int_t)0;
    Prims_int ite1;
    if (ite0 != (krml_checked_int_t)0)
      if (inp.level_low)
        ite1 = (krml_checked_int_t)1;
      else
        ite1 = (krml_checked_int_t)0;
    else
      ite1 = (krml_checked_int_t)0;
    krml_checked_int_t ite2;
    if (ite1 != (krml_checked_int_t)0)
      ite2 = s29.snd;
    else
      ite2 = (krml_checked_int_t)0;
    Prims_int ite3;
    if (Prims_op_LessThanOrEqual((krml_checked_int_t)100, ite2))
      ite3 = (krml_checked_int_t)1;
    else
      ite3 = (krml_checked_int_t)0;
    krml_checked_int_t ite;
    if (ite3 != (krml_checked_int_t)0)
      ite = s27.snd;
    else
      ite = (krml_checked_int_t)0;
    if (Prims_op_LessThanOrEqual((krml_checked_int_t)1000, ite))
      ite32 = (krml_checked_int_t)1;
    else
      ite32 = (krml_checked_int_t)0;
  }
  else
  {
    bool iflag = s25.fst;
    Prims_int s26 = s25.snd;
    if (iflag)
      ite32 = (krml_checked_int_t)0;
    else
      ite32 = s26;
  }
  Example_Compile_Pump_state
  st_ =
    {
      .fst = { .fst = {  }, .snd = { .fst = { .fst = {  }, .snd = {  } }, .snd = ite18 } },
      .snd = {
        .fst = { .fst = { .fst = {  }, .snd = {  } }, .snd = ite25 },
        .snd = {
          .fst = { .fst = {  }, .snd = { .fst = false, .snd = ite32 } },
          .snd = { .fst = {  }, .snd = { .fst = {  }, .snd = {  } } }
        }
      }
    };
  stref[0U] = st_;
  Prims_int res0 = res;
  return
    (
      (Example_Compile_Pump_output){
        .pump_en = Prims_op_GreaterThanOrEqual(Prims_op_Modulus(res0, (krml_checked_int_t)2),
          (krml_checked_int_t)1),
        .nok_stuck = Prims_op_GreaterThanOrEqual(Prims_op_Modulus(res0, (krml_checked_int_t)4),
          (krml_checked_int_t)2)
      }
    );
}

