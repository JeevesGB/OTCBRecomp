/* Function: FUN_80049670 */
/* Address: 80049670 */

void FUN_80049670(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x10) + 0x62);
  iVar3 = *(short *)(*(int *)(param_1 + 0x10) + 0x60) * 2;
  iVar2 = (uint)(byte)(&DAT_800afad0)[iVar3] * 0x14 + -0x7ff50480;
  *(int *)(param_1 + 0x2d8) = iVar2;
  *(int *)(param_1 + 0x2d4) = iVar2;
  iVar4 = sVar1 * 2;
  iVar2 = (uint)(byte)(&DAT_800afad1)[iVar3] * 0x14 + -0x7ff50480;
  *(int *)(param_1 + 0x2c8) = iVar2;
  *(int *)(param_1 + 0x2c4) = iVar2;
  iVar2 = (uint)(byte)(&DAT_800afad0)[iVar4] * 0x14 + -0x7ff50480;
  *(int *)(param_1 + 0x2e0) = iVar2;
  *(int *)(param_1 + 0x2dc) = iVar2;
  iVar2 = (uint)(byte)(&DAT_800afad1)[iVar4] * 0x14 + -0x7ff50480;
  *(int *)(param_1 + 0x2d0) = iVar2;
  *(int *)(param_1 + 0x2cc) = iVar2;
  return;
}


