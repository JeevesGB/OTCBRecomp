/* Function: UpdateCarSegment */
/* Address: 8003a7b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UpdateCarSegment(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  SVECTOR *r0;
  undefined4 uVar9;
  short sVar10;
  short sVar11;
  uint uVar12;
  short sVar13;
  undefined1 *puVar14;
  VECTOR *r1;
  int iVar15;
  undefined1 auStack_a8 [64];
  short local_68;
  short local_60;
  short local_58;
  short local_50;
  ushort local_48;
  
  puVar14 = auStack_a8;
  local_58 = *(short *)(g_CarPhysicsParams + 0x46);
  local_68 = *(short *)(g_CarPhysicsParams + 0x48);
  local_50 = *(short *)(g_CarPhysicsParams + 0x54) - local_58;
  local_60 = *(short *)(g_CarPhysicsParams + 0x56) - local_68;
  g_WheelDataPtr = (&g_TrackSurfaceTypeTable)[*(byte *)(g_CarTrackData + 3)];
  local_48 = g_CarTrackSegment;
  iVar5 = g_CarPhysicsParams;
  gte_SetRotMatrix((MATRIX *)&GTE_VXY0);
  sVar11 = *(short *)(iVar5 + 0x58);
  sVar10 = *(short *)(iVar5 + 0x5c);
  *(undefined2 *)(puVar14 + 0x68) = *(undefined2 *)(iVar5 + 0x58);
  if (sVar11 < sVar10) {
    *(undefined2 *)(puVar14 + 0x68) = *(undefined2 *)(iVar5 + 0x5c);
  }
  sVar11 = *(short *)(iVar5 + 0x5a);
  sVar10 = *(short *)(iVar5 + 0x5e);
  *(undefined2 *)(puVar14 + 0x70) = *(undefined2 *)(iVar5 + 0x5a);
  if (sVar10 < sVar11) {
    *(undefined2 *)(puVar14 + 0x70) = *(undefined2 *)(iVar5 + 0x5e);
  }
  *(undefined2 *)(puVar14 + 0x78) = 0;
  uVar12 = 0;
  r1 = (VECTOR *)(puVar14 + 0x30);
  do {
    uVar2 = *(ushort *)(puVar14 + 0x78) + 1;
    iVar5 = (int)(uVar2 * 0x10000) >> 0x11;
    *(short *)(puVar14 + 0x78) = (short)uVar2;
    if ((uVar2 & 1) == 0) {
      iVar5 = -iVar5;
      if (iVar5 < *(short *)(puVar14 + 0x70)) {
        uVar12 = uVar12 | 1;
        goto LAB_8003ad14;
      }
LAB_8003a940:
      iVar6 = (uint)*(ushort *)(puVar14 + 0x60) + iVar5;
      sVar11 = (short)iVar6;
      iVar3 = iVar6 * 0x10000 >> 0x10;
      if (iVar3 < g_TrackSegmentCount) {
        if (iVar3 < 0) {
          uVar2 = g_TrackSegmentCount & 0xffff;
          goto LAB_8003a98c;
        }
      }
      else {
        uVar2 = -(g_TrackSegmentCount & 0xffffU);
LAB_8003a98c:
        iVar6 = iVar6 + uVar2;
        sVar11 = (short)iVar6;
      }
      iVar3 = (int)sVar11;
      piVar7 = (int *)(iVar3 * 0xc + g_TrackSegmentArray);
      *(int *)(puVar14 + 0x20) = *piVar7 - _g_CarPosX;
      *(int *)(puVar14 + 0x24) = piVar7[1] - _g_CarPosY;
      *(int *)(puVar14 + 0x28) = piVar7[2] - _g_CarPosZ;
      ApplyRotMatrixLV((VECTOR *)(puVar14 + 0x20),(VECTOR *)(puVar14 + 0x10));
      gte_SetTransVector((VECTOR *)(puVar14 + 0x10));
      sVar10 = (short)iVar6;
      sVar11 = (short)iVar5;
      iVar3 = GetCarTrackDistance(iVar3);
      iVar1 = uVar12 << 0x10;
      if (-1 < iVar3) {
        iVar1 = (iVar3 >> 1) - *(int *)(g_CarPhysicsParams + 0x34);
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        iVar4 = *(int *)(g_CarPhysicsParams + 0x38);
        if (iVar4 < iVar1) {
          iVar1 = iVar4;
        }
        iVar15 = (iVar1 << 0xc) / iVar4;
        if (iVar4 == 0) {
          trap(0x1c00);
        }
        if ((iVar4 == -1) && (iVar1 << 0xc == -0x80000000)) {
          trap(0x1800);
        }
        iVar1 = (uint)*(ushort *)(puVar14 + 0x50) + (*(short *)(puVar14 + 0x58) * iVar15 >> 0xc);
        sVar13 = (short)iVar1;
        uVar9 = 0x20000;
        if ((g_ActiveCarCount <= *(short *)(puVar14 + 0x78)) &&
           (*(int *)(g_CarPhysicsParams + 0x30) <= iVar3)) {
          uVar9 = 0;
        }
        if ((sVar11 <= *(short *)(g_CarPhysicsParams + 0x58)) &&
           (*(short *)(g_CarPhysicsParams + 0x5a) <= sVar11)) {
          iVar3 = (int)sVar10;
          GTE_IR1 = *(short *)(puVar14 + 0x40) + (short)(*(short *)(puVar14 + 0x48) * iVar15 >> 0xc)
          ;
          ApplyWheelForce(uVar9,g_WheelForceTable1,iVar3);
          GTE_IR1 = sVar13;
          ApplyWheelForce(uVar9,g_WheelForceTable2,iVar3);
          piVar7 = (int *)(puVar14 + 0x10);
          piVar8 = (int *)(g_TrackSurfaceData + *(int *)(iVar3 * 4 + g_TrackSurfaceData));
          iVar3 = *piVar8;
          r0 = (SVECTOR *)(piVar8 + 1);
          while (iVar3 = iVar3 + -1, iVar3 != -1) {
            gte_ApplyRotMatrix(r0,r1);
            *(int *)(puVar14 + 0x30) = *(int *)(puVar14 + 0x30) + *piVar7;
            *(int *)(puVar14 + 0x34) = *(int *)(puVar14 + 0x34) + piVar7[1];
            *(int *)(puVar14 + 0x38) = *(int *)(puVar14 + 0x38) + piVar7[2];
            gte_SetTransVector(r1);
            gte_SetRotMatrix((MATRIX *)&g_MatrixScaleZ);
            ApplyWheelForce(uVar9,g_WheelForceTable3,(char)r0->pad);
            gte_SetRotMatrix((MATRIX *)&GTE_VXY0);
            sVar10 = (short)iVar6;
            sVar11 = (short)iVar5;
            sVar13 = (short)iVar1;
            r0 = r0 + 1;
          }
        }
        iVar1 = uVar12 << 0x10;
        if ((sVar11 <= *(short *)(g_CarPhysicsParams + 0x5c)) &&
           (iVar1 = uVar12 << 0x10, *(short *)(g_CarPhysicsParams + 0x5e) <= sVar11)) {
          GTE_IR1 = sVar13;
          gte_SetTransVector((VECTOR *)(puVar14 + 0x10));
          ApplyWheelForce(uVar9,g_WheelForceTable4,(int)sVar10);
          goto LAB_8003ad14;
        }
      }
    }
    else {
      if (iVar5 <= *(short *)(puVar14 + 0x68)) goto LAB_8003a940;
      uVar12 = uVar12 | 2;
LAB_8003ad14:
      iVar1 = uVar12 << 0x10;
    }
    if (iVar1 >> 0x10 == 3) {
      HandleCarOffTrack();
      return;
    }
  } while( true );
}


