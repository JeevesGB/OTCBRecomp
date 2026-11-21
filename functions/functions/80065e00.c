/* Function: DrawRaceSpriteEx */
/* Address: 80065e00 */

void DrawRaceSpriteEx(short *param_1,short *param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  short local_28;
  short local_26;
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  
  local_28 = *param_1;
  local_18 = *param_2;
  local_16 = param_2[1];
  local_26 = param_1[1];
  local_24 = local_28 + param_1[2];
  local_1e = local_26 + param_1[3];
  local_14 = local_18 + param_2[2];
  local_e = local_16 + param_2[3];
  local_22 = local_26;
  local_20 = local_28;
  local_1c = local_24;
  local_1a = local_1e;
  local_12 = local_16;
  local_10 = local_18;
  local_c = local_14;
  local_a = local_e;
  FUN_8006468c(&local_28,param_3,&local_18,param_4,param_5,param_6);
  return;
}


