/* Function: FUN_80034960 */
/* Address: 80034960 */

int FUN_80034960(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  uVar6 = *(int *)(param_2 + 0x68) - *(int *)(param_1 + 0x68);
  uVar2 = *(int *)(param_2 + 0x70) - *(int *)(param_1 + 0x70);
  uVar9 = uVar2;
  if ((int)uVar2 < 0) {
    uVar9 = -uVar2;
  }
  uVar1 = uVar6;
  if ((int)uVar6 < 0) {
    uVar1 = -uVar6;
  }
  if (uVar9 == 0 && uVar1 == 0) {
    uVar9 = 0;
  }
  else {
    if ((int)uVar1 < (int)uVar9) {
      iVar10 = (int)uVar9 >> 10;
      if ((uVar1 & 0x7fe00000) == 0) {
        iVar3 = (int)(uVar1 << 10) / (int)uVar9;
        if (uVar9 == 0) {
          trap(0x1c00);
        }
        if ((uVar9 == 0xffffffff) && (uVar1 << 10 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        iVar3 = (int)uVar1 / iVar10;
        if (iVar10 == 0) {
          trap(0x1c00);
        }
        if ((iVar10 == -1) && (uVar1 == 0x80000000)) {
          trap(0x1800);
        }
      }
      uVar9 = (uint)*(short *)(&DAT_800c990c + iVar3 * 2);
    }
    else {
      iVar10 = (int)uVar1 >> 10;
      if ((uVar9 & 0x7fe00000) == 0) {
        iVar3 = (int)(uVar9 << 10) / (int)uVar1;
        if (uVar1 == 0) {
          trap(0x1c00);
        }
        if ((uVar1 == 0xffffffff) && (uVar9 << 10 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        iVar3 = (int)uVar9 / iVar10;
        if (iVar10 == 0) {
          trap(0x1c00);
        }
        if ((iVar10 == -1) && (uVar9 == 0x80000000)) {
          trap(0x1800);
        }
      }
      uVar9 = 0x400 - (int)*(short *)(&DAT_800c990c + iVar3 * 2);
    }
    if ((int)uVar2 < 0) {
      uVar9 = 0x800 - uVar9;
    }
    if ((int)uVar6 < 0) {
      uVar9 = -uVar9;
    }
  }
  uVar2 = (&g_SinCosTable)[-uVar9 & 0xfff];
  if ((int)uVar2 < 0) {
    uVar6 = (int)uVar2 >> 0x10 | 0xffff8000;
  }
  else {
    uVar6 = (int)uVar2 >> 0x10 & 0x7fff;
  }
  if ((uVar2 & 0x8000) == 0) {
    uVar2 = uVar2 & 0x7fff;
  }
  else {
    uVar2 = uVar2 | 0xffff8000;
  }
  iVar3 = *(int *)(param_1 + 0x58) >> 3;
  iVar7 = *(int *)(param_1 + 0x50) >> 3;
  iVar4 = *(int *)(param_2 + 0x58) >> 3;
  iVar8 = *(int *)(param_2 + 0x50) >> 3;
  iVar11 = (int)(iVar3 * uVar6 - iVar7 * uVar2) >> 0xc;
  iVar12 = (int)(iVar4 * uVar6 - iVar8 * uVar2) >> 0xc;
  iVar10 = iVar11 - iVar12;
  iVar3 = (int)(iVar3 * uVar2 + iVar7 * uVar6) >> 0xc;
  iVar4 = (int)(iVar4 * uVar2 + iVar8 * uVar6) >> 0xc;
  if (-0x2001 < iVar10) {
    if (iVar10 < 0x600) {
      iVar10 = 0x600;
    }
    iVar7 = (int)*(short *)(param_1 + 0x16c) + (int)*(short *)(param_2 + 0x16c);
    iVar8 = (int)*(short *)(param_2 + 0x16c) << 0xc;
    if (iVar7 == 0) {
      trap(0x1c00);
    }
    if ((iVar7 == -1) && (iVar8 == -0x80000000)) {
      trap(0x1800);
    }
    iVar5 = (int)*(short *)(param_1 + 0x16c) << 0xc;
    if (iVar7 == 0) {
      trap(0x1c00);
    }
    if ((iVar7 == -1) && (iVar5 == -0x80000000)) {
      trap(0x1800);
    }
    iVar8 = ((iVar8 / iVar7) * 0x13e8 >> 0xc) * iVar10 >> 0xc;
    iVar11 = iVar11 - iVar8;
    uVar9 = (&g_SinCosTable)[uVar9 & 0xfff];
    iVar7 = ((iVar5 / iVar7) * 0x13e8 >> 0xc) * iVar10 >> 0xc;
    iVar12 = iVar12 + iVar7;
    if ((int)uVar9 < 0) {
      uVar2 = (int)uVar9 >> 0x10 | 0xffff8000;
    }
    else {
      uVar2 = (int)uVar9 >> 0x10 & 0x7fff;
    }
    if ((uVar9 & 0x8000) == 0) {
      uVar9 = uVar9 & 0x7fff;
    }
    else {
      uVar9 = uVar9 | 0xffff8000;
    }
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) - ((int)(iVar8 * uVar9) >> 0xc);
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) - ((int)(iVar8 * uVar2) >> 0xc);
    *(int *)(param_2 + 0x74) = *(int *)(param_2 + 0x74) + ((int)(iVar7 * uVar9) >> 0xc);
    *(int *)(param_2 + 0x7c) = *(int *)(param_2 + 0x7c) + ((int)(iVar7 * uVar2) >> 0xc);
    *(int *)(param_1 + 0x50) = (int)(iVar11 * uVar9 + iVar3 * uVar2) >> 9;
    *(int *)(param_1 + 0x58) = (int)(iVar11 * uVar2 - iVar3 * uVar9) >> 9;
    *(int *)(param_2 + 0x50) = (int)(iVar12 * uVar9 + iVar4 * uVar2) >> 9;
    *(int *)(param_2 + 0x58) = (int)(iVar12 * uVar2 - iVar4 * uVar9) >> 9;
  }
  return iVar10;
}


