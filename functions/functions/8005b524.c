/* Function: FUN_8005b524 */
/* Address: 8005b524 */

short * FUN_8005b524(int param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  u_short uVar4;
  uint tp;
  int iVar5;
  int iVar6;
  short local_28;
  short local_20;
  short local_1e;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  
  tp = *(uint *)(param_1 + 4);
  iVar6 = param_1 + *(int *)(param_1 + 8) + 8;
  if ((tp & 8) != 0) {
    local_18 = *(short *)(param_1 + 0xc);
    local_16 = *(short *)(param_1 + 0xe);
    local_14 = *(short *)(param_1 + 0x10);
    local_12 = *(short *)(param_1 + 0x12);
  }
  sVar2 = *(short *)(iVar6 + 4);
  sVar3 = *(short *)(iVar6 + 6);
  local_20 = *(short *)(iVar6 + 8);
  local_1e = *(short *)(iVar6 + 10);
  if (local_20 == 0) {
    local_20 = 0x100;
  }
  if (local_1e == 0) {
    local_1e = 0x100;
  }
  iVar5 = (int)sVar2;
  sVar1 = *(short *)(&g_TexPageTable + (tp & 3) * 2);
  iVar6 = iVar5;
  if (iVar5 < 0) {
    iVar6 = iVar5 + 0x3f;
  }
  *param_2 = (short)((uint)((iVar5 + (iVar6 >> 6) * -0x40) * 0x10000) >> 0x10) * sVar1;
  iVar6 = (int)sVar3;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  param_2[1] = sVar3 + (short)((uint)iVar6 >> 8) * -0x100;
  param_2[2] = local_20 * sVar1;
  param_2[3] = local_1e;
  local_28 = (short)tp;
  param_2[4] = local_28;
  uVar4 = GetTPage(tp,0,(int)sVar2,(int)sVar3);
  param_2[5] = uVar4;
  param_2[8] = local_18;
  param_2[9] = local_16;
  param_2[6] = local_14;
  param_2[7] = local_12;
  return param_2 + 10;
}


