/* Function: CalcCarCollisionNormal */
/* Address: 8003ea00 */

void CalcCarCollisionNormal(int param_1,undefined4 param_2)

{
  short *psVar1;
  short sVar2;
  RECT *rect;
  uint *puVar3;
  u_long *p;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  
  puVar5 = *(uint **)(*(int *)(param_1 + 0xc) + 0x10);
  uVar6 = *puVar5;
  iVar7 = uVar6 * 0x20;
  puVar3 = (uint *)MemAllocTemp(iVar7 + 0x88);
  *(uint **)(param_1 + 0x1c) = puVar3;
  puVar3[1] = uVar6;
  uVar6 = *(uint *)(*(int *)(param_1 + 0xc) + 0xc);
  puVar3[4] = (uint)(puVar5 + 1);
  puVar3[5] = (uint)(puVar3 + 10);
  puVar3[2] = uVar6;
  puVar3[6] = uVar6 + *(int *)(uVar6 + 4);
  puVar3[7] = uVar6 + *(int *)(uVar6 + 8);
  puVar3[3] = uVar6 + *(int *)(uVar6 + 0xc);
  iVar4 = *(int *)(uVar6 + 0x10);
  puVar3[8] = puVar3[5] + iVar7;
  puVar3[9] = uVar6 + iVar4;
  FUN_8003ddc0(puVar3,param_2);
  rect = g_VRAMRectPtr;
  sVar2 = *(short *)(&DAT_800ae9ec + *(short *)(param_1 + 0x4a) * 2);
  g_VRAMRectPtr->y = 0x100;
  g_VRAMRectPtr->w = 0x10;
  g_VRAMRectPtr->x = sVar2;
  psVar1 = &g_VRAMRectPtr->h;
  g_VRAMRectPtr = g_VRAMRectPtr + 1;
  *psVar1 = (short)puVar3[1];
  if ((*puVar3 & 2) == 0) {
    p = (u_long *)puVar3[4];
  }
  else {
    p = (u_long *)puVar3[5];
  }
  LoadImage(rect,p);
  return;
}


