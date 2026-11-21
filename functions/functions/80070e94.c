/* Function: FUN_80070e94 */
/* Address: 80070e94 */

void FUN_80070e94(void)

{
  undefined1 *puVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int in_a3;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_38 [8];
  uint local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar5 = GetCarPositionData();
  iVar6 = GetSelectedCarData();
  local_48 = GetCarBaseColor();
  local_3f = 0;
  local_3e = 0;
  local_47 = 0;
  local_46 = 0;
  local_40 = local_48;
  FUN_8006ee80(&local_48,in_a3,4,0x4e);
  iVar8 = 0;
  local_38._0_4_ = *(uint *)(iVar6 + 7);
  pbVar7 = local_38;
  local_30 = local_38._0_4_;
  puVar1 = local_38 + 3;
  uVar4 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar4) =
       *(uint *)(puVar1 + -uVar4) & -1 << (uVar4 + 1) * 8 | (uint)local_38._0_4_ >> (3 - uVar4) * 8;
  do {
    iVar6 = IsCarUnlocked(iVar8);
    if (iVar6 == 0) {
      GetMenuItemColor(&local_28,&local_24,g_RaceColorCycle,in_a3 == iVar8);
      sVar2 = *(short *)(iVar5 + 0x15c);
      sVar3 = *(short *)(iVar5 + 0x15e);
      uVar9 = 1;
      iVar6 = g_CarModelBuffer + (uint)*pbVar7 * 0x14;
    }
    else {
      GetMenuItemColor(&local_28,&local_24,g_RaceColorCycle,in_a3 == iVar8);
      sVar2 = *(short *)(iVar5 + 0x15c);
      sVar3 = *(short *)(iVar5 + 0x15e);
      iVar6 = g_CarModelBuffer + (uint)*pbVar7 * 0x14;
      uVar9 = local_28;
    }
    DrawSpriteEx(iVar6,(int)sVar2,(int)sVar3,g_RaceOTPtr2 + 4,uVar9,0xffffffff,local_24);
    iVar5 = iVar5 + 4;
    iVar8 = iVar8 + 1;
    pbVar7 = pbVar7 + 1;
  } while (iVar8 != 4);
  return;
}


