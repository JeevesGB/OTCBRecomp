/* Function: UpdateCarControls */
/* Address: 800405a4 */

void UpdateCarControls(ushort *param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  MATRIX *pMVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined1 *puVar15;
  short sVar16;
  ushort *puVar17;
  ushort *puVar18;
  MATRIX *r0;
  undefined4 uVar19;
  undefined4 *puVar20;
  undefined1 *puVar21;
  undefined1 auStack_c0 [112];
  short local_50;
  short local_4e;
  short local_4c;
  
  iVar7 = g_CarPhysicsParams;
  puVar21 = auStack_c0;
  puVar9 = &g_TrackDataPtr;
  param_1[0x2c] = 0xffff;
  uVar14 = (uint)*param_1;
  iVar12 = (param_2 >> 1) - *(int *)(iVar7 + 0x34);
  uVar19 = 0;
  if (iVar12 < 0) {
    iVar12 = 0;
  }
  iVar5 = *(int *)(iVar7 + 0x38);
  if (iVar5 < iVar12) {
    iVar12 = iVar5;
  }
  sVar4 = (short)((iVar12 << 0xc) / iVar5);
  if (iVar5 == 0) {
    trap(0x1c00);
  }
  if ((iVar5 == -1) && (iVar12 << 0xc == -0x80000000)) {
    trap(0x1800);
  }
  if (param_2 < *(int *)(iVar7 + 4)) {
    uVar19 = 0x20000;
  }
  local_50 = param_1[0x12] - g_CarPosX;
  local_4e = param_1[0x14] - g_CarPosY;
  g_WheelDataPtr = &PTR_DAT_800ad808;
  local_4c = param_1[0x16] - g_CarPosZ;
  sVar16 = sVar4;
  gte_SetRotMatrix((MATRIX *)&GTE_VXY0);
  gte_ldv0((SVECTOR *)(puVar21 + 0x70));
  gte_rtv0();
  pMVar6 = (MATRIX *)(puVar21 + 0x30);
  gte_stlvnl((VECTOR *)(puVar21 + 0x44));
  gte_SetTransMatrix(pMVar6);
  gte_ldclmv((MATRIX *)(param_1 + 8));
  gte_rtir();
  gte_stclmv(pMVar6);
  gte_ldclmv((MATRIX *)(param_1 + 9));
  gte_rtir();
  gte_stclmv((MATRIX *)(puVar21 + 0x32));
  gte_ldclmv((MATRIX *)(param_1 + 10));
  gte_rtir();
  gte_stclmv((MATRIX *)(puVar21 + 0x34));
  gte_SetRotMatrix(pMVar6);
  iVar12 = *(int *)(puVar9 + -0x2cd0);
  GTE_IR1 = *(short *)(iVar12 + 0x3e) +
            (short)(((int)*(short *)(iVar12 + 0x4c) - (int)*(short *)(iVar12 + 0x3e)) * (int)sVar4
                   >> 0xc);
  param_1[0x2c] = GTE_IR1;
  if ((uVar14 & 2) != 0) {
    uVar13 = 7;
    if ((param_2 <= *(int *)(iVar12 + 0x14)) && (uVar13 = 0, *(int *)(iVar12 + 0x10) < param_2)) {
      uVar13 = 6;
    }
    ApplyWheelForce(uVar19,*(undefined4 *)(param_1 + 2),uVar13);
  }
  g_WheelDataPtr = &PTR_DAT_800ad908;
  if ((param_2 < *(int *)(g_CarPhysicsParams + 0xc)) && ((uVar14 & 1) != 0)) {
    GTE_IR1 = *(short *)(g_CarPhysicsParams + 0x3c) +
              (short)(((int)*(short *)(g_CarPhysicsParams + 0x4a) -
                      (int)*(short *)(g_CarPhysicsParams + 0x3c)) * (int)sVar16 >> 0xc);
    ApplyWheelForce(uVar19,*(undefined4 *)(param_1 + 2),3);
  }
  if ((param_2 < *(int *)(g_CarPhysicsParams + 0x28)) && ((uVar14 & 4) != 0)) {
    GTE_IR1 = *(short *)(g_CarPhysicsParams + 0x42) +
              (short)(((int)*(short *)(g_CarPhysicsParams + 0x50) -
                      (int)*(short *)(g_CarPhysicsParams + 0x42)) * (int)sVar16 >> 0xc);
    ApplyWheelForce(uVar19,*(undefined4 *)(param_1 + 2),1);
  }
  *(ushort *)(puVar21 + 0x70) = param_1[0x26] - g_CarPosX;
  *(ushort *)(puVar21 + 0x72) = param_1[0x28] - g_CarPosY;
  *(ushort *)(puVar21 + 0x74) = param_1[0x2a] - g_CarPosZ;
  gte_SetRotMatrix((MATRIX *)&GTE_VXY0);
  gte_ldv0((SVECTOR *)(puVar21 + 0x70));
  gte_rtv0();
  gte_stlvnl((VECTOR *)(puVar21 + 0x24));
  pMVar6 = (MATRIX *)(puVar21 + 0x10);
  gte_SetTransMatrix(pMVar6);
  gte_ldclmv((MATRIX *)(param_1 + 0x1c));
  gte_rtir();
  gte_stclmv(pMVar6);
  gte_ldclmv((MATRIX *)(param_1 + 0x1d));
  gte_rtir();
  gte_stclmv((MATRIX *)(puVar21 + 0x12));
  gte_ldclmv((MATRIX *)(param_1 + 0x1e));
  gte_rtir();
  gte_stclmv((MATRIX *)(puVar21 + 0x14));
  gte_SetRotMatrix(pMVar6);
  if ((param_2 < *(int *)(g_CarPhysicsParams + 0x1c)) && ((uVar14 & 0x10) != 0)) {
    GTE_IR1 = *(short *)(g_CarPhysicsParams + 0x40) +
              (short)(((int)*(short *)(g_CarPhysicsParams + 0x4e) -
                      (int)*(short *)(g_CarPhysicsParams + 0x40)) * (int)sVar16 >> 0xc);
    uVar13 = 2;
    if (*(int *)(g_CarPhysicsParams + 0x18) < param_2) {
      uVar13 = 8;
    }
    ApplyWheelForce(uVar19,*(undefined4 *)(param_1 + 2),uVar13);
  }
  iVar12 = g_CarPhysicsParams;
  if ((param_2 < *(int *)(g_CarPhysicsParams + 0x24)) && ((uVar14 & 8) != 0)) {
    sVar4 = *(short *)(g_CarPhysicsParams + 0x44) +
            (short)(((int)*(short *)(g_CarPhysicsParams + 0x52) -
                    (int)*(short *)(g_CarPhysicsParams + 0x44)) * (int)sVar16 >> 0xc);
    *(short *)(puVar21 + 0x8a) = sVar4;
    uVar1 = *param_1;
    *(short *)(puVar21 + 0x8c) = sVar4;
    if ((uVar1 & 0x20) != 0) {
      *(ushort *)(puVar21 + 0x8a) = param_1[0x2c];
    }
    if (*(int *)(iVar12 + 0x20) < param_2) {
      *(undefined2 *)(puVar21 + 0x88) = 4;
    }
    else {
      *(undefined2 *)(puVar21 + 0x88) = 5;
    }
    uVar13 = 4;
    uVar14 = 0;
    puVar15 = puVar21 + 0x78;
    puVar20 = &g_SinCosTable;
    r0 = (MATRIX *)(puVar21 + 0x30);
    pMVar6 = (MATRIX *)(puVar21 + 0x50);
    bVar2 = true;
    puVar17 = param_1;
    puVar18 = param_1;
    do {
      sVar4 = (short)uVar13;
      if (bVar2) {
        GTE_IR1 = *(ushort *)(puVar21 + 0x8a);
        *(ushort *)(puVar21 + 0x72) = puVar18[0x2d];
      }
      else {
        sVar4 = *(short *)(puVar21 + 0x88);
        GTE_IR1 = *(ushort *)(puVar21 + 0x8c);
        *(undefined2 *)(puVar21 + 0x72) = 0;
      }
      if ((uVar14 & 1) == 0) {
        *(ushort *)(puVar21 + 0x70) = -puVar17[0x2e];
        *(ushort *)(puVar21 + 0x72) = *(ushort *)(puVar21 + 0x72) ^ 0x800;
      }
      else {
        *(ushort *)(puVar21 + 0x70) = puVar17[0x2e];
      }
      *(undefined2 *)(puVar21 + 0x74) = 0;
      *(undefined4 *)(puVar21 + 0x78) = puVar20[*(ushort *)(puVar21 + 0x70) & 0xfff];
      uVar3 = puVar20[*(ushort *)(puVar21 + 0x72) & 0xfff];
      *(undefined4 *)(puVar21 + 0x80) = g_SinCosTable;
      *(undefined4 *)(puVar21 + 0x7c) = uVar3;
      iVar5 = (int)*(short *)(puVar15 + 4);
      iVar11 = (int)*(short *)(puVar15 + 10);
      iVar8 = (int)*(short *)(puVar15 + 6);
      iVar10 = (int)*(short *)(puVar15 + 8);
      iVar12 = *(short *)(puVar21 + 0x78) * iVar5 >> 6;
      *(short *)(puVar21 + 0x10) = (short)(iVar8 * iVar11 >> 0xc) + (short)(iVar12 * iVar10 >> 0x12)
      ;
      *(short *)(puVar21 + 0x12) = (short)(iVar12 * iVar11 >> 0x12) - (short)(iVar8 * iVar10 >> 0xc)
      ;
      iVar7 = (int)*(short *)(puVar15 + 2);
      iVar12 = *(short *)(puVar21 + 0x78) * iVar8 >> 6;
      *(short *)(puVar21 + 0x1a) = -*(short *)(puVar21 + 0x78);
      *(short *)(puVar21 + 0x1c) = (short)(iVar12 * iVar10 >> 0x12) - (short)(iVar5 * iVar11 >> 0xc)
      ;
      *(short *)(puVar21 + 0x1e) = (short)(iVar5 * iVar10 >> 0xc) + (short)(iVar12 * iVar11 >> 0x12)
      ;
      *(short *)(puVar21 + 0x14) = (short)(iVar7 * iVar5 >> 0xc);
      *(short *)(puVar21 + 0x16) = (short)(iVar7 * iVar10 >> 0xc);
      *(short *)(puVar21 + 0x18) = (short)(iVar7 * iVar11 >> 0xc);
      *(short *)(puVar21 + 0x20) = (short)(iVar7 * iVar8 >> 0xc);
      *(int *)(puVar21 + 0x24) = (int)(short)param_1[0x32];
      *(int *)(puVar21 + 0x28) = (int)(short)param_1[0x33];
      *(int *)(puVar21 + 0x2c) = (int)(short)param_1[0x34];
      gte_SetRotMatrix(r0);
      gte_ldclmv((MATRIX *)(puVar21 + 0x10));
      gte_rtir();
      gte_stclmv(pMVar6);
      gte_ldclmv((MATRIX *)(puVar21 + 0x12));
      gte_rtir();
      gte_stclmv((MATRIX *)(puVar21 + 0x52));
      gte_ldclmv((MATRIX *)(puVar21 + 0x14));
      gte_rtir();
      gte_stclmv((MATRIX *)(puVar21 + 0x54));
      gte_SetTransMatrix(r0);
      gte_ldlv0((VECTOR *)(puVar21 + 0x24));
      gte_rt();
      gte_stlvnl((VECTOR *)(puVar21 + 100));
      gte_SetRotMatrix(pMVar6);
      gte_SetTransMatrix(pMVar6);
      param_1 = param_1 + 4;
      puVar17 = puVar17 + 1;
      uVar3 = *(undefined4 *)(puVar18 + 2);
      uVar14 = uVar14 + 1;
      *(undefined4 **)(puVar21 + 0x90) = puVar20;
      ApplyWheelForce(uVar19,uVar3,(int)sVar4);
      puVar20 = *(undefined4 **)(puVar21 + 0x90);
      bVar2 = (int)uVar14 < 2;
    } while ((int)uVar14 < 4);
  }
  return;
}


