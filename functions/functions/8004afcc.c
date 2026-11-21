/* Function: FUN_8004afcc */
/* Address: 8004afcc */

void FUN_8004afcc(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x17c);
  iVar1 = (((*(int *)(param_1 + 0x1a8) + *(int *)(param_1 + 0x1ac)) - *(int *)(param_1 + 0x1a0)) -
          *(int *)(param_1 + 0x1a4)) + (iVar6 >> 1);
  DAT_1f80007c = iVar1 / iVar6;
  if (iVar6 == 0) {
    trap(0x1c00);
  }
  if ((iVar6 == -1) && (iVar1 == -0x80000000)) {
    trap(0x1800);
  }
  DAT_1f800078 = DAT_1f80007c;
  iVar6 = *(int *)(param_1 + 0x184);
  iVar1 = (((*(int *)(param_1 + 0x1a0) + *(int *)(param_1 + 0x1a8)) - *(int *)(param_1 + 0x1a4)) -
          *(int *)(param_1 + 0x1ac)) + (iVar6 >> 1);
  DAT_1f80008c = iVar1 / iVar6;
  if (iVar6 == 0) {
    trap(0x1c00);
  }
  if ((iVar6 == -1) && (iVar1 == -0x80000000)) {
    trap(0x1800);
  }
  iVar7 = 0;
  iVar5 = 0;
  DAT_1f800088 = DAT_1f80008c;
  iVar1 = param_1;
  iVar6 = param_1;
  do {
    uVar3 = (&g_SinCosTable)[-(int)*(short *)(iVar6 + 0x328) & 0xfff];
    if ((uVar3 & 0x80000000) == 0) {
      uVar4 = (int)uVar3 >> 0x10 & 0x7fff;
    }
    else {
      uVar4 = (int)uVar3 >> 0x10 | 0xffff8000;
    }
    uVar2 = uVar3 | 0xffff8000;
    if ((uVar3 & 0x8000) == 0) {
      uVar2 = uVar3 & 0x7fff;
    }
    iVar6 = iVar6 + 2;
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + ((int)((*(int *)(iVar1 + 0x300) + 0x40 >> 7) * uVar4 +
                           (*(int *)(iVar1 + 0x304) + 0x40 >> 7) * uVar2 + 0x10) >> 5);
    iVar1 = iVar1 + 8;
  } while (iVar5 < 4);
  iVar1 = *(int *)(param_1 + 0x180);
  iVar7 = iVar7 + (iVar1 >> 1);
  if (iVar1 == 0) {
    trap(0x1c00);
  }
  if ((iVar1 == -1) && (iVar7 == -0x80000000)) {
    trap(0x1800);
  }
  DAT_1f800084 = *(int *)(param_1 + 0x198) + iVar7 / iVar1;
  return;
}


