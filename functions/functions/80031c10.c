/* Function: FUN_80031c10 */
/* Address: 80031c10 */

uint FUN_80031c10(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = *(int *)(param_1 + 0x10);
  iVar1 = (int)*(short *)(param_1 + 0x32);
  uVar5 = *(uint *)((int)&g_SinCosTable + (*(int *)(iVar6 + 0x18c) >> 10 & 0x3ffcU));
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if ((int)uVar5 < 0) {
    uVar3 = (int)uVar5 >> 0x10 | 0xffff8000;
  }
  else {
    uVar3 = (int)uVar5 >> 0x10 & 0x7fff;
  }
  if ((uVar5 & 0x8000) == 0) {
    uVar5 = uVar5 & 0x7fff;
  }
  else {
    uVar5 = uVar5 | 0xffff8000;
  }
  iVar8 = *(int *)(iVar6 + 0x70) + uVar3 * (int)*(short *)(param_1 + 0x2e);
  uVar7 = iVar8 - *(int *)(param_1 + 0x40);
  iVar6 = *(int *)(iVar6 + 0x68) + uVar5 * (int)*(short *)(param_1 + 0x2e);
  uVar3 = iVar6 - *(int *)(param_1 + 0x38);
  uVar5 = uVar7;
  if ((int)uVar7 < 0) {
    uVar5 = -uVar7;
  }
  uVar4 = uVar3;
  if ((int)uVar3 < 0) {
    uVar4 = -uVar3;
  }
  if (uVar5 == 0 && uVar4 == 0) {
    uVar5 = 0;
  }
  else {
    if ((int)uVar4 < (int)uVar5) {
      iVar2 = (int)uVar5 >> 10;
      if ((uVar4 & 0x7fe00000) == 0) {
        iVar9 = (int)(uVar4 << 10) / (int)uVar5;
        if (uVar5 == 0) {
          trap(0x1c00);
        }
        if ((uVar5 == 0xffffffff) && (uVar4 << 10 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        iVar9 = (int)uVar4 / iVar2;
        if (iVar2 == 0) {
          trap(0x1c00);
        }
        if ((iVar2 == -1) && (uVar4 == 0x80000000)) {
          trap(0x1800);
        }
      }
      uVar5 = (uint)*(short *)(&DAT_800c990c + iVar9 * 2);
    }
    else {
      iVar2 = (int)uVar4 >> 10;
      if ((uVar5 & 0x7fe00000) == 0) {
        iVar9 = (int)(uVar5 << 10) / (int)uVar4;
        if (uVar4 == 0) {
          trap(0x1c00);
        }
        if ((uVar4 == 0xffffffff) && (uVar5 << 10 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        iVar9 = (int)uVar5 / iVar2;
        if (iVar2 == 0) {
          trap(0x1c00);
        }
        if ((iVar2 == -1) && (uVar5 == 0x80000000)) {
          trap(0x1800);
        }
      }
      uVar5 = 0x400 - (int)*(short *)(&DAT_800c990c + iVar9 * 2);
    }
    if ((int)uVar7 < 0) {
      uVar5 = 0x800 - uVar5;
    }
    if ((int)uVar3 < 0) {
      uVar5 = -uVar5;
    }
  }
  uVar3 = (&g_SinCosTable)[uVar5 & 0xfff];
  if ((int)uVar3 < 0) {
    uVar7 = (int)uVar3 >> 0x10 | 0xffff8000;
  }
  else {
    uVar7 = (int)uVar3 >> 0x10 & 0x7fff;
  }
  if ((uVar3 & 0x8000) == 0) {
    uVar3 = uVar3 & 0x7fff;
  }
  else {
    uVar3 = uVar3 | 0xffff8000;
  }
  *(uint *)(param_1 + 0x38) = uVar3 * -iVar1 + iVar6;
  *(uint *)(param_1 + 0x40) = uVar7 * -iVar1 + iVar8;
  return uVar5;
}


