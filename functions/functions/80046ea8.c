/* Function: FUN_80046ea8 */
/* Address: 80046ea8 */

void FUN_80046ea8(int param_1)

{
  undefined4 *puVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  int iVar22;
  
  iVar5 = DAT_1f800050;
  puVar21 = *(undefined4 **)(DAT_1f800050 + 0x5c);
  puVar1 = (undefined4 *)(DAT_1f800050 + 0x58);
  *(undefined4 *)(DAT_1f800050 + 0x5c) = *puVar21;
  *puVar21 = *puVar1;
  *(undefined4 **)(iVar5 + 0x58) = puVar21;
  iVar12 = *(int *)(param_1 + 100);
  sVar2 = *(short *)(*(int *)(param_1 + 0x10) + 4);
  *(undefined2 *)(puVar21 + 1) = 2;
  *(undefined2 *)((int)puVar21 + 10) = 0x7fff;
  iVar12 = iVar12 >> 0xc;
  *(undefined2 *)(puVar21 + 2) = 0x8001;
  puVar21[3] = 0;
  iVar22 = sVar2 + 0x1e;
  iVar4 = FUN_8003c7dc((int)*(short *)(param_1 + 0x15c));
  iVar5 = DAT_1f800050;
  puVar21[5] = iVar4 >> 0xc;
  for (piVar17 = *(int **)(iVar5 + 8); piVar17 != (int *)0x0; piVar17 = (int *)*piVar17) {
    iVar16 = piVar17[1];
    iVar5 = ((int)((uint)*(ushort *)(iVar16 + 0x15c) << 0x10) >> 0x14) * 2;
    iVar4 = *(short *)(iVar5 + DAT_800cca50) - iVar22;
    iVar20 = *(short *)(iVar5 + DAT_800cca54) + iVar22;
    iVar19 = (*(int *)(iVar16 + *(short *)(iVar16 + 0x150) * 4 + 0x140) >> 0xc) + iVar22;
    iVar18 = (*(int *)(iVar16 + *(short *)(iVar16 + 0x152) * 4 + 0x140) >> 0xc) - iVar22;
    iVar5 = iVar20;
    if ((((*(ushort *)(piVar17 + 2) & 2) != 0) && (iVar5 = iVar19, iVar12 <= iVar19)) &&
       (iVar5 = iVar20, iVar12 < iVar18)) {
      iVar4 = iVar18;
    }
    piVar7 = (int *)*(int *)(DAT_1f800050 + 0x58);
    piVar11 = (int *)(DAT_1f800050 + 0x58);
    while (piVar14 = piVar7, piVar14 != (int *)0x0) {
      iVar20 = 0;
      if (*(short *)(piVar14 + 2) < iVar5) {
        *(short *)(piVar14 + 2) = (short)iVar5;
      }
      if (iVar4 < *(short *)((int)piVar14 + 10)) {
        *(short *)((int)piVar14 + 10) = (short)iVar4;
      }
      iVar6 = DAT_1f800050;
      piVar7 = piVar11;
      if (iVar19 < *(short *)((int)piVar14 + 10)) {
        piVar7 = *(int **)(DAT_1f800050 + 0x5c);
        *piVar11 = (int)piVar7;
        *(undefined4 *)(iVar6 + 0x5c) = **(undefined4 **)(iVar6 + 0x5c);
        *(short *)(piVar7 + 2) = (short)iVar19;
        uVar3 = *(undefined2 *)((int)piVar14 + 10);
        *(undefined2 *)(piVar7 + 1) = 0;
        *(undefined2 *)((int)piVar7 + 10) = uVar3;
        iVar20 = 1;
        if ((*(ushort *)(piVar17 + 2) & 2) == 0) {
          iVar8 = iVar16 + *(short *)(iVar16 + 0x150) * 8;
          iVar6 = param_1 + *(short *)(param_1 + 0x152) * 8;
          uVar13 = *(int *)(iVar8 + 0x118) - *(int *)(iVar6 + 0x118);
          uVar15 = *(int *)(iVar8 + 0x11c) - *(int *)(iVar6 + 0x11c);
          uVar10 = uVar15;
          if ((int)uVar15 < 0) {
            uVar10 = -uVar15;
          }
          uVar9 = uVar13;
          if ((int)uVar13 < 0) {
            uVar9 = -uVar13;
          }
          if (uVar10 == 0 && uVar9 == 0) {
            iVar6 = 0;
          }
          else {
            if ((int)uVar9 < (int)uVar10) {
              iVar6 = (int)uVar10 >> 10;
              if ((uVar9 & 0x7fe00000) == 0) {
                iVar8 = (int)(uVar9 << 10) / (int)uVar10;
                if (uVar10 == 0) {
                  trap(0x1c00);
                }
                if ((uVar10 == 0xffffffff) && (uVar9 << 10 == -0x80000000)) {
                  trap(0x1800);
                }
              }
              else {
                iVar8 = (int)uVar9 / iVar6;
                if (iVar6 == 0) {
                  trap(0x1c00);
                }
                if ((iVar6 == -1) && (uVar9 == 0x80000000)) {
                  trap(0x1800);
                }
              }
              iVar6 = (int)*(short *)(&DAT_800c990c + iVar8 * 2);
            }
            else {
              iVar6 = (int)uVar9 >> 10;
              if ((uVar10 & 0x7fe00000) == 0) {
                iVar8 = (int)(uVar10 << 10) / (int)uVar9;
                if (uVar9 == 0) {
                  trap(0x1c00);
                }
                if ((uVar9 == 0xffffffff) && (uVar10 << 10 == -0x80000000)) {
                  trap(0x1800);
                }
              }
              else {
                iVar8 = (int)uVar10 / iVar6;
                if (iVar6 == 0) {
                  trap(0x1c00);
                }
                if ((iVar6 == -1) && (uVar10 == 0x80000000)) {
                  trap(0x1800);
                }
              }
              iVar6 = 0x400 - *(short *)(&DAT_800c990c + iVar8 * 2);
            }
            if ((int)uVar15 < 0) {
              iVar6 = 0x800 - iVar6;
            }
            if ((int)uVar13 < 0) {
              iVar6 = -iVar6;
            }
          }
          if ((iVar6 - piVar14[5] & 0x800U) == 0) {
            piVar7[5] = iVar6;
          }
          else {
            piVar7[5] = piVar14[5];
          }
          uVar10 = iVar6 - *(short *)(param_1 + 0x4e);
          if ((uVar10 & 0x800) == 0) {
            uVar10 = uVar10 & 0x7ff;
          }
          else {
            uVar10 = uVar10 | 0xfffff800;
          }
          iVar6 = (int)*(short *)((int)piVar17 + 10);
          uVar13 = uVar10;
          if (iVar6 != 0) {
            uVar13 = (int)uVar10 / iVar6;
            if (iVar6 == 0) {
              trap(0x1c00);
            }
            if ((iVar6 == -1) && (uVar10 == 0x80000000)) {
              trap(0x1800);
            }
          }
          if (piVar14[3] < (int)uVar13) {
            piVar7[3] = uVar13;
          }
          else {
            piVar7[3] = piVar14[3];
          }
        }
        else {
          *(undefined2 *)(piVar7 + 1) = 1;
          piVar7[3] = piVar14[3];
          piVar7[5] = piVar14[5];
        }
      }
      iVar6 = DAT_1f800050;
      piVar11 = piVar7;
      if (*(short *)(piVar14 + 2) < iVar18) {
        piVar11 = *(int **)(DAT_1f800050 + 0x5c);
        *piVar7 = (int)piVar11;
        *(undefined4 *)(iVar6 + 0x5c) = **(undefined4 **)(iVar6 + 0x5c);
        uVar3 = *(undefined2 *)(piVar14 + 2);
        *(short *)((int)piVar11 + 10) = (short)iVar18;
        *(undefined2 *)(piVar11 + 1) = 0;
        *(undefined2 *)(piVar11 + 2) = uVar3;
        iVar20 = iVar20 + 1;
        if ((*(ushort *)(piVar17 + 2) & 2) == 0) {
          iVar8 = iVar16 + *(short *)(iVar16 + 0x152) * 8;
          iVar6 = param_1 + *(short *)(param_1 + 0x150) * 8;
          uVar13 = *(int *)(iVar8 + 0x118) - *(int *)(iVar6 + 0x118);
          uVar15 = *(int *)(iVar8 + 0x11c) - *(int *)(iVar6 + 0x11c);
          uVar10 = uVar15;
          if ((int)uVar15 < 0) {
            uVar10 = -uVar15;
          }
          uVar9 = uVar13;
          if ((int)uVar13 < 0) {
            uVar9 = -uVar13;
          }
          if (uVar10 == 0 && uVar9 == 0) {
            iVar6 = 0;
          }
          else {
            if ((int)uVar9 < (int)uVar10) {
              iVar6 = (int)uVar10 >> 10;
              if ((uVar9 & 0x7fe00000) == 0) {
                iVar8 = (int)(uVar9 << 10) / (int)uVar10;
                if (uVar10 == 0) {
                  trap(0x1c00);
                }
                if ((uVar10 == 0xffffffff) && (uVar9 << 10 == -0x80000000)) {
                  trap(0x1800);
                }
              }
              else {
                iVar8 = (int)uVar9 / iVar6;
                if (iVar6 == 0) {
                  trap(0x1c00);
                }
                if ((iVar6 == -1) && (uVar9 == 0x80000000)) {
                  trap(0x1800);
                }
              }
              iVar6 = (int)*(short *)(&DAT_800c990c + iVar8 * 2);
            }
            else {
              iVar6 = (int)uVar9 >> 10;
              if ((uVar10 & 0x7fe00000) == 0) {
                iVar8 = (int)(uVar10 << 10) / (int)uVar9;
                if (uVar9 == 0) {
                  trap(0x1c00);
                }
                if ((uVar9 == 0xffffffff) && (uVar10 << 10 == -0x80000000)) {
                  trap(0x1800);
                }
              }
              else {
                iVar8 = (int)uVar10 / iVar6;
                if (iVar6 == 0) {
                  trap(0x1c00);
                }
                if ((iVar6 == -1) && (uVar10 == 0x80000000)) {
                  trap(0x1800);
                }
              }
              iVar6 = 0x400 - *(short *)(&DAT_800c990c + iVar8 * 2);
            }
            if ((int)uVar15 < 0) {
              iVar6 = 0x800 - iVar6;
            }
            if ((int)uVar13 < 0) {
              iVar6 = -iVar6;
            }
          }
          if ((iVar6 - piVar14[5] & 0x800U) == 0) {
            piVar11[5] = piVar14[5];
          }
          else {
            piVar11[5] = iVar6;
          }
          uVar10 = iVar6 - *(short *)(param_1 + 0x4e);
          if ((uVar10 & 0x800) == 0) {
            uVar10 = uVar10 & 0x7ff;
          }
          else {
            uVar10 = uVar10 | 0xfffff800;
          }
          iVar6 = (int)*(short *)((int)piVar17 + 10);
          uVar13 = uVar10;
          if (iVar6 != 0) {
            uVar13 = (int)uVar10 / iVar6;
            if (iVar6 == 0) {
              trap(0x1c00);
            }
            if ((iVar6 == -1) && (uVar10 == 0x80000000)) {
              trap(0x1800);
            }
          }
          if ((int)uVar13 < piVar14[3]) {
            piVar11[3] = uVar13;
          }
          else {
            piVar11[3] = piVar14[3];
          }
        }
        else {
          *(undefined2 *)(piVar11 + 1) = 1;
          piVar11[3] = piVar14[3];
          piVar11[5] = piVar14[5];
        }
      }
      iVar6 = DAT_1f800050;
      if (iVar20 != 0) {
        *piVar11 = *piVar14;
        *piVar14 = *(undefined4 *)(iVar6 + 0x5c);
        *(int **)(iVar6 + 0x5c) = piVar14;
        piVar14 = piVar11;
      }
      piVar11 = piVar14;
      piVar7 = (int *)*piVar14;
    }
  }
  return;
}


