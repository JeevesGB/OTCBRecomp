/* Function: HandleCarOffTrack */
/* Address: 8003a448 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void HandleCarOffTrack(void)

{
  short *psVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  int iVar11;
  ushort *puVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  short sVar17;
  short sVar18;
  undefined1 auStack_78 [56];
  ushort *local_40;
  short local_38;
  short local_30;
  
  puVar16 = auStack_78;
  if ((DAT_800ccbf0 != 0) && (iVar9 = (int)*(short *)(g_CarPhysicsParams + 0x60), iVar9 != 0)) {
    uVar15 = (uint)*DAT_800ccbf8;
    iVar6 = uVar15 << 0x10;
    iVar4 = iVar6 >> 0x10;
    sVar17 = (short)(_g_CarPosX / iVar4);
    if (iVar4 == 0) {
      trap(0x1c00);
    }
    if ((iVar4 == -1) && (_g_CarPosX == -0x80000000)) {
      trap(0x1800);
    }
    puVar3 = &g_CarPosX;
    uVar14 = (uint)DAT_800ccbf8[1];
    iVar5 = uVar14 << 0x10;
    iVar7 = iVar5 >> 0x10;
    sVar18 = (short)(_g_CarPosZ / iVar7);
    if (iVar7 == 0) {
      trap(0x1c00);
    }
    if ((iVar7 == -1) && (_g_CarPosZ == -0x80000000)) {
      trap(0x1800);
    }
    local_40 = DAT_800ccbf8 + 4;
    uVar10 = DAT_800ccbf8[2];
    uVar13 = DAT_800ccbf8[3];
    iVar2 = _g_CarPosZ;
    iVar8 = _g_CarPosX;
    local_38 = sVar17;
    local_30 = sVar18;
    gte_SetRotMatrix((MATRIX *)&GTE_VXY0);
    *(int *)(puVar16 + 0x24) = -*(int *)(puVar3 + 2);
    iVar11 = *(int *)((int)&PTR_DAT_800ae8f4 + (g_CameraAngleX._2_2_ + 0x80 >> 6 & 0x3cU));
    puVar12 = (ushort *)(iVar11 + 10);
    iVar9 = *(ushort *)(iVar9 * 2 + iVar11 + -2) - 1;
    *(int *)(puVar16 + 0x30) = (sVar17 * iVar4 + (iVar6 >> 0x11)) - iVar8;
    *(int *)(puVar16 + 0x34) = (sVar18 * iVar7 + (iVar5 >> 0x11)) - iVar2;
    if (iVar9 * 0x10000 >> 0x10 != -1) {
      iVar4 = (int)(short)uVar10;
      iVar6 = (int)(short)uVar13;
      do {
        uVar10 = *puVar12;
        uVar13 = puVar12[1];
        puVar12 = puVar12 + 2;
        iVar5 = (int)(((uint)*(ushort *)(puVar16 + 0x40) + (uint)uVar10) * 0x10000) >> 0x10;
        if (iVar5 < 0) {
LAB_8003a768:
          iVar7 = iVar9 + -1;
        }
        else {
          iVar2 = (int)(((uint)*(ushort *)(puVar16 + 0x48) + (uint)uVar13) * 0x10000) >> 0x10;
          iVar7 = iVar9 + -1;
          if (((-1 < iVar2) && (iVar7 = iVar9 + -1, iVar5 < iVar4)) &&
             (iVar7 = iVar9 + -1, iVar2 < iVar6)) {
            psVar1 = (short *)((iVar2 * iVar4 + iVar5) * 2 + *(int *)(puVar16 + 0x38));
            sVar17 = *psVar1;
            iVar7 = iVar9 + -1;
            if (-1 < *psVar1) {
              iVar5 = (int)(short)uVar10;
              *(int *)(puVar16 + 0x20) = *(int *)(puVar16 + 0x30) + iVar5 * (short)uVar15;
              *(int *)(puVar16 + 0x28) =
                   *(int *)(puVar16 + 0x34) + (int)(short)uVar13 * (int)(short)uVar14;
              ApplyRotMatrixLV((VECTOR *)(puVar16 + 0x20),(VECTOR *)(puVar16 + 0x10));
              gte_SetTransVector((VECTOR *)(puVar16 + 0x10));
              if (iVar5 < 0) {
                iVar5 = -iVar5;
              }
              if (iVar5 < 2) {
                iVar5 = (int)(short)uVar13;
                if (iVar5 < 0) {
                  iVar5 = -iVar5;
                }
                if (1 < iVar5) goto LAB_8003a740;
              }
              else {
LAB_8003a740:
                iVar5 = FUN_8003a22c();
                iVar7 = iVar9 + -1;
                if (iVar5 < 0) goto LAB_8003a76c;
              }
              ApplyWheelForce(0,DAT_800ccbf0,(int)sVar17);
              goto LAB_8003a768;
            }
          }
        }
LAB_8003a76c:
        iVar9 = iVar7;
      } while ((short)iVar7 != -1);
    }
  }
  return;
}


