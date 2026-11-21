/* Function: FUN_80070be8 */
/* Address: 80070be8 */

void FUN_80070be8(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  short *psVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_40 [8];
  uint local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar5 = GetCarPositionData();
  iVar6 = GetSelectedCarData();
  iVar7 = GetRaceSprite2();
  iVar8 = GetRaceSprite1();
  DrawRaceSprite(iVar7,iVar7 + 8,iVar8 + 0xc,iVar8 + 0x10,param_2,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar7 + 0x10,iVar7 + 0x18,iVar8 + 0xc,iVar8 + 0x10,param_2,g_MenuAnimPtr + 4);
  pbVar9 = (byte *)GetSelectedCarData();
  psVar10 = (short *)GetCarPositionData();
  DrawSpriteEx(g_CarModelBuffer + (uint)*pbVar9 * 0x14,(int)*psVar10,(int)psVar10[1],
               g_RaceOTPtr2 + 4,0,0xffffffff,0xffffffff);
  iVar11 = 0;
  iVar7 = GetRaceSprite2();
  iVar8 = GetRaceSprite1();
  DrawRaceSprite(iVar7 + 0x30,iVar7 + 0x38,iVar8 + 0xc,iVar8 + 0x10,param_2,g_RaceOTPtr2 + 4);
  local_50 = GetCarBaseColor();
  local_47 = 0;
  local_46 = 0;
  local_4f = 0;
  local_4e = 0;
  local_48 = local_50;
  FUN_8006ebc4(&local_50,param_4,4,0x4e);
  local_40._0_4_ = *(uint *)(iVar6 + 7);
  pbVar9 = local_40;
  local_38 = local_40._0_4_;
  puVar1 = local_40 + 3;
  uVar4 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar4) =
       *(uint *)(puVar1 + -uVar4) & -1 << (uVar4 + 1) * 8 | (uint)local_40._0_4_ >> (3 - uVar4) * 8;
  do {
    iVar6 = IsCarUnlocked(iVar11);
    if (iVar6 == 0) {
      GetMenuItemColor(&local_30,&local_2c,g_RaceColorCycle,param_4 == iVar11);
      sVar2 = *(short *)(iVar5 + 0x14c);
      sVar3 = *(short *)(iVar5 + 0x14e);
      uVar12 = 1;
      iVar6 = g_CarModelBuffer + (uint)*pbVar9 * 0x14;
    }
    else {
      GetMenuItemColor(&local_30,&local_2c,g_RaceColorCycle,param_4 == iVar11);
      sVar2 = *(short *)(iVar5 + 0x14c);
      sVar3 = *(short *)(iVar5 + 0x14e);
      iVar6 = g_CarModelBuffer + (uint)*pbVar9 * 0x14;
      uVar12 = local_30;
    }
    DrawSpriteEx(iVar6,(int)sVar2,(int)sVar3,g_RaceOTPtr2 + 4,uVar12,0xffffffff,local_2c);
    iVar5 = iVar5 + 4;
    iVar11 = iVar11 + 1;
    pbVar9 = pbVar9 + 1;
  } while (iVar11 != 4);
  return;
}


