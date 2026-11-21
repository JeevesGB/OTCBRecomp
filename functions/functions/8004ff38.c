/* Function: RenderHUDElement */
/* Address: 8004ff38 */

void RenderHUDElement(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_48 [32];
  
  puVar12 = auStack_48;
  gte_SetRotMatrix(*(MATRIX **)(param_1 + 8));
  gte_ldv0(*(SVECTOR **)(param_1 + 0xc));
  gte_rtv0();
  gte_stlvnl((VECTOR *)(puVar12 + 0x10));
  iVar3 = *(int *)(param_1 + 8);
  iVar11 = *(int *)(param_1 + 0x24);
  iVar8 = (*(int *)(puVar12 + 0x14) + *(int *)(iVar3 + 0x18)) * 0x1000;
  uVar4 = *(int *)(param_1 + 0x2c) + (*(int *)(puVar12 + 0x14) + *(int *)(iVar3 + 0x18)) * -0x1000;
  iVar9 = (*(int *)(puVar12 + 0x10) + *(int *)(iVar3 + 0x14)) * 0x1000;
  iVar10 = (*(int *)(puVar12 + 0x18) + *(int *)(iVar3 + 0x1c)) * 0x1000;
  uVar6 = *(int *)(param_1 + 0x30) + (*(int *)(puVar12 + 0x18) + *(int *)(iVar3 + 0x1c)) * -0x1000;
  uVar7 = *(int *)(param_1 + 0x28) + (*(int *)(puVar12 + 0x10) + *(int *)(iVar3 + 0x14)) * -0x1000;
  uVar1 = CalcDistance2D(uVar7,uVar6);
  uVar2 = uVar1;
  if ((int)uVar1 < 0) {
    uVar2 = -uVar1;
  }
  uVar5 = uVar4;
  if ((int)uVar4 < 0) {
    uVar5 = -uVar4;
  }
  if (uVar2 == 0 && uVar5 == 0) {
    uVar2 = 0;
  }
  else {
    if ((int)uVar5 < (int)uVar2) {
      iVar3 = (int)uVar2 >> 10;
      if ((uVar5 & 0x7fe00000) == 0) {
        iVar14 = (int)(uVar5 << 10) / (int)uVar2;
        if (uVar2 == 0) {
          trap(0x1c00);
        }
        if ((uVar2 == 0xffffffff) && (uVar5 << 10 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        iVar14 = (int)uVar5 / iVar3;
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && (uVar5 == 0x80000000)) {
          trap(0x1800);
        }
      }
      uVar2 = (uint)*(short *)(&DAT_800c990c + iVar14 * 2);
    }
    else {
      iVar3 = (int)uVar5 >> 10;
      if ((uVar2 & 0x7fe00000) == 0) {
        iVar14 = (int)(uVar2 << 10) / (int)uVar5;
        if (uVar5 == 0) {
          trap(0x1c00);
        }
        if ((uVar5 == 0xffffffff) && (uVar2 << 10 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        iVar14 = (int)uVar2 / iVar3;
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && (uVar2 == 0x80000000)) {
          trap(0x1800);
        }
      }
      uVar2 = 0x400 - (int)*(short *)(&DAT_800c990c + iVar14 * 2);
    }
    if ((int)uVar1 < 0) {
      uVar2 = 0x800 - uVar2;
    }
    if ((int)uVar4 < 0) {
      uVar2 = -uVar2;
    }
  }
  uVar2 = (&g_SinCosTable)[uVar2 & 0xfff];
  if ((int)uVar2 < 0) {
    uVar4 = (int)uVar2 >> 0x10 | 0xffff8000;
  }
  else {
    uVar4 = (int)uVar2 >> 0x10 & 0x7fff;
  }
  if ((uVar2 & 0x8000) == 0) {
    uVar2 = uVar2 & 0x7fff;
  }
  else {
    uVar2 = uVar2 | 0xffff8000;
  }
  *(uint *)(param_1 + 0x2c) = uVar2 * 800 + iVar8;
  uVar5 = uVar2 * 800 - 0xc8000;
  iVar3 = (int)(uVar4 * 0x19) >> 7;
  uVar2 = uVar1;
  if ((int)uVar1 < 0) {
    uVar2 = -uVar1;
  }
  uVar4 = uVar5;
  if ((int)uVar5 < 0) {
    uVar4 = -uVar5;
  }
  if (uVar2 == 0 && uVar4 == 0) {
    uVar2 = 0;
  }
  else {
    if ((int)uVar4 < (int)uVar2) {
      iVar14 = (int)uVar2 >> 10;
      if ((uVar4 & 0x7fe00000) == 0) {
        iVar13 = (int)(uVar4 << 10) / (int)uVar2;
        if (uVar2 == 0) {
          trap(0x1c00);
        }
        if ((uVar2 == 0xffffffff) && (uVar4 << 10 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        iVar13 = (int)uVar4 / iVar14;
        if (iVar14 == 0) {
          trap(0x1c00);
        }
        if ((iVar14 == -1) && (uVar4 == 0x80000000)) {
          trap(0x1800);
        }
      }
      uVar2 = (uint)*(short *)(&DAT_800c990c + iVar13 * 2);
    }
    else {
      iVar14 = (int)uVar4 >> 10;
      if ((uVar2 & 0x7fe00000) == 0) {
        iVar13 = (int)(uVar2 << 10) / (int)uVar4;
        if (uVar4 == 0) {
          trap(0x1c00);
        }
        if ((uVar4 == 0xffffffff) && (uVar2 << 10 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        iVar13 = (int)uVar2 / iVar14;
        if (iVar14 == 0) {
          trap(0x1c00);
        }
        if ((iVar14 == -1) && (uVar2 == 0x80000000)) {
          trap(0x1800);
        }
      }
      uVar2 = 0x400 - (int)*(short *)(&DAT_800c990c + iVar13 * 2);
    }
    if ((int)uVar1 < 0) {
      uVar2 = 0x800 - uVar2;
    }
    if ((int)uVar5 < 0) {
      uVar2 = -uVar2;
    }
  }
  uVar2 = (&g_SinCosTable)[uVar2 & 0xfff];
  if ((int)uVar2 < 0) {
    uVar1 = (int)uVar2 >> 0x10 | 0xffff8000;
  }
  else {
    uVar1 = (int)uVar2 >> 0x10 & 0x7fff;
  }
  if ((uVar2 & 0x8000) == 0) {
    uVar2 = uVar2 & 0x7fff;
  }
  else {
    uVar2 = uVar2 | 0xffff8000;
  }
  *(uint *)(param_1 + 0x38) = iVar11 * uVar2 + iVar8;
  iVar8 = (int)(iVar11 * uVar1) >> 0xc;
  uVar2 = uVar6;
  if ((int)uVar6 < 0) {
    uVar2 = -uVar6;
  }
  uVar1 = uVar7;
  if ((int)uVar7 < 0) {
    uVar1 = -uVar7;
  }
  if (uVar2 == 0 && uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if ((int)uVar1 < (int)uVar2) {
      iVar11 = (int)uVar2 >> 10;
      if ((uVar1 & 0x7fe00000) == 0) {
        iVar14 = (int)(uVar1 << 10) / (int)uVar2;
        if (uVar2 == 0) {
          trap(0x1c00);
        }
        if ((uVar2 == 0xffffffff) && (uVar1 << 10 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        iVar14 = (int)uVar1 / iVar11;
        if (iVar11 == 0) {
          trap(0x1c00);
        }
        if ((iVar11 == -1) && (uVar1 == 0x80000000)) {
          trap(0x1800);
        }
      }
      uVar2 = (uint)*(short *)(&DAT_800c990c + iVar14 * 2);
    }
    else {
      iVar11 = (int)uVar1 >> 10;
      if ((uVar2 & 0x7fe00000) == 0) {
        iVar14 = (int)(uVar2 << 10) / (int)uVar1;
        if (uVar1 == 0) {
          trap(0x1c00);
        }
        if ((uVar1 == 0xffffffff) && (uVar2 << 10 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        iVar14 = (int)uVar2 / iVar11;
        if (iVar11 == 0) {
          trap(0x1c00);
        }
        if ((iVar11 == -1) && (uVar2 == 0x80000000)) {
          trap(0x1800);
        }
      }
      uVar2 = 0x400 - (int)*(short *)(&DAT_800c990c + iVar14 * 2);
    }
    if ((int)uVar6 < 0) {
      uVar2 = 0x800 - uVar2;
    }
    if ((int)uVar7 < 0) {
      uVar2 = -uVar2;
    }
  }
  uVar2 = (&g_SinCosTable)[uVar2 & 0xfff];
  if ((int)uVar2 < 0) {
    uVar1 = (int)uVar2 >> 0x10 | 0xffff8000;
  }
  else {
    uVar1 = (int)uVar2 >> 0x10 & 0x7fff;
  }
  if ((uVar2 & 0x8000) == 0) {
    uVar2 = uVar2 & 0x7fff;
  }
  else {
    uVar2 = uVar2 | 0xffff8000;
  }
  *(uint *)(param_1 + 0x28) = iVar3 * uVar2 + iVar9;
  *(uint *)(param_1 + 0x34) = iVar8 * uVar2 + iVar9;
  *(uint *)(param_1 + 0x30) = iVar3 * uVar1 + iVar10;
  *(uint *)(param_1 + 0x3c) = iVar8 * uVar1 + iVar10;
  return;
}


