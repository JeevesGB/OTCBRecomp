/* Function: FUN_80049830 */
/* Address: 80049830 */

void FUN_80049830(int param_1)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  VECTOR *r0;
  SVECTOR *r0_00;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 *puVar22;
  undefined1 auStack_f8 [16];
  MATRIX local_e8;
  undefined2 local_c8;
  undefined2 local_c6;
  undefined2 local_c4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  puVar22 = auStack_f8;
  iVar18 = *(int *)(param_1 + 0x6c);
  iVar17 = *(int *)(param_1 + 0x10);
  iVar21 = *(int *)(param_1 + 0x68);
  iVar20 = *(int *)(param_1 + 0x70);
  uVar3 = *(int *)(param_1 + 0x188) >> 0xc;
  local_c8 = (undefined2)uVar3;
  uVar8 = *(int *)(param_1 + 0x18c) >> 0xc;
  local_c6 = (undefined2)uVar8;
  uVar10 = *(int *)(param_1 + 400) >> 0xc;
  local_c4 = (undefined2)uVar10;
  uVar4 = (&g_SinCosTable)[uVar3 & 0xfff];
  uVar5 = (&g_SinCosTable)[uVar8 & 0xfff];
  uVar6 = (&g_SinCosTable)[uVar10 & 0xfff];
  local_2c._0_2_ = (short)uVar5;
  local_30._0_2_ = (short)uVar4;
  iVar12 = (int)(short)local_2c;
  local_2c._2_2_ = (short)((uint)uVar5 >> 0x10);
  local_28._2_2_ = (short)((uint)uVar6 >> 0x10);
  iVar15 = (int)local_28._2_2_;
  iVar13 = (int)local_2c._2_2_;
  local_28._0_2_ = (short)uVar6;
  iVar14 = (int)(short)local_28;
  iVar7 = (short)local_30 * iVar12 >> 6;
  local_e8.m[0][0] = (short)(iVar13 * iVar15 >> 0xc) + (short)(iVar7 * iVar14 >> 0x12);
  local_e8.m[0][1] = (short)(iVar7 * iVar15 >> 0x12) - (short)(iVar13 * iVar14 >> 0xc);
  local_30._2_2_ = (short)((uint)uVar4 >> 0x10);
  iVar11 = (int)local_30._2_2_;
  iVar7 = (short)local_30 * iVar13 >> 6;
  local_e8.m[1][2] = -(short)local_30;
  local_e8.m[2][0] = (short)(iVar7 * iVar14 >> 0x12) - (short)(iVar12 * iVar15 >> 0xc);
  local_e8.m[2][1] = (short)(iVar12 * iVar14 >> 0xc) + (short)(iVar7 * iVar15 >> 0x12);
  local_e8.m[0][2] = (short)(iVar11 * iVar12 >> 0xc);
  local_e8.m[1][0] = (short)(iVar11 * iVar14 >> 0xc);
  local_e8.m[1][1] = (short)(iVar11 * iVar15 >> 0xc);
  local_e8.m[2][2] = (short)(iVar11 * iVar13 >> 0xc);
  local_30 = uVar4;
  local_2c = uVar5;
  local_28 = uVar6;
  gte_SetRotMatrix(&local_e8);
  r0_00 = (SVECTOR *)(puVar22 + 0x30);
  r0 = (VECTOR *)(puVar22 + 0x38);
  iVar7 = param_1;
  iVar11 = 0;
  iVar12 = param_1;
  iVar13 = 0;
  iVar14 = param_1;
  do {
    sVar2 = *(short *)(iVar17 + 0x28);
    *(undefined2 *)(puVar22 + 0x32) = 0;
    *(short *)(puVar22 + 0x30) = sVar2 << 6;
    *(short *)(puVar22 + 0x34) = *(short *)(iVar17 + 0x2a) << 6;
    gte_ldsv(r0_00);
    gte_rtir_sf0();
    gte_stlvnl(r0);
    *(int *)(param_1 + 200) = (*(int *)(puVar22 + 0x38) >> 6) + iVar21;
    *(int *)(param_1 + 0xcc) = (*(int *)(puVar22 + 0x3c) >> 6) + iVar18;
    *(int *)(param_1 + 0xd0) = (*(int *)(puVar22 + 0x40) >> 6) + iVar20;
    *(short *)(puVar22 + 0x32) = (short)(*(int *)(iVar7 + 0x278) - *(int *)(iVar7 + 0x1d4) >> 6);
    gte_ldsv(r0_00);
    gte_rtir_sf0();
    gte_stlvnl(r0);
    iVar7 = iVar7 + 4;
    iVar17 = iVar17 + 4;
    iVar19 = iVar13 + 1;
    puVar16 = puVar22 + 0x80;
    iVar15 = *(int *)(puVar22 + 0x38);
    iVar9 = *(int *)(puVar22 + 0x40);
    *(int *)(param_1 + 0x80) = (iVar15 >> 6) + iVar21;
    iVar15 = (iVar15 >> 6) + iVar21 >> 0xc;
    *(int *)(param_1 + 0x88) = (iVar9 >> 6) + iVar20;
    iVar9 = (iVar9 >> 6) + iVar20 >> 0xc;
    *(int *)(puVar16 + iVar13 * 0x10 + 4) = iVar15;
    *(int *)(puVar16 + iVar13 * 0x10 + 8) = iVar9;
    psVar1 = (short *)(iVar12 + 0xb0);
    iVar12 = iVar12 + 2;
    *(int *)(puVar16 + iVar13 * 0x10 + 0x10) = (int)*psVar1;
    *(int *)(puVar22 + iVar11 + 0x50) = iVar15;
    uVar4 = *(undefined4 *)(param_1 + 0x84);
    *(int *)(puVar22 + iVar11 + 0x58) = iVar9;
    *(undefined4 *)(puVar22 + iVar11 + 0x54) = uVar4;
    param_1 = param_1 + 0xc;
    iVar11 = iVar11 + 0xc;
    iVar13 = iVar19;
  } while (iVar19 < 4);
  *(undefined4 *)(puVar22 + 0x80) = 4;
  FUN_8002dfcc(puVar16);
  iVar12 = 0;
  iVar7 = iVar14;
  iVar11 = iVar14;
  do {
    *(undefined2 *)(iVar7 + 0x374) = 0;
    iVar15 = *(int *)(puVar22 + iVar12 * 0x10 + 0x8c);
    *(int *)(iVar11 + 0xb8) = iVar15;
    sVar2 = *(short *)(puVar22 + iVar12 * 0x10 + 0x90);
    *(short *)(iVar7 + 0xb0) = sVar2;
    iVar13 = FUN_8002fa2c((int)sVar2,0);
    if ((iVar13 < iVar15) || (iVar13 = FUN_8002fa2c((int)sVar2,1), iVar15 < iVar13)) {
      *(undefined2 *)(iVar7 + 0x374) = 0xffff;
    }
    iVar11 = iVar11 + 4;
    iVar12 = iVar12 + 1;
    iVar7 = iVar7 + 2;
  } while (iVar12 < 4);
  puVar16 = puVar22 + 0x48;
  *(undefined4 *)(puVar22 + 0x48) = 4;
  FUN_8002efdc(puVar16);
  iVar11 = (int)*(short *)(iVar14 + 0x5c);
  iVar7 = iVar11;
  if (0x96 < iVar11) {
    iVar7 = 0x96;
  }
  iVar13 = 0;
  iVar12 = iVar14;
  if (iVar11 < 0x3c) {
    iVar7 = 0x3c;
  }
  do {
    iVar11 = *(int *)(puVar16 + 0xc);
    if (*(short *)(iVar14 + 0x374) != 0) {
      iVar11 = iVar11 + (int)(((&DAT_80010000)
                               [*(int *)(iVar12 + 0x80) + *(int *)(iVar12 + 0x88) >> 0x11 & 0x1ff] &
                              0x1ffff) * iVar7) / 0xe6;
    }
    *(int *)(iVar12 + 0x84) = iVar11;
    iVar14 = iVar14 + 2;
    iVar13 = iVar13 + 1;
    puVar16 = puVar16 + 0xc;
    iVar12 = iVar12 + 0xc;
  } while (iVar13 < 4);
  return;
}


