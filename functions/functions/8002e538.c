/* Function: FUN_8002e538 */
/* Address: 8002e538 */

int FUN_8002e538(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  ushort *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short *psVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short local_40 [12];
  
  if (param_3 < 0) {
    param_3 = param_3 + 0xf;
  }
  param_3 = param_3 >> 4;
  local_40[2] = (short)param_3;
  local_40[0] = (short)(param_3 + -2);
  if ((param_3 + -2) * 0x10000 < 0) {
    local_40[0] = local_40[0] + (short)g_TrackSegmentCount;
  }
  local_40[1] = (short)(param_3 + -1);
  if ((param_3 + -1) * 0x10000 < 0) {
    local_40[1] = local_40[1] + (short)g_TrackSegmentCount;
  }
  local_40[3] = (short)(param_3 + 1);
  if (g_TrackSegmentCount <= (param_3 + 1) * 0x10000 >> 0x10) {
    local_40[3] = local_40[3] - (short)g_TrackSegmentCount;
  }
  local_40[4] = (short)(param_3 + 2);
  if (g_TrackSegmentCount <= (param_3 + 2) * 0x10000 >> 0x10) {
    local_40[4] = local_40[4] - (short)g_TrackSegmentCount;
  }
  local_40[5] = (short)(param_3 + 3);
  if (g_TrackSegmentCount <= (param_3 + 3) * 0x10000 >> 0x10) {
    local_40[5] = local_40[5] - (short)g_TrackSegmentCount;
  }
  iVar16 = 2;
  iVar15 = 6;
  psVar9 = local_40 + 2;
LAB_8002e68c:
  puVar4 = (ushort *)(*(short *)((int)local_40 + iVar15) * 2 + DAT_800cca18);
  piVar2 = (int *)(*(short *)((int)local_40 + iVar15) * 0xc + g_TrackSegmentArray);
  iVar14 = *piVar2;
  iVar13 = piVar2[2];
  uVar1 = *puVar4;
  uVar6 = (&g_SinCosTable)[-(int)(short)*puVar4 & 0xfff];
  if ((uVar6 & 0x80000000) == 0) {
    uVar7 = (int)uVar6 >> 0x10 & 0x7fff;
  }
  else {
    uVar7 = (int)uVar6 >> 0x10 | 0xffff8000;
  }
  if ((uVar6 & 0x8000) == 0) {
    uVar6 = uVar6 & 0x7fff;
  }
  else {
    uVar6 = uVar6 | 0xffff8000;
  }
  if (0 < (int)((param_2 - iVar13) * uVar6 + (param_1 - iVar14) * uVar7)) goto LAB_8002e9a4;
  piVar5 = (int *)(local_40[iVar16 + 2] * 0xc + g_TrackSegmentArray);
  uVar6 = (int)*(short *)(local_40[iVar16 + 2] * 2 + DAT_800cca18) - (int)(short)uVar1;
  piVar3 = (int *)(*psVar9 * 0xc + g_TrackSegmentArray);
  piVar2 = (int *)(local_40[iVar16 + 3] * 0xc + g_TrackSegmentArray);
  if ((uVar6 & 0x800) == 0) {
    uVar6 = uVar6 & 0x7ff;
  }
  else {
    uVar6 = uVar6 | 0xfffff800;
  }
  iVar12 = 0xf;
  iVar11 = uVar6 * 0xf00;
  piVar10 = &DAT_800b5484;
  do {
    uVar7 = (&g_SinCosTable)[-((int)(((uint)uVar1 + (iVar11 >> 0xc)) * 0x10000) >> 0x10) & 0xfff];
    if ((uVar7 & 0x80000000) == 0) {
      uVar8 = (int)uVar7 >> 0x10 & 0x7fff;
    }
    else {
      uVar8 = (int)uVar7 >> 0x10 | 0xffff8000;
    }
    if ((uVar7 & 0x8000) == 0) {
      uVar7 = uVar7 & 0x7fff;
    }
    else {
      uVar7 = uVar7 | 0xffff8000;
    }
    iVar11 = iVar11 + uVar6 * -0x100;
    if ((int)((param_2 -
              (piVar3[2] * *piVar10 + iVar13 * piVar10[1] + piVar5[2] * piVar10[2] +
               piVar2[2] * piVar10[3] >> 0xc)) * uVar7 +
             (param_1 -
             (*piVar3 * *piVar10 + iVar14 * piVar10[1] + *piVar5 * piVar10[2] + *piVar2 * piVar10[3]
             >> 0xc)) * uVar8) < 1) {
      DAT_800cca78 = local_40[iVar16 + 1] * 0x10 + iVar12;
      return (param_2 - iVar13) * uVar8 - (param_1 - iVar14) * uVar7;
    }
    iVar12 = iVar12 + -1;
    piVar10 = piVar10 + -4;
  } while (0 < iVar12);
  uVar6 = (&g_SinCosTable)[-(int)(short)uVar1 & 0xfff];
  DAT_800cca78 = (int)*(short *)((int)local_40 + iVar15) << 4;
  if ((uVar6 & 0x80000000) == 0) {
    uVar7 = (int)uVar6 >> 0x10 & 0x7fff;
  }
  else {
    uVar7 = (int)uVar6 >> 0x10 | 0xffff8000;
  }
  if ((uVar6 & 0x8000) != 0) {
    uVar6 = uVar6 | 0xffff8000;
    goto LAB_8002ea70;
  }
  goto LAB_8002ea6c;
LAB_8002e9a4:
  iVar15 = iVar15 + -2;
  iVar16 = iVar16 + -1;
  psVar9 = psVar9 + -1;
  if (iVar16 < 0) {
    uVar6 = (&g_SinCosTable)[-(int)(short)uVar1 & 0xfff];
    DAT_800cca78 = (int)((uint)(ushort)local_40[1] << 0x10) >> 0xc;
    if ((int)uVar6 < 0) {
      uVar7 = (int)uVar6 >> 0x10 | 0xffff8000;
    }
    else {
      uVar7 = (int)uVar6 >> 0x10 & 0x7fff;
    }
    if ((uVar6 & 0x8000) == 0) {
LAB_8002ea6c:
      uVar6 = uVar6 & 0x7fff;
    }
    else {
      uVar6 = uVar6 | 0xffff8000;
    }
LAB_8002ea70:
    return (param_2 - iVar13) * uVar7 - (param_1 - iVar14) * uVar6;
  }
  goto LAB_8002e68c;
}


