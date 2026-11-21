/* Function: UpdateCarFadeIn */
/* Address: 8006f4cc */

void UpdateCarFadeIn(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4,
                    int param_5)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  short *psVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  uint local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  int local_34;
  int local_30;
  
  local_38 = param_4;
  local_34 = GetCarPositionData();
  iVar5 = GetRaceSprite2();
  iVar6 = GetRaceSprite1();
  local_30 = GetSelectedCarData();
  iVar7 = GetRaceSprite2();
  iVar8 = GetRaceSprite1();
  uVar4 = local_38;
  iVar14 = 0;
  DrawRaceSprite(iVar7,iVar7 + 8,iVar8 + 0xc,iVar8 + 0x10,param_2,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar7 + 0x10,iVar7 + 0x18,iVar8 + 0xc,iVar8 + 0x10,param_2,g_MenuAnimPtr + 4);
  iVar13 = 0x88;
  iVar7 = GetRaceSprite2();
  iVar8 = GetRaceSprite1();
  DrawRaceSprite(iVar7 + 0x20,iVar7 + 0x28,iVar8 + 0x14,iVar8 + 0x18,param_2,g_MenuAnimPtr + 4);
  pbVar9 = (byte *)GetSelectedCarData();
  psVar10 = (short *)GetCarPositionData();
  DrawSpriteEx(g_CarModelBuffer + (uint)*pbVar9 * 0x14,(int)*psVar10,(int)psVar10[1],
               g_RaceOTPtr2 + 4,0,0xffffffff,0xffffffff);
  iVar7 = 0x58;
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_30 + 1) * 0x14,
               (int)*(short *)(local_34 + 0x80),(int)*(short *)(local_34 + 0x82),g_RaceOTPtr2 + 4,0,
               0xffffffff,0xffffffff);
  DrawSpriteFlipped((int)*(short *)(local_34 + 0x7c),(int)*(short *)(local_34 + 0x7e),
                    &g_RacePaletteRegion,g_MenuAnimPtr + 4);
  local_68 = GetCarBaseColor();
  local_5f = 0;
  local_5e = 0;
  local_67 = 0;
  local_66 = 0;
  local_60 = local_68;
  CalcFadeValue(&local_68,param_5,4,0x4e);
  do {
    if (iVar14 == param_5) {
      iVar8 = iVar6 + 0x1c;
      iVar12 = iVar6 + 0x20;
    }
    else {
      iVar8 = iVar6 + 0x2c;
      iVar12 = iVar6 + 0x30;
    }
    DrawRaceSprite(iVar5 + iVar7,iVar5 + iVar13,iVar8,iVar12,uVar4,g_MenuAnimPtr + 4);
    iVar13 = iVar13 + 8;
    iVar14 = iVar14 + 1;
    iVar7 = iVar7 + 8;
  } while (iVar14 != 4);
  local_58[0] = local_38;
  local_58[1] = local_38;
  local_58[2] = local_38;
  local_58[3] = local_38;
  iVar5 = GetRaceSprite2();
  iVar6 = GetRaceSprite1();
  iVar8 = 0;
  iVar14 = 0xe8;
  iVar13 = 0xb8;
  iVar7 = iVar5 + 0xb8;
  do {
    iVar12 = iVar5 + iVar14;
    iVar14 = iVar14 + 8;
    iVar13 = iVar13 + 8;
    puVar11 = local_58 + iVar8;
    iVar8 = iVar8 + 1;
    DrawRaceSpriteEx(iVar7,iVar12,iVar6 + 0xc4,iVar6 + 0xd4,*puVar11,g_MenuAnimPtr + 4);
    iVar12 = local_34;
    iVar7 = iVar5 + iVar13;
  } while (iVar8 != 4);
  iVar5 = 0;
  local_50._0_4_ = *(uint *)(local_30 + 7);
  pbVar9 = local_50;
  local_48 = local_50._0_4_;
  puVar11 = local_50 + 3;
  uVar3 = (uint)puVar11 & 3;
  *(uint *)(puVar11 + -uVar3) =
       *(uint *)(puVar11 + -uVar3) & -1 << (uVar3 + 1) * 8 | (uint)local_50._0_4_ >> (3 - uVar3) * 8
  ;
  do {
    iVar6 = IsCarUnlocked(iVar5);
    if (iVar6 == 0) {
      GetMenuItemColor(&local_40,&local_3c,g_RaceColorCycle,param_5 == iVar5);
      sVar1 = *(short *)(iVar12 + 4);
      sVar2 = *(short *)(iVar12 + 6);
      uVar15 = 1;
      iVar6 = g_CarModelBuffer + (uint)*pbVar9 * 0x14;
    }
    else {
      GetMenuItemColor(&local_40,&local_3c,g_RaceColorCycle,param_5 == iVar5);
      sVar1 = *(short *)(iVar12 + 4);
      sVar2 = *(short *)(iVar12 + 6);
      iVar6 = g_CarModelBuffer + (uint)*pbVar9 * 0x14;
      uVar15 = local_40;
    }
    DrawSpriteEx(iVar6,(int)sVar1,(int)sVar2,g_RaceOTPtr2 + 4,uVar15,0xffffffff,local_3c);
    iVar12 = iVar12 + 4;
    iVar5 = iVar5 + 1;
    pbVar9 = pbVar9 + 1;
  } while (iVar5 != 4);
  return;
}


