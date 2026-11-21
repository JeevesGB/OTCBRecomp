/* Function: InitObstacleObject */
/* Address: 80043398 */

void InitObstacleObject(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  uchar *puVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 8);
  iVar7 = (uint)*(byte *)(iVar8 + 4) * 0x20;
  *(undefined **)(param_1 + 0xc) = &g_BarrierCollisionData + iVar7;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(&g_CarCollisionBounce + iVar7);
  puVar4 = (uchar *)MemAllocTemp(0x84);
  *(uchar **)(param_1 + 0x14) = puVar4;
  bzero(puVar4,0x84);
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(&g_BarrierBounceTable + iVar7);
  **(undefined2 **)(param_1 + 0x14) = 0x1f;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(&g_BarrierFriction + iVar7);
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(&g_BarrierType + iVar7);
  CalcCarCollisionNormal(param_1,*(undefined1 *)(iVar8 + 3));
  InitCollisionResponse
            (param_1,*(undefined4 *)(&g_BarrierNormalX + iVar7),
             *(undefined4 *)(&g_BarrierNormalY + iVar7),0);
  uVar5 = 0;
  if ((*(short *)(param_1 + 0x4c) == 0) && ((g_CollisionFlag3 == 1 || (g_RaceMode == 2)))) {
    uVar5 = 2;
  }
  uVar5 = AllocCarAIData(uVar5);
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  *(int *)(param_1 + 0x2c) = iVar8 + 8;
  puVar4 = (uchar *)MemAllocTemp(0x14);
  *(uchar **)(param_1 + 0x3c) = puVar4;
  bzero(puVar4,0x14);
  *(undefined4 *)(param_1 + 0x40) = 0xc0000001;
  *(undefined2 *)(param_1 + 0x178) = 0xffff;
  *(undefined2 *)(param_1 + 0x1f0) = 0xffff;
  if ((*(ushort *)(iVar8 + 6) & 1) != 0) {
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x200000;
  }
  if ((*(ushort *)(iVar8 + 6) & 2) != 0) {
    *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x100000;
  }
  bVar1 = *(byte *)(iVar8 + 1);
  *(undefined2 *)(param_1 + 0x15a) = 0;
  *(undefined2 *)(param_1 + 0x1f6) = 3;
  *(ushort *)(param_1 + 0x48) = (ushort)bVar1;
  InitCarPhysicsData(param_1,*(undefined1 *)(iVar8 + 5));
  uVar3 = *(undefined2 *)(*(int *)(param_1 + 0x10) + 0x84);
  *(undefined2 *)(param_1 + 0x3bc) = uVar3;
  *(undefined2 *)(param_1 + 0x3be) = uVar3;
  InitCarCollisionData(param_1);
  iVar7 = *(int *)(param_1 + 0x10);
  puVar6 = *(undefined2 **)(param_1 + 0x3c);
  *(undefined2 *)(param_1 + 0x176) = 0xffff;
  puVar6[1] = 0x100;
  sVar2 = *(short *)(iVar7 + 0x66);
  *puVar6 = 0;
  puVar6[4] = 0;
  uVar3 = (undefined2)(((sVar2 + 100) * 0x100) / 100);
  puVar6[2] = uVar3;
  puVar6[3] = uVar3;
  iVar7 = (int)*(short *)(iVar7 + 0x3c);
  iVar7 = iVar7 + (iVar7 * 0x28) / 100;
  if (0x28a < iVar7) {
    iVar7 = 0x28a;
  }
  SetObstacleSpeed(param_1,iVar7);
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x10) = *(undefined4 *)(param_1 + 0x18c);
  InitCarAnimation(param_1);
  InitCarShadow(param_1);
  *(short *)(param_1 + 0x46) = *(short *)(param_1 + 0x46) + 1;
  return;
}


