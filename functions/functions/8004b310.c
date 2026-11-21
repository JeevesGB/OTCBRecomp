/* Function: FUN_8004b310 */
/* Address: 8004b310 */

void FUN_8004b310(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  MATRIX *pMVar10;
  MATRIX local_48;
  undefined2 local_28;
  undefined2 local_26;
  short local_24;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  pMVar10 = &local_48;
  uVar1 = (&g_SinCosTable)[*(int *)(param_1 + 0x188) >> 0xc & 0xfff];
  uVar2 = (&g_SinCosTable)[*(int *)(param_1 + 0x18c) >> 0xc & 0xfff];
  uVar3 = (&g_SinCosTable)[*(int *)(param_1 + 400) >> 0xc & 0xfff];
  local_c._0_2_ = (short)uVar2;
  local_10._0_2_ = (short)uVar1;
  iVar6 = (int)(short)local_c;
  local_c._2_2_ = (short)((uint)uVar2 >> 0x10);
  local_8._2_2_ = (short)((uint)uVar3 >> 0x10);
  iVar9 = (int)local_8._2_2_;
  iVar7 = (int)local_c._2_2_;
  local_8._0_2_ = (short)uVar3;
  iVar8 = (int)(short)local_8;
  iVar4 = (short)local_10 * iVar6 >> 6;
  local_48.m[0][0] = (short)(iVar7 * iVar9 >> 0xc) + (short)(iVar4 * iVar8 >> 0x12);
  local_48.m[0][1] = (short)(iVar4 * iVar9 >> 0x12) - (short)(iVar7 * iVar8 >> 0xc);
  local_10._2_2_ = (short)((uint)uVar1 >> 0x10);
  iVar5 = (int)local_10._2_2_;
  iVar4 = (short)local_10 * iVar7 >> 6;
  local_26 = 0;
  local_28 = 0;
  local_48.m[1][2] = -(short)local_10;
  local_48.m[2][0] = (short)(iVar4 * iVar8 >> 0x12) - (short)(iVar6 * iVar9 >> 0xc);
  local_48.m[2][1] = (short)(iVar6 * iVar8 >> 0xc) + (short)(iVar4 * iVar9 >> 0x12);
  local_48.m[0][2] = (short)(iVar5 * iVar6 >> 0xc);
  local_48.m[1][0] = (short)(iVar5 * iVar8 >> 0xc);
  local_48.m[1][1] = (short)(iVar5 * iVar9 >> 0xc);
  local_48.m[2][2] = (short)(iVar5 * iVar7 >> 0xc);
  local_24 = -*(short *)(param_1 + 0x16e);
  local_10 = uVar1;
  local_c = uVar2;
  local_8 = uVar3;
  gte_SetRotMatrix(&local_48);
  gte_ldsv((SVECTOR *)((int)pMVar10 + 0x20));
  gte_rtir_sf0();
  gte_stlvnl((VECTOR *)((int)pMVar10 + 0x28));
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x74) + *(int *)((int)pMVar10 + 0x28);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x78) + *(int *)((int)pMVar10 + 0x2c);
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x7c) + *(int *)((int)pMVar10 + 0x30);
  return;
}


