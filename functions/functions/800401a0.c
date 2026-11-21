/* Function: GetCarVisibility */
/* Address: 800401a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int GetCarVisibility(int param_1)

{
  undefined2 uVar1;
  SVECTOR *r0;
  ushort uVar2;
  ushort uVar3;
  MATRIX *r0_00;
  int iVar4;
  long *r0_01;
  long *r0_02;
  ushort *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [32];
  VECTOR local_b8 [10];
  
  puVar14 = auStack_e8;
  iVar13 = *(int *)(param_1 + 0x14);
  local_b8[0].vx = *(int *)(iVar13 + 0x24) - _g_CarPosX;
  local_b8[0].vy = *(int *)(iVar13 + 0x28) - _g_CarPosY;
  local_b8[0].vz = *(int *)(iVar13 + 0x2c) - _g_CarPosZ;
  ApplyMatrixLV((MATRIX *)&GTE_VXY0,local_b8,(VECTOR *)(auStack_d8 + 0x14));
  r0_00 = (MATRIX *)auStack_d8;
  gte_SetTransMatrix(r0_00);
  gte_ldclmv((MATRIX *)(iVar13 + 0x10));
  gte_rtir();
  gte_stclmv(r0_00);
  gte_ldclmv((MATRIX *)(iVar13 + 0x12));
  gte_rtir();
  gte_stclmv((MATRIX *)(puVar14 + 0x12));
  gte_ldclmv((MATRIX *)(iVar13 + 0x14));
  gte_rtir();
  gte_stclmv((MATRIX *)(puVar14 + 0x14));
  gte_SetRotMatrix(r0_00);
  iVar13 = *(int *)(param_1 + 0x10);
  uVar1 = *(undefined2 *)(iVar13 + 4);
  *(undefined2 *)(puVar14 + 0x60) = uVar1;
  *(undefined2 *)(puVar14 + 0x40) = uVar1;
  uVar1 = *(undefined2 *)(iVar13 + 6);
  *(undefined2 *)(puVar14 + 100) = uVar1;
  *(undefined2 *)(puVar14 + 0x44) = uVar1;
  uVar1 = *(undefined2 *)(iVar13 + 8);
  *(undefined2 *)(puVar14 + 0x68) = uVar1;
  *(undefined2 *)(puVar14 + 0x48) = uVar1;
  uVar1 = *(undefined2 *)(iVar13 + 10);
  *(undefined2 *)(puVar14 + 0x6c) = uVar1;
  *(undefined2 *)(puVar14 + 0x4c) = uVar1;
  uVar1 = *(undefined2 *)(iVar13 + 0xc);
  iVar6 = 0;
  *(undefined2 *)(puVar14 + 0x70) = uVar1;
  *(undefined2 *)(puVar14 + 0x50) = uVar1;
  uVar1 = *(undefined2 *)(iVar13 + 0xe);
  r0_02 = (long *)(puVar14 + 0x88);
  *(undefined2 *)(puVar14 + 0x74) = uVar1;
  *(undefined2 *)(puVar14 + 0x54) = uVar1;
  uVar1 = *(undefined2 *)(iVar13 + 0x10);
  r0_01 = (long *)(puVar14 + 0xb0);
  *(undefined2 *)(puVar14 + 0x78) = uVar1;
  *(undefined2 *)(puVar14 + 0x58) = uVar1;
  r0 = (SVECTOR *)(puVar14 + 0x40);
  uVar1 = *(undefined2 *)(iVar13 + 0x12);
  *(undefined2 *)(puVar14 + 0x84) = 0;
  *(undefined2 *)(puVar14 + 0x80) = 0;
  *(undefined2 *)(puVar14 + 0x5a) = 0;
  *(undefined2 *)(puVar14 + 0x52) = 0;
  *(undefined2 *)(puVar14 + 0x4a) = 0;
  *(undefined2 *)(puVar14 + 0x42) = 0;
  *(undefined2 *)(puVar14 + 0x7a) = 0xfed4;
  *(undefined2 *)(puVar14 + 0x72) = 0xfed4;
  *(undefined2 *)(puVar14 + 0x7c) = uVar1;
  *(undefined2 *)(puVar14 + 0x5c) = uVar1;
  *(undefined2 *)(puVar14 + 0x6a) = 0xfed4;
  *(undefined2 *)(puVar14 + 0x62) = 0xfed4;
  *(undefined2 *)(puVar14 + 0x82) = 0xffce;
  do {
    gte_ldv3c(r0);
    gte_rtpt();
    gte_stsxy3c(r0_01);
    gte_stsz3c(r0_02);
    r0_02 = r0_02 + 3;
    r0_01 = r0_01 + 3;
    iVar6 = iVar6 + 3;
    r0 = r0 + 3;
  } while (iVar6 < 9);
  piVar7 = (int *)(puVar14 + 0x8c);
  puVar5 = (ushort *)(puVar14 + 0xb4);
  uVar10 = *(ushort *)(puVar14 + 0xb0);
  uVar11 = *(ushort *)(puVar14 + 0xb2);
  iVar6 = *(int *)(puVar14 + 0x88);
  iVar13 = iVar6;
  uVar2 = uVar10;
  uVar12 = uVar11;
  do {
    uVar9 = *puVar5;
    uVar3 = uVar2;
    if (((short)*puVar5 < (short)uVar10) ||
       (uVar9 = uVar10, uVar3 = *puVar5, (short)uVar2 < (short)*puVar5)) {
      uVar10 = uVar9;
      uVar2 = uVar3;
    }
    uVar9 = puVar5[1];
    if (((short)uVar11 <= (short)puVar5[1]) && (uVar9 = uVar11, (short)uVar12 < (short)puVar5[1])) {
      uVar12 = puVar5[1];
    }
    uVar11 = uVar9;
    iVar4 = *piVar7;
    iVar8 = iVar4;
    if ((iVar13 <= iVar4) && (iVar8 = iVar13, iVar6 < iVar4)) {
      iVar6 = iVar4;
    }
    piVar7 = piVar7 + 1;
    puVar5 = puVar5 + 2;
    iVar13 = iVar8;
  } while ((int)piVar7 < (int)(puVar14 + 0xac));
  iVar13 = -1;
  if (((((int)((uint)DAT_1f80003c << 0x10) <= (int)((uint)uVar2 << 0x10)) &&
       (iVar13 = -1, (int)((uint)uVar10 << 0x10) <= (int)((uint)DAT_1f80003a << 0x10))) &&
      (iVar13 = -1, (int)((uint)DAT_1f80003e << 0x10) <= (int)((uint)uVar12 << 0x10))) &&
     (((iVar13 = -1, (short)uVar11 <= DAT_1f800040 &&
       (iVar13 = -1, iVar8 <= (int)(uint)DAT_1f800038)) &&
      (iVar13 = -1, (int)(uint)JOY_MCD_BAUD <= iVar6)))) {
    iVar13 = iVar8 * g_GTEMaxVal;
  }
  return iVar13;
}


