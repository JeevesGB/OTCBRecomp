/* Function: ResolveBarrierCollision */
/* Address: 80043980 */

void ResolveBarrierCollision(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uchar *puVar4;
  int iVar5;
  undefined2 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 8);
  g_CollisionResponseCount = g_CollisionResponseCount + 1;
  iVar8 = (uint)*(byte *)(iVar9 + 2) * 0x20;
  *(undefined **)(param_1 + 0xc) = &g_BarrierCollisionData + iVar8;
  iVar3 = MemAllocTemp(0x84);
  iVar5 = (int)g_CollisionResponseCount;
  *(int *)(param_1 + 0x14) = iVar3;
  piVar7 = (int *)(*(int *)(&g_BarrierBounceTable + iVar8) +
                  *(int *)(iVar5 * 4 + *(int *)(&g_BarrierBounceTable + iVar8)));
  *(int *)(iVar3 + 4) = (int)piVar7 + piVar7[1];
  **(undefined2 **)(param_1 + 0x14) = 0x1f;
  *(int *)(param_1 + 0x10) = (int)piVar7 + *piVar7;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(&g_BarrierFriction + iVar8);
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(&g_BarrierType + iVar8);
  InitCollisionResponse
            (param_1,*(undefined4 *)(&g_BarrierNormalX + iVar8),
             *(undefined4 *)(&g_BarrierNormalY + iVar8),0);
  puVar4 = (uchar *)MemAllocTemp(0xc);
  *(uchar **)(param_1 + 0x3c) = puVar4;
  bzero(puVar4,0xc);
  **(undefined2 **)(param_1 + 0x3c) = 0x50;
  sVar2 = *(short *)(*(int *)(param_1 + 0x10) + 2);
  if (sVar2 < 6000) {
    uVar6 = 4000;
    if ((sVar2 < 4000) && (uVar6 = 0x1964, 0x5db < sVar2)) {
      uVar6 = 5000;
    }
  }
  else {
    uVar6 = 3000;
  }
  *(undefined2 *)(*(int *)(param_1 + 0x3c) + 10) = uVar6;
  *(undefined4 *)(param_1 + 0x40) = 0;
  bVar1 = *(byte *)(iVar9 + 1);
  *(undefined2 *)(param_1 + 0x15a) = 0;
  *(undefined2 *)(param_1 + 0x1f6) = 3;
  *(ushort *)(param_1 + 0x48) = (ushort)bVar1;
  return;
}


