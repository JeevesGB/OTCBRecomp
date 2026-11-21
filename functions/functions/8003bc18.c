/* Function: FUN_8003bc18 */
/* Address: 8003bc18 */

int FUN_8003bc18(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  uint local_40;
  uint local_3c;
  uint local_30;
  
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = param_1 + 0xf;
  }
  iVar27 = (int)uVar3 >> 4;
  iVar30 = iVar27 + -1;
  param_1 = param_1 & 0xf;
  if (iVar30 < 0) {
    iVar30 = iVar30 + g_TrackSegmentCount;
  }
  iVar29 = iVar27 + 1;
  iVar34 = iVar27 + 2;
  if (g_TrackSegmentCount <= iVar29) {
    iVar29 = iVar29 - g_TrackSegmentCount;
  }
  if (g_TrackSegmentCount <= iVar34) {
    iVar34 = iVar34 - g_TrackSegmentCount;
  }
  uVar3 = (&g_SinCosTable)[*(ushort *)(iVar30 * 2 + DAT_800cca18) & 0xfff];
  if ((int)uVar3 < 0) {
    local_40 = (int)uVar3 >> 0x10 | 0xffff8000;
  }
  else {
    local_40 = (int)uVar3 >> 0x10 & 0x7fff;
  }
  if ((uVar3 & 0x8000) == 0) {
    uVar3 = uVar3 & 0x7fff;
  }
  else {
    uVar3 = uVar3 | 0xffff8000;
  }
  uVar17 = (&g_SinCosTable)[*(ushort *)(iVar27 * 2 + DAT_800cca18) & 0xfff];
  if ((int)uVar17 < 0) {
    local_3c = (int)uVar17 >> 0x10 | 0xffff8000;
  }
  else {
    local_3c = (int)uVar17 >> 0x10 & 0x7fff;
  }
  if ((uVar17 & 0x8000) == 0) {
    uVar17 = uVar17 & 0x7fff;
  }
  else {
    uVar17 = uVar17 | 0xffff8000;
  }
  uVar8 = (&g_SinCosTable)[*(ushort *)(iVar29 * 2 + DAT_800cca18) & 0xfff];
  if ((int)uVar8 < 0) {
    uVar32 = (int)uVar8 >> 0x10 | 0xffff8000;
  }
  else {
    uVar32 = (int)uVar8 >> 0x10 & 0x7fff;
  }
  if ((uVar8 & 0x8000) == 0) {
    uVar8 = uVar8 & 0x7fff;
  }
  else {
    uVar8 = uVar8 | 0xffff8000;
  }
  uVar4 = (&g_SinCosTable)[*(ushort *)(iVar34 * 2 + DAT_800cca18) & 0xfff];
  if ((int)uVar4 < 0) {
    local_30 = (int)uVar4 >> 0x10 | 0xffff8000;
  }
  else {
    local_30 = (int)uVar4 >> 0x10 & 0x7fff;
  }
  if ((uVar4 & 0x8000) == 0) {
    uVar4 = uVar4 & 0x7fff;
  }
  else {
    uVar4 = uVar4 | 0xffff8000;
  }
  iVar20 = (&DAT_800cca50)[param_2];
  iVar25 = (int)*(short *)(iVar30 * 2 + iVar20);
  iVar23 = (int)*(short *)(iVar27 * 2 + iVar20);
  piVar15 = (int *)(iVar30 * 0xc + g_TrackSegmentArray);
  iVar18 = param_1 * 0x10;
  piVar12 = (int *)(iVar27 * 0xc + g_TrackSegmentArray);
  iVar22 = (int)*(short *)(iVar29 * 2 + iVar20);
  iVar21 = (int)*(short *)(iVar34 * 2 + iVar20);
  piVar5 = (int *)(iVar29 * 0xc + g_TrackSegmentArray);
  piVar9 = (int *)(iVar34 * 0xc + g_TrackSegmentArray);
  iVar20 = iVar25 * local_40;
  iVar1 = iVar23 * local_3c;
  iVar2 = iVar21 * local_30;
  uVar31 = param_1 + 1;
  iVar28 = iVar27;
  iVar35 = iVar34;
  if (0xf < uVar31) {
    iVar35 = iVar34 + 1;
    if (g_TrackSegmentCount <= iVar35) {
      iVar35 = iVar35 - g_TrackSegmentCount;
    }
    uVar31 = param_1 - 0xf;
    iVar28 = iVar29;
    iVar29 = iVar34;
    iVar30 = iVar27;
  }
  uVar13 = (&g_SinCosTable)[*(ushort *)(iVar30 * 2 + DAT_800cca18) & 0xfff];
  if ((int)uVar13 < 0) {
    local_40 = (int)uVar13 >> 0x10 | 0xffff8000;
  }
  else {
    local_40 = (int)uVar13 >> 0x10 & 0x7fff;
  }
  if ((uVar13 & 0x8000) == 0) {
    uVar13 = uVar13 & 0x7fff;
  }
  else {
    uVar13 = uVar13 | 0xffff8000;
  }
  uVar19 = (&g_SinCosTable)[*(ushort *)(iVar28 * 2 + DAT_800cca18) & 0xfff];
  if ((int)uVar19 < 0) {
    local_3c = (int)uVar19 >> 0x10 | 0xffff8000;
  }
  else {
    local_3c = (int)uVar19 >> 0x10 & 0x7fff;
  }
  if ((uVar19 & 0x8000) == 0) {
    uVar19 = uVar19 & 0x7fff;
  }
  else {
    uVar19 = uVar19 | 0xffff8000;
  }
  uVar10 = (&g_SinCosTable)[*(ushort *)(iVar29 * 2 + DAT_800cca18) & 0xfff];
  if ((int)uVar10 < 0) {
    uVar33 = (int)uVar10 >> 0x10 | 0xffff8000;
  }
  else {
    uVar33 = (int)uVar10 >> 0x10 & 0x7fff;
  }
  if ((uVar10 & 0x8000) == 0) {
    uVar10 = uVar10 & 0x7fff;
  }
  else {
    uVar10 = uVar10 | 0xffff8000;
  }
  uVar6 = (&g_SinCosTable)[*(ushort *)(iVar35 * 2 + DAT_800cca18) & 0xfff];
  if ((int)uVar6 < 0) {
    local_30 = (int)uVar6 >> 0x10 | 0xffff8000;
  }
  else {
    local_30 = (int)uVar6 >> 0x10 & 0x7fff;
  }
  if ((uVar6 & 0x8000) == 0) {
    uVar6 = uVar6 & 0x7fff;
  }
  else {
    uVar6 = uVar6 | 0xffff8000;
  }
  iVar27 = (&DAT_800cca50)[param_2];
  iVar26 = (int)*(short *)(iVar30 * 2 + iVar27);
  iVar24 = (int)*(short *)(iVar28 * 2 + iVar27);
  piVar16 = (int *)(iVar30 * 0xc + g_TrackSegmentArray);
  iVar30 = uVar31 * 0x10;
  piVar14 = (int *)(iVar28 * 0xc + g_TrackSegmentArray);
  iVar34 = (int)*(short *)(iVar29 * 2 + iVar27);
  iVar27 = (int)*(short *)(iVar35 * 2 + iVar27);
  piVar7 = (int *)(iVar29 * 0xc + g_TrackSegmentArray);
  piVar11 = (int *)(iVar35 * 0xc + g_TrackSegmentArray);
  uVar8 = ((*piVar16 + ((int)(iVar26 * uVar13) >> 0xc)) * *(int *)(&DAT_800b5394 + iVar30) +
           (*piVar14 + ((int)(iVar24 * uVar19) >> 0xc)) * *(int *)(&DAT_800b5398 + iVar30) +
           (*piVar7 + ((int)(iVar34 * uVar10) >> 0xc)) * *(int *)(&DAT_800b539c + iVar30) +
          (*piVar11 + ((int)(iVar27 * uVar6) >> 0xc)) * *(int *)(&DAT_800b53a0 + iVar30)) -
          ((*piVar15 + ((int)(iVar25 * uVar3) >> 0xc)) * *(int *)(&DAT_800b5394 + iVar18) +
           (*piVar12 + ((int)(iVar23 * uVar17) >> 0xc)) * *(int *)(&DAT_800b5398 + iVar18) +
           (*piVar5 + ((int)(iVar22 * uVar8) >> 0xc)) * *(int *)(&DAT_800b539c + iVar18) +
          (*piVar9 + ((int)(iVar21 * uVar4) >> 0xc)) * *(int *)(&DAT_800b53a0 + iVar18));
  uVar17 = ((piVar16[2] + ((int)(iVar26 * local_40) >> 0xc)) * *(int *)(&DAT_800b5394 + iVar30) +
            (piVar14[2] + ((int)(iVar24 * local_3c) >> 0xc)) * *(int *)(&DAT_800b5398 + iVar30) +
            (piVar7[2] + ((int)(iVar34 * uVar33) >> 0xc)) * *(int *)(&DAT_800b539c + iVar30) +
           (piVar11[2] + ((int)(iVar27 * local_30) >> 0xc)) * *(int *)(&DAT_800b53a0 + iVar30)) -
           ((piVar15[2] + (iVar20 >> 0xc)) * *(int *)(&DAT_800b5394 + iVar18) +
            (piVar12[2] + (iVar1 >> 0xc)) * *(int *)(&DAT_800b5398 + iVar18) +
            (piVar5[2] + ((int)(iVar22 * uVar32) >> 0xc)) * *(int *)(&DAT_800b539c + iVar18) +
           (piVar9[2] + (iVar2 >> 0xc)) * *(int *)(&DAT_800b53a0 + iVar18));
  uVar3 = uVar17;
  if ((int)uVar17 < 0) {
    uVar3 = -uVar17;
  }
  uVar32 = uVar8;
  if ((int)uVar8 < 0) {
    uVar32 = -uVar8;
  }
  if (uVar3 == 0 && uVar32 == 0) {
    iVar30 = 0;
  }
  else {
    if ((int)uVar32 < (int)uVar3) {
      iVar30 = (int)uVar3 >> 10;
      if ((uVar32 & 0x7fe00000) == 0) {
        iVar27 = (int)(uVar32 << 10) / (int)uVar3;
        if (uVar3 == 0) {
          trap(0x1c00);
        }
        if ((uVar3 == 0xffffffff) && (uVar32 << 10 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        iVar27 = (int)uVar32 / iVar30;
        if (iVar30 == 0) {
          trap(0x1c00);
        }
        if ((iVar30 == -1) && (uVar32 == 0x80000000)) {
          trap(0x1800);
        }
      }
      iVar30 = (int)*(short *)(&DAT_800c990c + iVar27 * 2);
    }
    else {
      iVar30 = (int)uVar32 >> 10;
      if ((uVar3 & 0x7fe00000) == 0) {
        iVar27 = (int)(uVar3 << 10) / (int)uVar32;
        if (uVar32 == 0) {
          trap(0x1c00);
        }
        if ((uVar32 == 0xffffffff) && (uVar3 << 10 == -0x80000000)) {
          trap(0x1800);
        }
      }
      else {
        iVar27 = (int)uVar3 / iVar30;
        if (iVar30 == 0) {
          trap(0x1c00);
        }
        if ((iVar30 == -1) && (uVar3 == 0x80000000)) {
          trap(0x1800);
        }
      }
      iVar30 = 0x400 - *(short *)(&DAT_800c990c + iVar27 * 2);
    }
    if ((int)uVar17 < 0) {
      iVar30 = 0x800 - iVar30;
    }
    if ((int)uVar8 < 0) {
      iVar30 = -iVar30;
    }
  }
  return iVar30;
}


