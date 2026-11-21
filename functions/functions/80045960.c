/* Function: FUN_80045960 */
/* Address: 80045960 */

void FUN_80045960(int param_1)

{
  int iVar1;
  uchar *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar6 = g_TrackGeomFlag2 * 0x20;
  puVar7 = (undefined4 *)(&g_BarrierCollisionData + iVar6);
  iVar1 = (uint)*(byte *)(param_1 + 4) * 0x20;
  uVar3 = *(undefined4 *)(&g_CarCollisionBounce + iVar1);
  uVar4 = *(undefined4 *)(&g_BarrierBounceTable + iVar1);
  uVar5 = *(undefined4 *)(&DAT_800cccdc + iVar1);
  *puVar7 = *(undefined4 *)(&g_BarrierCollisionData + iVar1);
  *(undefined4 *)(&g_CarCollisionBounce + iVar6) = uVar3;
  *(undefined4 *)(&g_BarrierBounceTable + iVar6) = uVar4;
  *(undefined4 *)(&DAT_800cccdc + iVar6) = uVar5;
  uVar3 = *(undefined4 *)(&g_BarrierNormalX + iVar1);
  uVar4 = *(undefined4 *)(&g_BarrierNormalY + iVar1);
  uVar5 = *(undefined4 *)(&g_BarrierFriction + iVar1);
  *(undefined4 *)(&DAT_800ccce0 + iVar6) = *(undefined4 *)(&DAT_800ccce0 + iVar1);
  *(undefined4 *)(&g_BarrierNormalX + iVar6) = uVar3;
  *(undefined4 *)(&g_BarrierNormalY + iVar6) = uVar4;
  *(undefined4 *)(&g_BarrierFriction + iVar6) = uVar5;
  *(char *)(param_1 + 4) = (char)g_TrackGeomFlag2;
  g_TrackGeomFlag2 = g_TrackGeomFlag2 + 1;
  FUN_800452b4((int)*(short *)(&g_BarrierType + iVar6),g_TrackGeomFlag1);
  FUN_80045390(puVar7);
  iVar1 = *(int *)(*(int *)(&DAT_800cccdc + iVar6) + 0x14) + 0xc4;
  puVar2 = (uchar *)MemAlloc(iVar1);
  memcpy(puVar2,*(uchar **)(&DAT_800cccdc + iVar6),iVar1);
  *(uchar **)(&DAT_800cccdc + iVar6) = puVar2;
  iVar1 = **(int **)(&DAT_800ccce0 + iVar6) * 0x20 + 4;
  puVar2 = (uchar *)MemAlloc(iVar1);
  memcpy(puVar2,*(uchar **)(&DAT_800ccce0 + iVar6),iVar1);
  *(uchar **)(&DAT_800ccce0 + iVar6) = puVar2;
  FUN_80045848(puVar7);
  *(undefined4 *)(&g_BarrierFriction + iVar6) = 0;
  *(short *)(&g_BarrierType + iVar6) = (short)g_TrackGeomFlag1;
  g_TrackGeomFlag1 = g_TrackGeomFlag1 + 1;
  return;
}


