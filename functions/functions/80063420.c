/* Function: FUN_80063420 */
/* Address: 80063420 */

void FUN_80063420(int param_1,MATRIX *param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  uint uVar13;
  ushort *puVar14;
  undefined2 *puVar15;
  MATRIX *r0;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 auStack_90 [104];
  
  puVar18 = auStack_90;
  puVar12 = &DAT_800b0000;
  puVar14 = *(ushort **)(param_1 + 0x18);
  puVar15 = &DAT_800b5d40;
  g_WheelDataPtr = &PTR_DAT_800b51e4;
  gte_SetRotMatrix(param_2);
  gte_SetTransMatrix(param_2);
  puVar10 = &GTE_CTRL;
  GTE_IR1 = puVar15[4];
  ApplyWheelForce(0,*(undefined4 *)(param_1 + 0x1c),2);
  *(undefined2 *)(puVar18 + 0x54) = 0;
  *(undefined2 *)(puVar18 + 0x50) = 0;
  *(ushort *)(puVar18 + 0x52) =
       (short)((int)(short)puVar14[10] + (int)(short)puVar14[0xd] >> 1) -
       (puVar14[0x1c] + puVar14[0x1d]);
  gte_ldv0((SVECTOR *)(puVar18 + 0x50));
  gte_rtv0();
  gte_stlvnl((VECTOR *)(puVar18 + 0x24));
  *(int *)(puVar18 + 0x24) = *(int *)(puVar18 + 0x24) + param_2->t[0];
  *(int *)(puVar18 + 0x28) = *(int *)(puVar18 + 0x28) + param_2->t[1];
  *(int *)(puVar18 + 0x2c) = *(int *)(puVar18 + 0x2c) + param_2->t[2];
  gte_SetTransMatrix((MATRIX *)(puVar18 + 0x10));
  *(undefined2 *)(puVar10 + 5) = *(undefined2 *)(puVar12 + 0x5d40);
  ApplyWheelForce(0,*(undefined4 *)(param_1 + 0x1c),3);
  *(undefined2 *)(puVar10 + 5) = puVar15[1];
  ApplyWheelForce(0,*(undefined4 *)(param_1 + 0x1c),0);
  *(undefined2 *)(puVar10 + 5) = puVar15[3];
  ApplyWheelForce(0,*(undefined4 *)(param_1 + 0x1c),1);
  *(undefined2 *)(puVar18 + 0x54) = 0;
  uVar17 = (uint)(ushort)puVar15[2];
  uVar16 = uVar17;
  if ((*puVar14 & 8) != 0) {
    uVar16 = (uint)(ushort)puVar15[1];
  }
  uVar13 = 0;
  puVar11 = puVar18 + 0x58;
  puVar10 = &g_SinCosTable;
  r0 = (MATRIX *)(puVar18 + 0x30);
  do {
    uVar9 = 4;
    if ((short)uVar13 < 2) {
      uVar2 = puVar14[0x1c];
      GTE_IR1 = (undefined2)uVar16;
      *(undefined2 *)(puVar18 + 0x52) = *(undefined2 *)(puVar18 + 0x9c);
    }
    else {
      uVar2 = puVar14[0x1d];
      uVar9 = 5;
      *(undefined2 *)(puVar18 + 0x52) = 0;
      GTE_IR1 = (undefined2)uVar17;
    }
    if ((uVar13 & 1) == 0) {
      *(short *)(puVar18 + 0x50) = -(short)*(undefined4 *)(puVar18 + 0x98);
      *(ushort *)(puVar18 + 0x52) = *(ushort *)(puVar18 + 0x52) ^ 0x800;
    }
    else {
      *(undefined2 *)(puVar18 + 0x50) = *(undefined2 *)(puVar18 + 0x98);
    }
    *(undefined4 *)(puVar18 + 0x58) = puVar10[*(ushort *)(puVar18 + 0x50) & 0xfff];
    *(undefined4 *)(puVar18 + 0x5c) = puVar10[*(ushort *)(puVar18 + 0x52) & 0xfff];
    *(undefined4 *)(puVar18 + 0x60) = puVar10[*(ushort *)(puVar18 + 0x54) & 0xfff];
    iVar5 = (int)*(short *)(puVar11 + 4);
    iVar8 = (int)*(short *)(puVar11 + 10);
    iVar6 = (int)*(short *)(puVar11 + 6);
    iVar7 = (int)*(short *)(puVar11 + 8);
    iVar3 = *(short *)(puVar18 + 0x58) * iVar5 >> 6;
    *(short *)(puVar18 + 0x10) = (short)(iVar6 * iVar8 >> 0xc) + (short)(iVar3 * iVar7 >> 0x12);
    *(short *)(puVar18 + 0x12) = (short)(iVar3 * iVar8 >> 0x12) - (short)(iVar6 * iVar7 >> 0xc);
    iVar4 = (int)*(short *)(puVar11 + 2);
    iVar3 = *(short *)(puVar18 + 0x58) * iVar6 >> 6;
    *(short *)(puVar18 + 0x1a) = -*(short *)(puVar18 + 0x58);
    *(short *)(puVar18 + 0x1c) = (short)(iVar3 * iVar7 >> 0x12) - (short)(iVar5 * iVar8 >> 0xc);
    *(short *)(puVar18 + 0x1e) = (short)(iVar5 * iVar7 >> 0xc) + (short)(iVar3 * iVar8 >> 0x12);
    *(short *)(puVar18 + 0x14) = (short)(iVar4 * iVar5 >> 0xc);
    *(short *)(puVar18 + 0x16) = (short)(iVar4 * iVar7 >> 0xc);
    iVar3 = (int)(uVar13 << 0x10) >> 0xe;
    *(short *)(puVar18 + 0x18) = (short)(iVar4 * iVar8 >> 0xc);
    *(short *)(puVar18 + 0x20) = (short)(iVar4 * iVar6 >> 0xc);
    sVar1 = *(short *)((int)puVar14 + iVar3 + 0x28);
    *(int *)(puVar18 + 0x28) = (int)(short)-uVar2;
    *(int *)(puVar18 + 0x24) = (int)sVar1;
    *(int *)(puVar18 + 0x2c) = (int)*(short *)((int)puVar14 + iVar3 + 0x2a);
    gte_SetRotMatrix(param_2);
    gte_ldclmv((MATRIX *)(puVar18 + 0x10));
    gte_rtir();
    gte_stclmv(r0);
    gte_ldclmv((MATRIX *)(puVar18 + 0x12));
    gte_rtir();
    gte_stclmv((MATRIX *)(puVar18 + 0x32));
    gte_ldclmv((MATRIX *)(puVar18 + 0x14));
    gte_rtir();
    gte_stclmv((MATRIX *)(puVar18 + 0x34));
    gte_SetTransMatrix(param_2);
    gte_ldlv0((VECTOR *)(puVar18 + 0x24));
    gte_rt();
    gte_stlvnl((VECTOR *)(puVar18 + 0x44));
    gte_SetRotMatrix(r0);
    gte_SetTransMatrix(r0);
    ApplyWheelForce(0,*(undefined4 *)(param_1 + 0x1c),uVar9);
    uVar13 = uVar13 + 1;
  } while ((int)(uVar13 * 0x10000) >> 0x10 < 4);
  return;
}


