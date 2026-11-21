/* Function: FUN_80034608 */
/* Address: 80034608 */

uint FUN_80034608(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar12 = 0;
  iVar14 = (int)*(short *)(g_CarTrackData + 8);
  iVar13 = (int)*(short *)(g_CarTrackData + 10);
  while( true ) {
    iVar11 = param_1[1];
    if (iVar13 == 0) {
      trap(0x1c00);
    }
    if ((iVar13 == -1) && (iVar11 == -0x80000000)) {
      trap(0x1800);
    }
    iVar10 = *param_1;
    if (iVar14 == 0) {
      trap(0x1c00);
    }
    if ((iVar14 == -1) && (iVar10 == -0x80000000)) {
      trap(0x1800);
    }
    iVar1 = (int)*(short *)((iVar10 / iVar14 +
                            (iVar11 / iVar13) * (int)*(short *)(g_CarTrackData + 0xc)) * 2 +
                           DAT_800ccb28);
    if (iVar1 < 0) break;
    psVar9 = (short *)(DAT_800ccb24 + *(int *)(iVar1 * 4 + DAT_800ccb24 + 8));
    iVar1 = (int)*psVar9;
    while (iVar1 = iVar1 + -1, iVar1 != -1) {
      psVar9 = psVar9 + 1;
      psVar8 = (short *)(DAT_800ccb2c + *psVar9 * 0xc);
      iVar7 = iVar10 - *(int *)(psVar8 + 2);
      iVar6 = iVar11 - *(int *)(psVar8 + 4);
      iVar4 = iVar7;
      if (iVar7 < 0) {
        iVar4 = -iVar7;
      }
      if (iVar4 < 0x8000) {
        iVar4 = iVar6;
        if (iVar6 < 0) {
          iVar4 = -iVar6;
        }
        if (iVar4 < 0x8000) {
          uVar3 = (&g_SinCosTable)[-(int)psVar8[1] & 0xfff];
          if ((int)uVar3 < 0) {
            uVar5 = (int)uVar3 >> 0x10 | 0xffff8000;
          }
          else {
            uVar5 = (int)uVar3 >> 0x10 & 0x7fff;
          }
          uVar2 = uVar3 | 0xffff8000;
          if ((uVar3 & 0x8000) == 0) {
            uVar2 = uVar3 & 0x7fff;
          }
          iVar4 = (int)(iVar6 * uVar2 + iVar7 * uVar5) >> 0xc;
          iVar6 = (int)(iVar6 * uVar5 - iVar7 * uVar2) >> 0xc;
          if ((((-1 < iVar6) && (iVar6 <= *psVar8)) && (iVar4 < 0)) && (-200 < iVar4)) {
            uVar3 = (int)psVar8[1] + 0x400;
            if ((uVar3 & 0x800) == 0) {
              g_TrackWidth = -(short)iVar4;
              return uVar3 & 0x7ff;
            }
            g_TrackWidth = -(short)iVar4;
            return uVar3 | 0xfffff800;
          }
        }
      }
    }
    iVar12 = iVar12 + 1;
    param_1 = param_1 + 2;
    if (5 < iVar12) {
      return 0x7fffffff;
    }
  }
  return 0x7fffffff;
}


