/* Function: FUN_8004ebf8 */
/* Address: 8004ebf8 */

void FUN_8004ebf8(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  VECTOR *r0;
  int iVar3;
  MATRIX *r0_00;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 auStack_70 [80];
  short local_20;
  short local_1e;
  short local_1c;
  
  puVar10 = auStack_70;
  uVar9 = (uint)*(ushort *)(param_1 + 0x24);
  local_20 = *(short *)(param_1 + 0x18) - g_CarPosX;
  local_1e = *(short *)(param_1 + 0x1c) - g_CarPosY;
  local_1c = *(short *)(param_1 + 0x20) - g_CarPosZ;
  gte_SetRotMatrix((MATRIX *)&GTE_VXY0);
  gte_ldv0((SVECTOR *)(puVar10 + 0x50));
  gte_rtv0();
  r0 = (VECTOR *)(puVar10 + 0x38);
  gte_stlvnl(r0);
  gte_SetTransVector(r0);
  iVar6 = 0;
  puVar10[0x4a] = 100;
  iVar8 = uVar9 + 100;
  iVar7 = (uint)*(ushort *)(param_1 + 0xe) << 4;
  iVar3 = 0;
  do {
    iVar3 = (iVar7 - iVar3) * 0x10000 >> 0x10;
    if (2 < iVar3) {
      *(undefined4 *)(puVar10 + 0x18) = g_MatrixScaleZ;
      *(undefined4 *)(puVar10 + 0x1c) = g_MatrixRotXZ;
      *(undefined4 *)(puVar10 + 0x20) = g_MatrixScaleY;
      *(undefined4 *)(puVar10 + 0x24) = g_MatrixRotXY;
      *(undefined2 *)(puVar10 + 0x28) = g_MatrixScaleX;
      *(short *)(puVar10 + 0x18) = (short)(*(short *)(puVar10 + 0x18) * iVar3 >> 0xc);
      *(short *)(puVar10 + 0x1e) = (short)(*(short *)(puVar10 + 0x1e) * iVar3 >> 0xc);
      *(short *)(puVar10 + 0x24) = (short)(*(short *)(puVar10 + 0x24) * iVar3 >> 0xc);
      *(short *)(puVar10 + 0x1a) = (short)(*(short *)(puVar10 + 0x1a) * iVar3 >> 0xc);
      *(short *)(puVar10 + 0x20) = (short)(*(short *)(puVar10 + 0x20) * iVar3 >> 0xc);
      *(short *)(puVar10 + 0x26) = (short)(*(short *)(puVar10 + 0x26) * iVar3 >> 0xc);
      gte_SetRotMatrix((MATRIX *)(puVar10 + 0x18));
      puVar10[0x48] = (char)iVar8 + (char)iVar6 * '\x14';
      puVar10[0x49] = (char)iVar6 + 'd';
      *(undefined1 **)(puVar10 + 0x10) = puVar10 + 0x48;
      FUN_80058314(g_TrackConfigBuffer + 0x1cc,&DAT_800aefac,0,1);
    }
    iVar6 = iVar6 + 1;
    iVar3 = iVar6 * 4;
  } while (iVar6 * 0x10000 >> 0x10 < 3);
  uVar4 = (uint)*(ushort *)(param_1 + 0xe);
  puVar5 = puVar10 + 0x48;
  uVar9 = *(uint *)((uVar9 & 7) * 4 + -0x7ff50ff8);
  puVar1 = puVar10 + 0x4b;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uVar9 >> (3 - uVar2) * 8;
  puVar1 = puVar10 + 0x48;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & 0xffffffffU >> (4 - uVar2) * 8 | uVar9 << uVar2 * 8;
  gte_SetRotMatrix((MATRIX *)&GTE_VXY0);
  gte_ldclmv(*(MATRIX **)(param_1 + 8));
  gte_rtir();
  r0_00 = (MATRIX *)(puVar10 + 0x18);
  gte_stclmv(r0_00);
  gte_ldclmv((MATRIX *)(*(int *)(param_1 + 8) + 2));
  gte_rtir();
  gte_stclmv((MATRIX *)(puVar10 + 0x1a));
  gte_ldclmv((MATRIX *)(*(int *)(param_1 + 8) + 4));
  gte_rtir();
  gte_stclmv((MATRIX *)(puVar10 + 0x1c));
  iVar3 = (int)(uVar4 << 0x16) >> 0x10;
  *(short *)(puVar10 + 0x18) = (short)(*(short *)(puVar10 + 0x18) * iVar3 >> 0xc);
  *(short *)(puVar10 + 0x1e) = (short)(*(short *)(puVar10 + 0x1e) * iVar3 >> 0xc);
  *(short *)(puVar10 + 0x24) = (short)(*(short *)(puVar10 + 0x24) * iVar3 >> 0xc);
  *(short *)(puVar10 + 0x1c) = (short)(*(short *)(puVar10 + 0x1c) * iVar3 >> 0xc);
  *(short *)(puVar10 + 0x22) = (short)(*(short *)(puVar10 + 0x22) * iVar3 >> 0xc);
  *(short *)(puVar10 + 0x28) = (short)(*(short *)(puVar10 + 0x28) * iVar3 >> 0xc);
  gte_SetRotMatrix(r0_00);
  *(undefined1 **)(puVar10 + 0x10) = puVar5;
  FUN_80058314(g_TrackConfigBuffer + 0x1cc,&DAT_800aefcc,0,1);
  return;
}


