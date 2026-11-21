/* Function: FUN_80048264 */
/* Address: 80048264 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80048264(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  short *psVar15;
  int iVar16;
  undefined2 *puVar17;
  int iVar18;
  int iVar19;
  int local_34;
  
  psVar15 = &DAT_1f800054;
  local_34 = 0;
  _DAT_1f80005a = 0;
  DAT_1f800058 = 0;
  DAT_1f800054 = (undefined2)(*(int *)(param_1 + 0x3c8) + 0x800 >> 0xc);
  puVar17 = &DAT_1f800054;
  iVar11 = *(int *)(param_1 + 0x1b8);
  iVar18 = 0;
  iVar3 = *(int *)(param_1 + 0x198);
  iVar12 = *(int *)(param_1 + 0x1c0);
  iVar16 = param_1;
  DAT_1f800056 = DAT_1f800054;
  do {
    psVar15[0x5e] = *(short *)(iVar16 + 0x204);
    uVar5 = (&g_SinCosTable)[*(ushort *)(iVar16 + 0x328) & 0xfff];
    uVar14 = (uint)*psVar15;
    if ((int)uVar5 < 0) {
      uVar7 = (int)uVar5 >> 0x10 | 0xffff8000;
    }
    else {
      uVar7 = (int)uVar5 >> 0x10 & 0x7fff;
    }
    if ((uVar5 & 0x8000) == 0) {
      uVar5 = uVar5 & 0x7fff;
    }
    else {
      uVar5 = uVar5 | 0xffff8000;
    }
    iVar9 = (int)*(short *)(iVar16 + 0x330) * (iVar3 + 0x800 >> 0xc) >> 0xc;
    uVar7 = iVar11 + iVar9 * uVar7;
    uVar13 = iVar12 - iVar9 * uVar5;
    iVar9 = CalcDistance2D(uVar7,uVar13);
    *(int *)(puVar17 + 0x10) = iVar9;
    uVar5 = uVar14;
    if (0x2c6f < iVar9) {
      uVar5 = uVar13;
      if ((int)uVar13 < 0) {
        uVar5 = -uVar13;
      }
      uVar6 = uVar7;
      if ((int)uVar7 < 0) {
        uVar6 = -uVar7;
      }
      if (uVar5 == 0 && uVar6 == 0) {
        uVar5 = 0;
      }
      else {
        if ((int)uVar6 < (int)uVar5) {
          iVar9 = (int)uVar5 >> 10;
          if ((uVar6 & 0x7fe00000) == 0) {
            iVar19 = (int)(uVar6 << 10) / (int)uVar5;
            if (uVar5 == 0) {
              trap(0x1c00);
            }
            if ((uVar5 == 0xffffffff) && (uVar6 << 10 == -0x80000000)) {
              trap(0x1800);
            }
          }
          else {
            iVar19 = (int)uVar6 / iVar9;
            if (iVar9 == 0) {
              trap(0x1c00);
            }
            if ((iVar9 == -1) && (uVar6 == 0x80000000)) {
              trap(0x1800);
            }
          }
          uVar5 = (uint)*(short *)(&DAT_800c990c + iVar19 * 2);
        }
        else {
          iVar9 = (int)uVar6 >> 10;
          if ((uVar5 & 0x7fe00000) == 0) {
            iVar19 = (int)(uVar5 << 10) / (int)uVar6;
            if (uVar6 == 0) {
              trap(0x1c00);
            }
            if ((uVar6 == 0xffffffff) && (uVar5 << 10 == -0x80000000)) {
              trap(0x1800);
            }
          }
          else {
            iVar19 = (int)uVar5 / iVar9;
            if (iVar9 == 0) {
              trap(0x1c00);
            }
            if ((iVar9 == -1) && (uVar5 == 0x80000000)) {
              trap(0x1800);
            }
          }
          uVar5 = 0x400 - (int)*(short *)(&DAT_800c990c + iVar19 * 2);
        }
        if ((int)uVar13 < 0) {
          uVar5 = 0x800 - uVar5;
        }
        if ((int)uVar7 < 0) {
          uVar5 = -uVar5;
        }
      }
    }
    uVar6 = (&g_SinCosTable)[-uVar14 & 0xfff];
    if ((int)uVar6 < 0) {
      uVar8 = (int)uVar6 >> 0x10 | 0xffff8000;
    }
    else {
      uVar8 = (int)uVar6 >> 0x10 & 0x7fff;
    }
    uVar10 = uVar6 | 0xffff8000;
    if ((uVar6 & 0x8000) == 0) {
      uVar10 = uVar6 & 0x7fff;
    }
    *(int *)(puVar17 + 0x18) = (int)(((int)uVar13 >> 2) * uVar8 - ((int)uVar7 >> 2) * uVar10) >> 10;
    uVar6 = (&g_SinCosTable)[uVar14 & 0xfff];
    if ((int)uVar6 < 0) {
      uVar8 = (int)uVar6 >> 0x10 | 0xffff8000;
    }
    else {
      uVar8 = (int)uVar6 >> 0x10 & 0x7fff;
    }
    uVar10 = uVar6 | 0xffff8000;
    if ((uVar6 & 0x8000) == 0) {
      uVar10 = uVar6 & 0x7fff;
    }
    iVar9 = *(int *)(param_1 + iVar18 + 0x2f0) >> 2;
    uVar4 = CalcDistance2D(((int)(iVar9 * uVar10) >> 10) - uVar7,
                           ((int)(iVar9 * uVar8) >> 10) - uVar13);
    *(undefined4 *)(puVar17 + 8) = uVar4;
    uVar1 = (ushort)(uVar14 - uVar5);
    uVar2 = uVar1 | 0xf800;
    if ((uVar14 - uVar5 & 0x800) == 0) {
      uVar2 = uVar1 & 0x7ff;
    }
    psVar15[4] = uVar2;
    psVar15 = psVar15 + 1;
    puVar17 = puVar17 + 2;
    iVar18 = iVar18 + 4;
    iVar16 = iVar16 + 2;
    local_34 = local_34 + 1;
  } while (local_34 < 4);
  return;
}


