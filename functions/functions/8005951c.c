/* Function: FUN_8005951c */
/* Address: 8005951c */

void FUN_8005951c(ushort *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  VECTOR *r0;
  int iVar5;
  SVECTOR *r0_00;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  int iVar11;
  ushort uVar12;
  int iVar13;
  ushort uVar14;
  int iVar15;
  MATRIX *pMVar16;
  MATRIX local_50;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  pMVar16 = &local_50;
  iVar11 = *param_2;
  iVar13 = param_2[1];
  iVar15 = param_2[2];
  uVar1 = (&g_SinCosTable)[*param_1 & 0xfff];
  uVar2 = (&g_SinCosTable)[param_1[1] & 0xfff];
  uVar3 = (&g_SinCosTable)[param_1[2] & 0xfff];
  local_14._0_2_ = (short)uVar2;
  local_18._0_2_ = (short)uVar1;
  iVar6 = (int)(short)local_14;
  local_14._2_2_ = (short)((uint)uVar2 >> 0x10);
  local_10._2_2_ = (short)((uint)uVar3 >> 0x10);
  iVar9 = (int)local_10._2_2_;
  iVar7 = (int)local_14._2_2_;
  local_10._0_2_ = (short)uVar3;
  iVar8 = (int)(short)local_10;
  iVar4 = (short)local_18 * iVar6 >> 6;
  local_50.m[0][0] = (short)(iVar7 * iVar9 >> 0xc) + (short)(iVar4 * iVar8 >> 0x12);
  local_50.m[0][1] = (short)(iVar4 * iVar9 >> 0x12) - (short)(iVar7 * iVar8 >> 0xc);
  local_18._2_2_ = (short)((uint)uVar1 >> 0x10);
  iVar5 = (int)local_18._2_2_;
  iVar4 = (short)local_18 * iVar7 >> 6;
  local_50.m[1][2] = -(short)local_18;
  local_50.m[2][0] = (short)(iVar4 * iVar8 >> 0x12) - (short)(iVar6 * iVar9 >> 0xc);
  local_50.m[2][1] = (short)(iVar6 * iVar8 >> 0xc) + (short)(iVar4 * iVar9 >> 0x12);
  local_50.m[0][2] = (short)(iVar5 * iVar6 >> 0xc);
  local_50.m[1][0] = (short)(iVar5 * iVar8 >> 0xc);
  local_50.m[1][1] = (short)(iVar5 * iVar9 >> 0xc);
  local_50.m[2][2] = (short)(iVar5 * iVar7 >> 0xc);
  local_18 = uVar1;
  local_14 = uVar2;
  local_10 = uVar3;
  gte_SetRotMatrix(&local_50);
  *(short *)((int)pMVar16 + 0x20) = (short)(iVar11 >> 0xf);
  *(short *)((int)pMVar16 + 0x22) = (short)(iVar13 >> 0xf);
  r0_00 = (SVECTOR *)((int)pMVar16 + 0x20);
  *(short *)((int)pMVar16 + 0x24) = (short)(iVar15 >> 0xf);
  gte_ldsv(r0_00);
  uVar14 = (ushort)iVar15;
  uVar12 = (ushort)iVar13;
  uVar10 = (ushort)iVar11;
  gte_rtir_sf0();
  r0 = (VECTOR *)((int)pMVar16 + 0x28);
  gte_stlvnl(r0);
  *param_2 = *(int *)((int)pMVar16 + 0x28) << 3;
  param_2[1] = *(int *)((int)pMVar16 + 0x2c) << 3;
  param_2[2] = *(int *)((int)pMVar16 + 0x30) << 3;
  *(ushort *)((int)pMVar16 + 0x20) = uVar10 & 0x7fff;
  *(ushort *)((int)pMVar16 + 0x22) = uVar12 & 0x7fff;
  *(ushort *)((int)pMVar16 + 0x24) = uVar14 & 0x7fff;
  gte_ldsv(r0_00);
  gte_rtir_sf0();
  gte_stlvnl(r0);
  *param_2 = *param_2 + (*(int *)((int)pMVar16 + 0x28) >> 0xc);
  param_2[1] = param_2[1] + (*(int *)((int)pMVar16 + 0x2c) >> 0xc);
  param_2[2] = param_2[2] + (*(int *)((int)pMVar16 + 0x30) >> 0xc);
  return;
}


