/* Function: FUN_80050800 */
/* Address: 80050800 */

void FUN_80050800(int param_1)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  MATRIX *r0;
  undefined2 uVar5;
  uint uVar6;
  short sVar7;
  undefined1 *puVar8;
  undefined1 auStack_50 [56];
  short local_18;
  short local_16;
  short local_14;
  
  puVar8 = auStack_50;
  if (-1 < **(short **)(param_1 + 0x10)) {
    local_18 = (short)(*(int *)(param_1 + 0x34) >> 0xc) - g_CarPosX;
    local_16 = (short)(*(int *)(param_1 + 0x38) >> 0xc) - g_CarPosY;
    local_14 = (short)(*(int *)(param_1 + 0x3c) >> 0xc) - g_CarPosZ;
    GTE_IR1 = **(short **)(param_1 + 0x10);
    gte_SetRotMatrix((MATRIX *)&GTE_VXY0);
    gte_ldv0((SVECTOR *)(puVar8 + 0x38));
    gte_rtv0();
    gte_stlvnl((VECTOR *)(puVar8 + 0x2c));
    uVar6 = *(ushort *)(param_1 + 0x20) + 200;
    *(short *)(param_1 + 0x20) = (short)uVar6;
    uVar6 = uVar6 & 0xfff;
    sVar2 = *(short *)((int)&g_SinCosTable + uVar6 * 4 + 2);
    *(short *)(puVar8 + 0x20) = sVar2;
    *(short *)(puVar8 + 0x18) = sVar2;
    sVar7 = -*(short *)(&g_SinCosTable + uVar6);
    *(short *)(puVar8 + 0x1a) = sVar7;
    sVar3 = *(short *)(&g_SinCosTable + uVar6);
    *(undefined2 *)(puVar8 + 0x26) = 0;
    *(undefined2 *)(puVar8 + 0x24) = 0;
    *(undefined2 *)(puVar8 + 0x22) = 0;
    *(undefined2 *)(puVar8 + 0x1c) = 0;
    *(undefined2 *)(puVar8 + 0x28) = 0x1000;
    *(short *)(puVar8 + 0x1e) = sVar3;
    iVar4 = (int)*(short *)(param_1 + 0x18);
    *(undefined2 *)(puVar8 + 0x24) = 0;
    *(undefined2 *)(puVar8 + 0x26) = 0;
    uVar5 = (undefined2)(sVar2 * iVar4 >> 0xc);
    *(undefined2 *)(puVar8 + 0x18) = uVar5;
    *(undefined2 *)(puVar8 + 0x20) = uVar5;
    *(short *)(puVar8 + 0x1e) = (short)(sVar3 * iVar4 >> 0xc);
    *(short *)(puVar8 + 0x1a) = (short)(sVar7 * iVar4 >> 0xc);
    r0 = (MATRIX *)(puVar8 + 0x18);
    gte_SetTransMatrix(r0);
    gte_SetRotMatrix(r0);
    uVar1 = *(undefined1 *)(param_1 + 0x1a);
    puVar8[0x42] = uVar1;
    puVar8[0x41] = uVar1;
    puVar8[0x40] = uVar1;
    sVar2 = *(short *)(param_1 + 0x1e);
    sVar3 = *(short *)(param_1 + 0x1c);
    *(undefined1 **)(puVar8 + 0x10) = puVar8 + 0x40;
    FUN_80058314(g_TrackConfigBuffer + 0x1cc,&DAT_800af048,(int)sVar2,(int)sVar3);
  }
  return;
}


