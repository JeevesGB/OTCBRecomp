/* Function: InitCarObject */
/* Address: 800416dc */

void InitCarObject(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  uchar *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  *(undefined2 *)(param_1 + 0x178) = 0xffff;
  *(undefined2 *)(param_1 + 0x1f0) = 0xffff;
  iVar8 = *(int *)(param_1 + 8);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x40000001;
  iVar4 = (uint)*(byte *)(iVar8 + 4) * 0x20;
  *(undefined **)(param_1 + 0xc) = &g_BarrierCollisionData + iVar4;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(&g_CarCollisionBounce + iVar4);
  puVar3 = (uchar *)MemAllocTemp(0x84);
  *(uchar **)(param_1 + 0x14) = puVar3;
  bzero(puVar3,0x84);
  uVar2 = 0x1f;
  if (*(short *)(param_1 + 0x44) == 0) {
    puVar5 = *(undefined2 **)(param_1 + 0x14);
    uVar2 = 0x1b;
  }
  else {
    puVar5 = *(undefined2 **)(param_1 + 0x14);
  }
  *puVar5 = uVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(&g_BarrierBounceTable + iVar4);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(&g_BarrierFriction + iVar4);
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(&g_BarrierType + iVar4);
  CalcCarCollisionNormal(param_1,*(undefined1 *)(iVar8 + 3));
  InitCollisionResponse
            (param_1,*(undefined4 *)(&g_BarrierNormalX + iVar4),
             *(undefined4 *)(&g_BarrierNormalY + iVar4),(int)*(short *)(iVar8 + 0x28));
  uVar6 = 3;
  if (*(short *)(param_1 + 0x44) == 0) {
    uVar6 = 2;
  }
  uVar6 = AllocCarAIData(uVar6);
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  iVar4 = (int)*(short *)(param_1 + 0x4c);
  if (*(short *)(param_1 + 0x44) == 0) {
LAB_8004181c:
    puVar5 = &g_CarRenderDataB;
  }
  else {
    if (g_RaceComplete == 0) {
      if (iVar4 == 0) {
        puVar5 = (undefined2 *)&g_CarRenderDataA;
        iVar7 = 0;
      }
      else {
        puVar5 = &g_CarRenderDataB;
        iVar7 = iVar4;
      }
      uVar6 = AllocCarRenderData(iVar7,puVar5);
      *(undefined4 *)(param_1 + 0x28) = uVar6;
      *(ushort *)(*(int *)(param_1 + 0x28) + 0x3c) = (ushort)(byte)(&g_SavedCarColor3)[iVar4];
      InitCarRenderData(*(undefined4 *)(param_1 + 0x28),iVar4);
      goto LAB_80041888;
    }
    if (iVar4 != 0) goto LAB_8004181c;
    puVar5 = (undefined2 *)&g_CarRenderDataA;
  }
  uVar6 = AllocCarRenderData(0xffffffff,puVar5);
  *(undefined4 *)(param_1 + 0x28) = uVar6;
LAB_80041888:
  *(int *)(param_1 + 0x2c) = iVar8 + 8;
  puVar3 = (uchar *)MemAllocTemp(0x1c);
  *(uchar **)(param_1 + 0x3c) = puVar3;
  bzero(puVar3,0x1c);
  if (*(short *)(param_1 + 0x44) != 0) {
    uVar2 = GetSoundHandle(5);
    *(undefined2 *)(*(int *)(param_1 + 0x3c) + 6) = uVar2;
    uVar2 = GetSoundHandle(1);
    *(undefined2 *)(*(int *)(param_1 + 0x3c) + 2) = uVar2;
    uVar2 = GetSoundHandle(4);
    *(undefined2 *)(*(int *)(param_1 + 0x3c) + 4) = uVar2;
    **(undefined2 **)(param_1 + 0x3c) = 0;
  }
  bVar1 = *(byte *)(iVar8 + 1);
  *(undefined2 *)(param_1 + 0x15a) = 0;
  *(ushort *)(param_1 + 0x48) = (ushort)bVar1;
  uVar2 = 3;
  if ((*(ushort *)(iVar8 + 6) & 1) == 0) {
    uVar2 = 2;
  }
  *(undefined2 *)(param_1 + 0x1f6) = uVar2;
  InitCarPhysicsData(param_1,*(undefined1 *)(iVar8 + 5));
  if (g_RaceFlag == 0) {
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x10) + 0x84);
    *(undefined2 *)(param_1 + 0x3be) = 0x100;
    *(undefined2 *)(param_1 + 0x3bc) = uVar2;
    *(undefined2 *)(param_1 + 0x3bc) = 0x100;
  }
  else {
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x10) + 0x86);
    *(undefined2 *)(param_1 + 0x3bc) = uVar2;
    *(undefined2 *)(param_1 + 0x3be) = uVar2;
  }
  InitCarCollisionData(param_1);
  InitCarHUD(15000);
  if ((*(short *)(param_1 + 0x44) == 1) && (*(short *)(param_1 + 0x4c) == 0)) {
    InitCarAI((int)*(short *)(param_1 + 0x1fa));
  }
  InitCarAnimation(param_1);
  InitCarShadow(param_1);
  *(short *)(param_1 + 0x46) = *(short *)(param_1 + 0x46) + 1;
  uVar6 = InitCarCamera(param_1);
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  return;
}


