/* Function: FUN_8004b1a4 */
/* Address: 8004b1a4 */

void FUN_8004b1a4(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(short *)(param_1 + 0x360) == 0) {
    uVar4 = 0;
    uVar1 = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)(param_1 + 0x1c8);
    if (uVar4 == 0) {
      trap(0x1c00);
    }
    if ((uVar4 == 0xffffffff) && (DAT_1f800060 == -0x80000000)) {
      trap(0x1800);
    }
    uVar1 = (uint)*(ushort *)(param_1 + 0x1c4);
    uVar2 = (DAT_1f800060 / (int)uVar4) * (int)*(short *)(param_1 + 0x170) * -5;
    uVar4 = -uVar1;
    if (((int)uVar4 <= (int)uVar2) && (uVar4 = uVar2, (int)uVar1 < (int)uVar2)) {
      uVar4 = uVar1;
    }
    uVar2 = (uint)*(ushort *)(param_1 + 0x1ca);
    if (uVar2 == 0) {
      trap(0x1c00);
    }
    if ((uVar2 == 0xffffffff) && (DAT_1f800068 == -0x80000000)) {
      trap(0x1800);
    }
    uVar3 = (uint)*(ushort *)(param_1 + 0x1c6);
    uVar1 = -uVar3;
    uVar2 = (DAT_1f800068 / (int)uVar2) * (int)*(short *)(param_1 + 0x170) * 4;
    if (((int)uVar1 <= (int)uVar2) && (uVar1 = uVar3, (int)uVar2 <= (int)uVar3)) goto LAB_8004b2c0;
  }
  uVar2 = uVar1;
LAB_8004b2c0:
  DAT_1f800090 = (int)(*(int *)(param_1 + 0x1e4) + uVar4) >> 1;
  *(int *)(param_1 + 0x1e4) = DAT_1f800090;
  DAT_1f800080 = (int)(*(int *)(param_1 + 0x1e8) + uVar2) >> 1;
  *(int *)(param_1 + 0x1e8) = DAT_1f800080;
  DAT_1f800088 = DAT_1f800088 + DAT_1f800090;
  DAT_1f800078 = DAT_1f800078 + DAT_1f800080;
  return;
}


