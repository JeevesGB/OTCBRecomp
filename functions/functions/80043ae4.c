/* Function: ResolveCarCollision */
/* Address: 80043ae4 */

void ResolveCarCollision(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uchar *puVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 8);
  iVar6 = (uint)*(byte *)(iVar7 + 4) * 0x20;
  *(undefined **)(param_1 + 0xc) = &g_BarrierCollisionData + iVar6;
  iVar3 = MemAllocTemp(0x84);
  *(int *)(param_1 + 0x14) = iVar3;
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(&g_BarrierBounceTable + iVar6);
  **(undefined2 **)(param_1 + 0x14) = 0x1f;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(&g_CarCollisionBounce + iVar6);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(&g_BarrierFriction + iVar6);
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(&g_BarrierType + iVar6);
  CalcCarCollisionNormal(param_1,*(undefined1 *)(iVar7 + 3));
  InitCollisionResponse
            (param_1,*(undefined4 *)(&g_BarrierNormalX + iVar6),
             *(undefined4 *)(&g_BarrierNormalY + iVar6),0);
  puVar4 = (uchar *)MemAllocTemp(0xc);
  *(uchar **)(param_1 + 0x3c) = puVar4;
  bzero(puVar4,0xc);
  **(ushort **)(param_1 + 0x3c) = (ushort)*(byte *)(iVar7 + 5);
  sVar2 = *(short *)(*(int *)(param_1 + 0x10) + 2);
  if (sVar2 < 6000) {
    uVar5 = 4000;
    if ((sVar2 < 4000) && (uVar5 = 0x1964, 0x5db < sVar2)) {
      uVar5 = 5000;
    }
  }
  else {
    uVar5 = 3000;
  }
  *(undefined2 *)(*(int *)(param_1 + 0x3c) + 10) = uVar5;
  *(undefined4 *)(param_1 + 0x40) = 0;
  bVar1 = *(byte *)(iVar7 + 1);
  *(undefined2 *)(param_1 + 0x15a) = 0;
  *(undefined2 *)(param_1 + 0x1f6) = 3;
  *(ushort *)(param_1 + 0x48) = (ushort)bVar1;
  return;
}


