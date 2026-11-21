/* Function: FUN_8003b118 */
/* Address: 8003b118 */

void FUN_8003b118(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  VECTOR *r0;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  undefined1 *puVar19;
  SVECTOR *pSVar20;
  int iVar21;
  undefined1 *puVar22;
  undefined1 auStack_110 [16];
  MATRIX local_100;
  undefined2 local_e0;
  undefined2 local_de;
  undefined2 local_dc;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  puVar22 = auStack_110;
  iVar21 = *(int *)(param_1 + 0x10);
  iVar10 = g_TrackLength;
  if (-1 < param_2) {
    if (param_2 < g_TrackLength) goto LAB_8003b178;
    iVar10 = -g_TrackLength;
  }
  param_2 = param_2 + iVar10;
LAB_8003b178:
  FUN_8002ed58(param_2,param_3,&local_28,&local_24);
  param_2 = param_2 + 1;
  if (g_TrackLength <= param_2) {
    param_2 = param_2 - g_TrackLength;
  }
  FUN_8002ed58(param_2,param_3,&local_20,&local_1c);
  uVar5 = ratan2(local_20 - local_28,local_1c - local_24);
  uVar9 = (&g_SinCosTable)[uVar5 & 0xfff];
  if ((int)uVar9 < 0) {
    uVar11 = (int)uVar9 >> 0x10 | 0xffff8000;
  }
  else {
    uVar11 = (int)uVar9 >> 0x10 & 0x7fff;
  }
  if ((uVar9 & 0x8000) == 0) {
    uVar9 = uVar9 & 0x7fff;
  }
  else {
    uVar9 = uVar9 | 0xffff8000;
  }
  *(short *)(param_1 + 0x4e) = (short)uVar5;
  local_28 = local_28 - (int)*(short *)(iVar21 + 6) * uVar9;
  local_24 = local_24 - (int)*(short *)(iVar21 + 6) * uVar11;
  uVar6 = FUN_8002e538(local_28 >> 0xc,local_24 >> 0xc,param_2);
  uVar4 = (undefined2)DAT_800cca78;
  iVar16 = 3;
  iVar10 = param_1 + 6;
  *(undefined4 *)(param_1 + 100) = uVar6;
  *(undefined2 *)(param_1 + 0x15c) = uVar4;
  do {
    *(undefined2 *)(iVar10 + 0xb0) = uVar4;
    iVar16 = iVar16 + -1;
    iVar10 = iVar10 + -2;
  } while (-1 < iVar16);
  uVar17 = 4;
  local_e0 = 0;
  local_dc = 0;
  local_48 = g_SinCosTable;
  uVar6 = local_48;
  uVar7 = (&g_SinCosTable)[uVar5 & 0xfff];
  local_40 = g_SinCosTable;
  local_44._0_2_ = (short)uVar7;
  local_48._0_2_ = (short)g_SinCosTable;
  iVar12 = (int)(short)local_44;
  local_44._2_2_ = (short)((uint)uVar7 >> 0x10);
  local_40._2_2_ = (short)((uint)g_SinCosTable >> 0x10);
  iVar15 = (int)local_40._2_2_;
  iVar13 = (int)local_44._2_2_;
  iVar14 = (int)(short)local_48;
  iVar10 = (short)local_48 * iVar12 >> 6;
  local_100.m[0][0] = (short)(iVar13 * iVar15 >> 0xc) + (short)(iVar10 * iVar14 >> 0x12);
  local_100.m[0][1] = (short)(iVar10 * iVar15 >> 0x12) - (short)(iVar13 * iVar14 >> 0xc);
  iVar16 = (int)local_40._2_2_;
  iVar10 = (short)local_48 * iVar13 >> 6;
  local_100.m[1][2] = -(short)local_48;
  local_100.m[2][0] = (short)(iVar10 * iVar14 >> 0x12) - (short)(iVar12 * iVar15 >> 0xc);
  local_100.m[2][1] = (short)(iVar12 * iVar14 >> 0xc) + (short)(iVar10 * iVar15 >> 0x12);
  local_100.m[0][2] = (short)(iVar16 * iVar12 >> 0xc);
  local_100.m[1][0] = (short)(iVar16 * iVar14 >> 0xc);
  local_100.m[1][1] = (short)(iVar16 * iVar15 >> 0xc);
  local_100.m[2][2] = (short)(iVar16 * iVar13 >> 0xc);
  local_de = (short)uVar5;
  local_48 = uVar6;
  local_44 = uVar7;
  local_40 = uVar6;
  gte_SetRotMatrix(&local_100);
  *(undefined4 *)(puVar22 + 0x48) = uVar17;
  *(undefined4 *)(puVar22 + 0x80) = uVar17;
  pSVar20 = (SVECTOR *)(puVar22 + 0x30);
  *(undefined2 *)(puVar22 + 0x32) = 0;
  iVar10 = 0;
  iVar16 = 0;
  iVar12 = param_1;
  iVar13 = param_1;
  do {
    *(short *)(puVar22 + 0x30) = *(short *)(iVar21 + 0x28) << 6;
    *(short *)(puVar22 + 0x34) = *(short *)(iVar21 + 0x2a) << 6;
    gte_ldsv(pSVar20);
    gte_rtir_sf0();
    gte_stlvnl((VECTOR *)(puVar22 + 0x38));
    iVar21 = iVar21 + 4;
    iVar18 = iVar10 + 1;
    puVar19 = puVar22 + 0x80;
    iVar14 = *(int *)(puVar22 + 0x40);
    iVar15 = (*(int *)(puVar22 + 0x38) >> 6) + *(int *)(puVar22 + 0xe8);
    *(int *)(param_1 + 0x80) = iVar15;
    iVar14 = (iVar14 >> 6) + *(int *)(puVar22 + 0xec);
    *(int *)(param_1 + 0x88) = iVar14;
    *(int *)(puVar19 + iVar10 * 0x10 + 4) = iVar15 >> 0xc;
    *(int *)(puVar19 + iVar10 * 0x10 + 8) = iVar14 >> 0xc;
    sVar3 = *(short *)(iVar13 + 0xb0);
    iVar13 = iVar13 + 2;
    param_1 = param_1 + 0xc;
    *(int *)(puVar22 + 0xf0) = iVar15;
    *(int *)(puVar22 + 0xf4) = iVar14;
    *(int *)(puVar19 + iVar10 * 0x10 + 0x10) = (int)sVar3;
    *(int *)(puVar22 + iVar16 + 0x50) = iVar15 >> 0xc;
    *(undefined4 *)(puVar22 + iVar16 + 0x54) = 0;
    *(int *)(puVar22 + iVar16 + 0x58) = iVar14 >> 0xc;
    iVar10 = iVar18;
    iVar16 = iVar16 + 0xc;
  } while (iVar18 < 4);
  FUN_8002dfcc(puVar19);
  iVar21 = 0;
  iVar10 = iVar12;
  do {
    uVar4 = *(undefined2 *)(puVar19 + 0x10);
    puVar19 = puVar19 + 0x10;
    iVar21 = iVar21 + 1;
    *(undefined2 *)(iVar10 + 0x138) = uVar4;
    *(undefined2 *)(iVar10 + 0xb0) = uVar4;
    iVar10 = iVar10 + 2;
  } while (iVar21 < 4);
  puVar19 = puVar22 + 0x48;
  FUN_8002efdc(puVar19);
  iVar16 = 0;
  iVar13 = 0;
  iVar10 = iVar12;
  iVar21 = iVar12;
  do {
    iVar14 = *(int *)(puVar19 + 0xc);
    iVar13 = iVar13 + 1;
    *(int *)(iVar21 + 0x84) = iVar14;
    piVar1 = (int *)(iVar10 + 0x1d4);
    piVar2 = (int *)(iVar10 + 0x278);
    iVar10 = iVar10 + 4;
    iVar21 = iVar21 + 0xc;
    iVar14 = iVar14 + *piVar1 + *piVar2;
    iVar16 = iVar16 + iVar14;
    *(int *)(puVar19 + 0xc) = iVar14;
    puVar19 = puVar19 + 0xc;
  } while (iVar13 < 4);
  if (iVar16 < 0) {
    iVar16 = iVar16 + 3;
  }
  iVar10 = ((*(int *)(puVar22 + 0x54) - *(int *)(puVar22 + 0x6c)) + *(int *)(puVar22 + 0x60)) -
           *(int *)(puVar22 + 0x78) >> 8;
  iVar16 = iVar16 >> 2;
  lVar8 = SquareRoot0(*(int *)(iVar12 + 0x1d0) - iVar10 * iVar10);
  lVar8 = ratan2(iVar10,lVar8);
  *(long *)(iVar12 + 0x188) = lVar8 * -0x1000;
  *(uint *)(iVar12 + 0x18c) = uVar5 << 0xc;
  iVar10 = ((*(int *)(puVar22 + 0x54) - *(int *)(puVar22 + 0x60)) + *(int *)(puVar22 + 0x6c)) -
           *(int *)(puVar22 + 0x78) >> 8;
  lVar8 = SquareRoot0(*(int *)(iVar12 + 0x1cc) - iVar10 * iVar10);
  lVar8 = ratan2(iVar10,lVar8);
  *(long *)(iVar12 + 400) = lVar8 << 0xc;
  uVar9 = *(int *)(iVar12 + 0x188) >> 0xc;
  *(short *)(puVar22 + 0x30) = (short)uVar9;
  uVar5 = *(int *)(iVar12 + 0x18c) >> 0xc;
  *(short *)(puVar22 + 0x32) = (short)uVar5;
  uVar11 = *(int *)(iVar12 + 400) >> 0xc;
  *(short *)(puVar22 + 0x34) = (short)uVar11;
  *(undefined4 *)(puVar22 + 0xd8) = (&g_SinCosTable)[uVar9 & 0xfff];
  *(undefined4 *)(puVar22 + 0xdc) = (&g_SinCosTable)[uVar5 & 0xfff];
  *(undefined4 *)(puVar22 + 0xe0) = (&g_SinCosTable)[uVar11 & 0xfff];
  iVar13 = (int)*(short *)(puVar22 + 0xdc);
  iVar18 = (int)*(short *)(puVar22 + 0xe2);
  iVar14 = (int)*(short *)(puVar22 + 0xde);
  iVar15 = (int)*(short *)(puVar22 + 0xe0);
  iVar10 = *(short *)(puVar22 + 0xd8) * iVar13 >> 6;
  *(short *)(puVar22 + 0x10) = (short)(iVar14 * iVar18 >> 0xc) + (short)(iVar10 * iVar15 >> 0x12);
  *(short *)(puVar22 + 0x12) = (short)(iVar10 * iVar18 >> 0x12) - (short)(iVar14 * iVar15 >> 0xc);
  iVar21 = (int)*(short *)(puVar22 + 0xda);
  iVar10 = *(short *)(puVar22 + 0xd8) * iVar14 >> 6;
  *(short *)(puVar22 + 0x1a) = -*(short *)(puVar22 + 0xd8);
  *(short *)(puVar22 + 0x1c) = (short)(iVar10 * iVar15 >> 0x12) - (short)(iVar13 * iVar18 >> 0xc);
  *(short *)(puVar22 + 0x1e) = (short)(iVar13 * iVar15 >> 0xc) + (short)(iVar10 * iVar18 >> 0x12);
  *(short *)(puVar22 + 0x14) = (short)(iVar21 * iVar13 >> 0xc);
  *(short *)(puVar22 + 0x16) = (short)(iVar21 * iVar15 >> 0xc);
  *(short *)(puVar22 + 0x18) = (short)(iVar21 * iVar18 >> 0xc);
  *(short *)(puVar22 + 0x20) = (short)(iVar21 * iVar14 >> 0xc);
  gte_SetRotMatrix((MATRIX *)(puVar22 + 0x10));
  *(undefined2 *)(puVar22 + 0x32) = 0;
  *(undefined2 *)(puVar22 + 0x30) = 0;
  pSVar20 = (SVECTOR *)(puVar22 + 0x30);
  *(short *)(puVar22 + 0x34) = *(short *)(iVar12 + 0x172) * -0x40;
  gte_ldsv(pSVar20);
  gte_rtir_sf0();
  r0 = (VECTOR *)(puVar22 + 0x38);
  gte_stlvnl(r0);
  iVar10 = *(int *)(puVar22 + 0x3c);
  *(undefined4 *)(iVar12 + 0x68) = *(undefined4 *)(puVar22 + 0xe8);
  uVar6 = *(undefined4 *)(puVar22 + 0xec);
  iVar16 = (iVar10 >> 6) + iVar16;
  *(int *)(iVar12 + 0x6c) = iVar16;
  *(undefined4 *)(iVar12 + 0x70) = uVar6;
  *(short *)(puVar22 + 0x34) = *(short *)(iVar12 + 0x16e) << 6;
  gte_ldsv(pSVar20);
  gte_rtir_sf0();
  gte_stlvnl(r0);
  *(int *)(iVar12 + 0x74) = (*(int *)(puVar22 + 0x38) >> 6) + *(int *)(puVar22 + 0xe8);
  *(int *)(iVar12 + 0x78) = (*(int *)(puVar22 + 0x3c) >> 6) + iVar16;
  *(int *)(iVar12 + 0x7c) = (*(int *)(puVar22 + 0x40) >> 6) + *(int *)(puVar22 + 0xec);
  return;
}


