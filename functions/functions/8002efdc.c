/* Function: FUN_8002efdc */
/* Address: 8002efdc */

void FUN_8002efdc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint in_t1;
  uint in_t2;
  int *piVar13;
  int iVar14;
  int iVar15;
  int *in_t7;
  int iVar16;
  int *piVar17;
  int iVar18;
  
  iVar16 = 0;
  param_1[1] = 0;
  iVar4 = g_CarTrackData;
  iVar3 = DAT_800cca48;
  iVar2 = DAT_800cca44;
  iVar1 = DAT_800cca14;
  piVar17 = param_1;
  if (0 < *param_1) {
    do {
      iVar15 = piVar17[2];
      iVar8 = (int)*(short *)(iVar4 + 8);
      if (iVar8 == 0) {
        trap(0x1c00);
      }
      if ((iVar8 == -1) && (iVar15 == -0x80000000)) {
        trap(0x1800);
      }
      iVar14 = piVar17[4];
      iVar5 = (int)*(short *)(iVar4 + 10);
      if (iVar5 == 0) {
        trap(0x1c00);
      }
      if ((iVar5 == -1) && (iVar14 == -0x80000000)) {
        trap(0x1800);
      }
      iVar8 = (int)*(short *)((iVar15 / iVar8 + (iVar14 / iVar5) * (int)*(short *)(iVar4 + 0xc)) * 2
                             + iVar3);
      if (iVar8 < 0) {
LAB_8002f49c:
        param_1[1] = param_1[1] + 1;
      }
      else {
        piVar6 = (int *)(iVar2 + *(int *)(iVar8 * 4 + iVar2 + 0xc));
        iVar8 = *piVar6;
        piVar13 = piVar6 + 1;
        while (iVar8 = iVar8 + -1, iVar8 != -1) {
          piVar10 = (int *)(iVar1 + *(short *)((int)piVar6 + 6) * 0xc);
          in_t7 = (int *)(iVar1 + (short)*piVar13 * 0xc);
          in_t2 = iVar15 - *in_t7;
          in_t1 = iVar14 - in_t7[2];
          if ((in_t2 == 0) && (in_t1 == 0)) break;
          uVar11 = in_t1;
          if ((int)in_t1 < 0) {
            uVar11 = -in_t1;
          }
          uVar12 = in_t2;
          if ((int)in_t2 < 0) {
            uVar12 = -in_t2;
          }
          if (uVar11 == 0 && uVar12 == 0) {
            iVar5 = 0;
          }
          else {
            if ((int)uVar12 < (int)uVar11) {
              iVar5 = (int)uVar11 >> 10;
              if ((uVar12 & 0x7fe00000) == 0) {
                iVar18 = (int)(uVar12 << 10) / (int)uVar11;
                if (uVar11 == 0) {
                  trap(0x1c00);
                }
                if ((uVar11 == 0xffffffff) && (uVar12 << 10 == -0x80000000)) {
                  trap(0x1800);
                }
              }
              else {
                iVar18 = (int)uVar12 / iVar5;
                if (iVar5 == 0) {
                  trap(0x1c00);
                }
                if ((iVar5 == -1) && (uVar12 == 0x80000000)) {
                  trap(0x1800);
                }
              }
              iVar5 = (int)*(short *)(&DAT_800c990c + iVar18 * 2);
            }
            else {
              iVar5 = (int)uVar12 >> 10;
              if ((uVar11 & 0x7fe00000) == 0) {
                iVar18 = (int)(uVar11 << 10) / (int)uVar12;
                if (uVar12 == 0) {
                  trap(0x1c00);
                }
                if ((uVar12 == 0xffffffff) && (uVar11 << 10 == -0x80000000)) {
                  trap(0x1800);
                }
              }
              else {
                iVar18 = (int)uVar11 / iVar5;
                if (iVar5 == 0) {
                  trap(0x1c00);
                }
                if ((iVar5 == -1) && (uVar11 == 0x80000000)) {
                  trap(0x1800);
                }
              }
              iVar5 = 0x400 - *(short *)(&DAT_800c990c + iVar18 * 2);
            }
            if ((int)in_t1 < 0) {
              iVar5 = 0x800 - iVar5;
            }
            if ((int)in_t2 < 0) {
              iVar5 = -iVar5;
            }
          }
          if ((((iVar5 - (short)piVar6[2]) + 1U & 0xfff) < 0x801) &&
             (((*(short *)((int)piVar6 + 10) - iVar5) + 1U & 0xfff) < 0x801)) {
            uVar12 = iVar15 - *piVar10;
            uVar11 = iVar14 - piVar10[2];
            if ((uVar12 == 0) && (uVar11 == 0)) break;
            uVar9 = uVar11;
            if ((int)uVar11 < 0) {
              uVar9 = -uVar11;
            }
            uVar7 = uVar12;
            if ((int)uVar12 < 0) {
              uVar7 = -uVar12;
            }
            if (uVar9 == 0 && uVar7 == 0) {
              iVar5 = 0;
            }
            else {
              if ((int)uVar7 < (int)uVar9) {
                iVar5 = (int)uVar9 >> 10;
                if ((uVar7 & 0x7fe00000) == 0) {
                  iVar18 = (int)(uVar7 << 10) / (int)uVar9;
                  if (uVar9 == 0) {
                    trap(0x1c00);
                  }
                  if ((uVar9 == 0xffffffff) && (uVar7 << 10 == -0x80000000)) {
                    trap(0x1800);
                  }
                }
                else {
                  iVar18 = (int)uVar7 / iVar5;
                  if (iVar5 == 0) {
                    trap(0x1c00);
                  }
                  if ((iVar5 == -1) && (uVar7 == 0x80000000)) {
                    trap(0x1800);
                  }
                }
                iVar5 = (int)*(short *)(&DAT_800c990c + iVar18 * 2);
              }
              else {
                iVar5 = (int)uVar7 >> 10;
                if ((uVar9 & 0x7fe00000) == 0) {
                  iVar18 = (int)(uVar9 << 10) / (int)uVar7;
                  if (uVar7 == 0) {
                    trap(0x1c00);
                  }
                  if ((uVar7 == 0xffffffff) && (uVar9 << 10 == -0x80000000)) {
                    trap(0x1800);
                  }
                }
                else {
                  iVar18 = (int)uVar9 / iVar5;
                  if (iVar5 == 0) {
                    trap(0x1c00);
                  }
                  if ((iVar5 == -1) && (uVar9 == 0x80000000)) {
                    trap(0x1800);
                  }
                }
                iVar5 = 0x400 - *(short *)(&DAT_800c990c + iVar18 * 2);
              }
              if ((int)uVar11 < 0) {
                iVar5 = 0x800 - iVar5;
              }
              if ((int)uVar12 < 0) {
                iVar5 = -iVar5;
              }
            }
            if (((iVar5 - (short)piVar6[3]) + 1U & 0xfff) < 0x801) break;
          }
          piVar13 = piVar13 + 3;
          piVar6 = piVar6 + 3;
        }
        if (iVar8 < 0) goto LAB_8002f49c;
        piVar6 = (int *)(DAT_800cca74 + *(short *)((int)piVar13 + 10) * 8);
        piVar17[3] = in_t7[1] * 0x1000 + ((int)(in_t2 * *piVar6 + in_t1 * piVar6[1]) >> 8);
      }
      iVar16 = iVar16 + 1;
      piVar17 = piVar17 + 3;
    } while (iVar16 < *param_1);
  }
  DAT_800cca3c = param_1[1];
  return;
}


