/* Function: RenderParticleElement */
/* Address: 8004f368 */

void RenderParticleElement(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  piVar2 = *(int **)(param_1 + 8);
  iVar12 = *(int *)(param_1 + 0x20);
  iVar9 = piVar2[1];
  iVar10 = *piVar2;
  iVar11 = piVar2[2];
  uVar5 = *(int *)(param_1 + 0x28) - iVar9;
  uVar7 = *(int *)(param_1 + 0x2c) - iVar11;
  uVar8 = *(int *)(param_1 + 0x24) - iVar10;
  uVar1 = CalcDistance2D(uVar8,uVar7);
  uVar3 = uVar1;
  if ((int)uVar1 < 0) {
    uVar3 = -uVar1;
  }
  uVar6 = uVar5;
  if ((int)uVar5 < 0) {
    uVar6 = -uVar5;
  }
  if (uVar3 == 0 && uVar6 == 0) {
    uVar3 = 0;
  }
  else {
    if ((int)uVar6 < (int)uVar3) {
      iVar4 = (int)uVar3 >> 10;
      if ((uVar6 & 0x7fe00000) == 0) {
        iVar14 = (int)(uVar6 << 10) / (int)uVar3;
        if (uVar3 == 0) {
          trap(0x1c00);
        }
        if ((uVar3 == 0xffffffff) && (uVar6 << 10 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        iVar14 = (int)uVar6 / iVar4;
        if (iVar4 == 0) {
          trap(0x1c00);
        }
        if ((iVar4 == -1) && (uVar6 == 0x80000000)) {
          trap(0x1800);
        }
      }
      uVar3 = (uint)*(short *)(&DAT_800c990c + iVar14 * 2);
    }
    else {
      iVar4 = (int)uVar6 >> 10;
      if ((uVar3 & 0x7fe00000) == 0) {
        iVar14 = (int)(uVar3 << 10) / (int)uVar6;
        if (uVar6 == 0) {
          trap(0x1c00);
        }
        if ((uVar6 == 0xffffffff) && (uVar3 << 10 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        iVar14 = (int)uVar3 / iVar4;
        if (iVar4 == 0) {
          trap(0x1c00);
        }
        if ((iVar4 == -1) && (uVar3 == 0x80000000)) {
          trap(0x1800);
        }
      }
      uVar3 = 0x400 - (int)*(short *)(&DAT_800c990c + iVar14 * 2);
    }
    if ((int)uVar1 < 0) {
      uVar3 = 0x800 - uVar3;
    }
    if ((int)uVar5 < 0) {
      uVar3 = -uVar3;
    }
  }
  uVar3 = (&g_SinCosTable)[uVar3 & 0xfff];
  if ((int)uVar3 < 0) {
    uVar5 = (int)uVar3 >> 0x10 | 0xffff8000;
  }
  else {
    uVar5 = (int)uVar3 >> 0x10 & 0x7fff;
  }
  if ((uVar3 & 0x8000) == 0) {
    uVar3 = uVar3 & 0x7fff;
  }
  else {
    uVar3 = uVar3 | 0xffff8000;
  }
  *(uint *)(param_1 + 0x28) = uVar3 * 1000 + iVar9;
  uVar6 = uVar3 * 1000 - 0xc8000;
  iVar4 = (int)(uVar5 * 0x7d) >> 9;
  uVar3 = uVar1;
  if ((int)uVar1 < 0) {
    uVar3 = -uVar1;
  }
  uVar5 = uVar6;
  if ((int)uVar6 < 0) {
    uVar5 = -uVar6;
  }
  if (uVar3 == 0 && uVar5 == 0) {
    uVar3 = 0;
  }
  else {
    if ((int)uVar5 < (int)uVar3) {
      iVar14 = (int)uVar3 >> 10;
      if ((uVar5 & 0x7fe00000) == 0) {
        iVar13 = (int)(uVar5 << 10) / (int)uVar3;
        if (uVar3 == 0) {
          trap(0x1c00);
        }
        if ((uVar3 == 0xffffffff) && (uVar5 << 10 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        iVar13 = (int)uVar5 / iVar14;
        if (iVar14 == 0) {
          trap(0x1c00);
        }
        if ((iVar14 == -1) && (uVar5 == 0x80000000)) {
          trap(0x1800);
        }
      }
      uVar3 = (uint)*(short *)(&DAT_800c990c + iVar13 * 2);
    }
    else {
      iVar14 = (int)uVar5 >> 10;
      if ((uVar3 & 0x7fe00000) == 0) {
        iVar13 = (int)(uVar3 << 10) / (int)uVar5;
        if (uVar5 == 0) {
          trap(0x1c00);
        }
        if ((uVar5 == 0xffffffff) && (uVar3 << 10 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        iVar13 = (int)uVar3 / iVar14;
        if (iVar14 == 0) {
          trap(0x1c00);
        }
        if ((iVar14 == -1) && (uVar3 == 0x80000000)) {
          trap(0x1800);
        }
      }
      uVar3 = 0x400 - (int)*(short *)(&DAT_800c990c + iVar13 * 2);
    }
    if ((int)uVar1 < 0) {
      uVar3 = 0x800 - uVar3;
    }
    if ((int)uVar6 < 0) {
      uVar3 = -uVar3;
    }
  }
  uVar3 = (&g_SinCosTable)[uVar3 & 0xfff];
  if ((int)uVar3 < 0) {
    uVar1 = (int)uVar3 >> 0x10 | 0xffff8000;
  }
  else {
    uVar1 = (int)uVar3 >> 0x10 & 0x7fff;
  }
  if ((uVar3 & 0x8000) == 0) {
    uVar3 = uVar3 & 0x7fff;
  }
  else {
    uVar3 = uVar3 | 0xffff8000;
  }
  *(uint *)(param_1 + 0x34) = iVar12 * uVar3 + iVar9;
  iVar9 = (int)(iVar12 * uVar1) >> 0xc;
  uVar3 = uVar7;
  if ((int)uVar7 < 0) {
    uVar3 = -uVar7;
  }
  uVar1 = uVar8;
  if ((int)uVar8 < 0) {
    uVar1 = -uVar8;
  }
  if (uVar3 == 0 && uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    if ((int)uVar1 < (int)uVar3) {
      iVar12 = (int)uVar3 >> 10;
      if ((uVar1 & 0x7fe00000) == 0) {
        iVar14 = (int)(uVar1 << 10) / (int)uVar3;
        if (uVar3 == 0) {
          trap(0x1c00);
        }
        if ((uVar3 == 0xffffffff) && (uVar1 << 10 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        iVar14 = (int)uVar1 / iVar12;
        if (iVar12 == 0) {
          trap(0x1c00);
        }
        if ((iVar12 == -1) && (uVar1 == 0x80000000)) {
          trap(0x1800);
        }
      }
      uVar3 = (uint)*(short *)(&DAT_800c990c + iVar14 * 2);
    }
    else {
      iVar12 = (int)uVar1 >> 10;
      if ((uVar3 & 0x7fe00000) == 0) {
        iVar14 = (int)(uVar3 << 10) / (int)uVar1;
        if (uVar1 == 0) {
          trap(0x1c00);
        }
        if ((uVar1 == 0xffffffff) && (uVar3 << 10 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        iVar14 = (int)uVar3 / iVar12;
        if (iVar12 == 0) {
          trap(0x1c00);
        }
        if ((iVar12 == -1) && (uVar3 == 0x80000000)) {
          trap(0x1800);
        }
      }
      uVar3 = 0x400 - (int)*(short *)(&DAT_800c990c + iVar14 * 2);
    }
    if ((int)uVar7 < 0) {
      uVar3 = 0x800 - uVar3;
    }
    if ((int)uVar8 < 0) {
      uVar3 = -uVar3;
    }
  }
  uVar3 = (&g_SinCosTable)[uVar3 & 0xfff];
  if ((int)uVar3 < 0) {
    uVar1 = (int)uVar3 >> 0x10 | 0xffff8000;
  }
  else {
    uVar1 = (int)uVar3 >> 0x10 & 0x7fff;
  }
  if ((uVar3 & 0x8000) == 0) {
    uVar3 = uVar3 & 0x7fff;
  }
  else {
    uVar3 = uVar3 | 0xffff8000;
  }
  *(uint *)(param_1 + 0x24) = iVar4 * uVar3 + iVar10;
  *(uint *)(param_1 + 0x30) = iVar9 * uVar3 + iVar10;
  *(uint *)(param_1 + 0x2c) = iVar4 * uVar1 + iVar11;
  *(uint *)(param_1 + 0x38) = iVar9 * uVar1 + iVar11;
  return;
}


