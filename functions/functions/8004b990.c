/* Function: FUN_8004b990 */
/* Address: 8004b990 */

void FUN_8004b990(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)*(short *)(param_1 + 0x16c) * (DAT_1f800070 >> 4);
  *(int *)(param_1 + 0x1a0) = iVar1 * *(short *)(param_1 + 0x1b0) >> 8;
  *(int *)(param_1 + 0x1a4) = iVar1 * *(short *)(param_1 + 0x1b2) >> 8;
  *(int *)(param_1 + 0x1a8) = iVar1 * *(short *)(param_1 + 0x1b4) >> 8;
  *(int *)(param_1 + 0x1ac) = iVar1 * *(short *)(param_1 + 0x1b6) >> 8;
  *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + *(int *)(param_1 + 0x270);
  *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + *(int *)(param_1 + 0x270);
  *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + *(int *)(param_1 + 0x274);
  *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + *(int *)(param_1 + 0x274);
  iVar1 = DAT_1f800078 * *(int *)(param_1 + 0x17c) >> 1;
  iVar3 = (iVar1 << 0xb) >> 0xc;
  iVar1 = iVar1 - iVar3;
  iVar4 = DAT_1f800088 * *(int *)(param_1 + 0x184) >> 1;
  iVar2 = (iVar4 << 0xb) >> 0xc;
  *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + (iVar2 - iVar3);
  iVar4 = iVar4 - iVar2;
  *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + (-iVar3 - iVar2);
  *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + iVar4 + iVar1;
  *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + (iVar1 - iVar4);
  return;
}


