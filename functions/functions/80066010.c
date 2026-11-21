/* Function: FUN_80066010 */
/* Address: 80066010 */

void FUN_80066010(undefined4 param_1,short param_2,short param_3,short param_4,short param_5,
                 undefined4 param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 auStack_20 [8];
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  
  puVar1 = auStack_20 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_8001cb50 >> (3 - uVar2) * 8;
  auStack_20._0_4_ = DAT_8001cb50;
  local_14 = param_2 + param_4;
  local_e = param_3 + param_5;
  local_18 = param_2;
  local_16 = param_3;
  local_12 = param_3;
  local_10 = param_2;
  local_c = local_14;
  local_a = local_e;
  FUN_8006426c(param_1,&local_18,auStack_20,param_6);
  return;
}


