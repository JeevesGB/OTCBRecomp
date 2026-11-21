/* Function: FUN_8002dfcc */
/* Address: 8002dfcc */

void FUN_8002dfcc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int local_78 [13];
  int local_44;
  int *local_38;
  
  iVar3 = g_TrackSegmentCount;
  iVar2 = g_TrackSegmentArray;
  iVar1 = DAT_800cca18;
  local_44 = 0;
  local_38 = param_1;
  if (*param_1 < 1) {
    return;
  }
LAB_8002e034:
  iVar17 = local_38[1];
  iVar16 = local_38[2];
  local_78[2] = local_38[4] >> 4;
  local_78[0] = local_78[2] + -2;
  if (local_78[0] < 0) {
    local_78[0] = local_78[0] + iVar3;
  }
  local_78[1] = local_78[2] + -1;
  if (local_78[1] < 0) {
    local_78[1] = local_78[1] + iVar3;
  }
  local_78[3] = local_78[2] + 1;
  if (iVar3 <= local_78[3]) {
    local_78[3] = local_78[3] - iVar3;
  }
  local_78[4] = local_78[2] + 2;
  if (iVar3 <= local_78[4]) {
    local_78[4] = local_78[4] - iVar3;
  }
  local_78[5] = local_78[2] + 3;
  if (iVar3 <= local_78[5]) {
    local_78[5] = local_78[5] - iVar3;
  }
  iVar12 = 2;
  iVar15 = 0xc;
  piVar4 = local_78 + 2;
  do {
    iVar19 = (int)*(short *)(*(int *)((int)local_78 + iVar15) * 2 + iVar1);
    uVar8 = (&g_SinCosTable)[-iVar19 & 0xfff];
    piVar6 = (int *)(*(int *)((int)local_78 + iVar15) * 0xc + iVar2);
    iVar14 = *piVar6;
    iVar13 = piVar6[2];
    if ((uVar8 & 0x80000000) == 0) {
      uVar10 = (int)uVar8 >> 0x10 & 0x7fff;
    }
    else {
      uVar10 = (int)uVar8 >> 0x10 | 0xffff8000;
    }
    uVar7 = uVar8 | 0xffff8000;
    if ((uVar8 & 0x8000) == 0) {
      uVar7 = uVar8 & 0x7fff;
    }
    if ((int)((iVar16 - iVar13) * uVar7 + (iVar17 - iVar14) * uVar10) < 1) {
      uVar8 = *(short *)(local_78[iVar12 + 2] * 2 + iVar1) - iVar19;
      piVar6 = (int *)(*piVar4 * 0xc + iVar2);
      piVar9 = (int *)(local_78[iVar12 + 2] * 0xc + iVar2);
      piVar4 = (int *)(local_78[iVar12 + 3] * 0xc + iVar2);
      if ((uVar8 & 0x800) == 0) {
        uVar8 = uVar8 & 0x7ff;
      }
      else {
        uVar8 = uVar8 | 0xfffff800;
      }
      local_78[1] = 0xf;
      iVar18 = uVar8 * 0xf00;
      piVar11 = &DAT_800b5484;
      goto LAB_8002e25c;
    }
    iVar15 = iVar15 + -4;
    iVar12 = iVar12 + -1;
    piVar4 = piVar4 + -1;
  } while (-1 < iVar12);
  uVar8 = (&g_SinCosTable)[-iVar19 & 0xfff];
  local_78[1] = local_78[1] << 4;
  if ((int)uVar8 < 0) {
    uVar10 = (int)uVar8 >> 0x10 | 0xffff8000;
  }
  else {
    uVar10 = (int)uVar8 >> 0x10 & 0x7fff;
  }
  if ((uVar8 & 0x8000) == 0) goto LAB_8002e4ac;
  uVar7 = uVar8 | 0xffff8000;
  goto LAB_8002e4b4;
  while( true ) {
    local_78[1] = local_78[1] + -1;
    piVar11 = piVar11 + -4;
    if (local_78[1] < 1) break;
LAB_8002e25c:
    uVar10 = (&g_SinCosTable)[-(iVar19 + (iVar18 >> 0xc)) & 0xfff];
    if ((uVar10 & 0x80000000) == 0) {
      uVar7 = (int)uVar10 >> 0x10 & 0x7fff;
    }
    else {
      uVar7 = (int)uVar10 >> 0x10 | 0xffff8000;
    }
    uVar5 = uVar10 | 0xffff8000;
    if ((uVar10 & 0x8000) == 0) {
      uVar5 = uVar10 & 0x7fff;
    }
    iVar18 = iVar18 + uVar8 * -0x100;
    if ((int)((iVar16 - (piVar6[2] * *piVar11 + iVar13 * piVar11[1] + piVar9[2] * piVar11[2] +
                         piVar4[2] * piVar11[3] >> 0xc)) * uVar5 +
             (iVar17 - (*piVar6 * *piVar11 + iVar14 * piVar11[1] + *piVar9 * piVar11[2] +
                        *piVar4 * piVar11[3] >> 0xc)) * uVar7) < 1) {
      local_78[1] = local_78[iVar12 + 1] * 0x10 + local_78[1];
      iVar16 = (iVar16 - iVar13) * uVar7 - (iVar17 - iVar14) * uVar5;
      goto LAB_8002e4d0;
    }
  }
  uVar8 = (&g_SinCosTable)[-iVar19 & 0xfff];
  local_78[1] = *(int *)((int)local_78 + iVar15) << 4;
  if ((uVar8 & 0x80000000) == 0) {
    uVar10 = (int)uVar8 >> 0x10 & 0x7fff;
  }
  else {
    uVar10 = (int)uVar8 >> 0x10 | 0xffff8000;
  }
  uVar7 = uVar8 | 0xffff8000;
  if ((uVar8 & 0x8000) == 0) {
LAB_8002e4ac:
    uVar7 = uVar8 & 0x7fff;
  }
LAB_8002e4b4:
  iVar16 = (iVar16 - iVar13) * uVar10 - (iVar17 - iVar14) * uVar7;
LAB_8002e4d0:
  local_38[3] = iVar16;
  local_38[4] = local_78[1];
  local_38 = local_38 + 4;
  local_44 = local_44 + 1;
  if (*param_1 <= local_44) {
    return;
  }
  goto LAB_8002e034;
}


