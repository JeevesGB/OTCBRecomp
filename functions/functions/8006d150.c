/* Function: FUN_8006d150 */
/* Address: 8006d150 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006d150(undefined1 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_48;
  undefined4 local_44;
  byte *local_40;
  int local_3c;
  int local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  
  iVar1 = GetReplaySpritePositions();
  iVar2 = GetRaceSprite1();
  iVar3 = FUN_80067160();
  local_40 = (byte *)FUN_80067374();
  iVar4 = GetCarReplayData();
  local_3c = GetRaceTypePtr();
  FUN_8006cee8(param_1,*(undefined1 *)(iVar4 + 10),*(undefined1 *)(iVar4 + 0xb),
               *(undefined1 *)(iVar4 + 0xc));
  iVar4 = iVar2 + 0xc;
  local_38 = iVar2 + 0x10;
  DrawRaceSprite(iVar3,iVar3 + 8,iVar4,local_38,_DAT_800c3908,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x10,iVar3 + 0x18,iVar4,local_38,_DAT_800c3908,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x20,iVar3 + 0x28,iVar4,local_38,_DAT_800c3908,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x30,iVar3 + 0x38,iVar4,local_38,_DAT_800c3908,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x40,iVar3 + 0x48,iVar2 + 0x14,iVar2 + 0x18,_DAT_800c3908,g_MenuAnimPtr + 4
                );
  DrawSpriteEx(g_CarModelBuffer + (uint)*local_40 * 0x14,(int)*(short *)(iVar1 + 0x18),
               (int)*(short *)(iVar1 + 0x1a),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)local_40[*(byte *)(local_3c + 2) + 0x12] * 0x14,
               (int)*(short *)(iVar1 + 0x48),(int)*(short *)(iVar1 + 0x4a),g_MenuAnimPtr + 4,0,
               0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)local_40[0x2a] * 0x14,(int)*(short *)(iVar1 + 0x4c),
               (int)*(short *)(iVar1 + 0x4e),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)local_40[*(byte *)(local_3c + 2) + 0x1e] * 0x14,
               (int)*(short *)(iVar1 + 0x50),(int)*(short *)(iVar1 + 0x52),g_MenuAnimPtr + 4,0,
               0xffffffff,0xffffffff);
  local_34 = &local_48;
  local_30 = &local_44;
  iVar4 = 0;
  GetMenuItemColor(local_34,local_30,DAT_800cdcd8,param_2 == 0);
  DrawSpriteEx(g_CarModelBuffer + (uint)local_40[1] * 0x14,(int)*(short *)(iVar1 + 0x1c),
               (int)*(short *)(iVar1 + 0x1e),g_MenuAnimPtr + 4,local_48,0xffffffff,local_44);
  GetMenuItemColor(local_34,local_30,DAT_800cdcd8,param_2 == 1);
  iVar6 = 0;
  DrawSpriteEx(g_CarModelBuffer + (uint)local_40[2] * 0x14,(int)*(short *)(iVar1 + 0x20),
               (int)*(short *)(iVar1 + 0x22),g_MenuAnimPtr + 4,local_48,0xffffffff,local_44);
  GetMenuItemColor(local_34,local_30,DAT_800cdcd8,param_2 == 2);
  iVar7 = 0x90;
  DrawSpriteEx(g_CarModelBuffer + (uint)local_40[3] * 0x14,(int)*(short *)(iVar1 + 0x24),
               (int)*(short *)(iVar1 + 0x26),g_MenuAnimPtr + 4,local_48,0xffffffff,local_44);
  GetMenuItemColor(local_34,local_30,DAT_800cdcd8,param_2 == 3);
  iVar8 = 0x68;
  DrawSpriteEx(g_CarModelBuffer + (uint)local_40[4] * 0x14,(int)*(short *)(iVar1 + 0x28),
               (int)*(short *)(iVar1 + 0x2a),g_MenuAnimPtr + 4,local_48,0xffffffff,local_44);
  GetMenuItemColor(local_34,local_30,DAT_800cdcd8,param_2 == 4);
  DrawSpriteEx(g_CarModelBuffer + (uint)local_40[5] * 0x14,(int)*(short *)(iVar1 + 0x2c),
               (int)*(short *)(iVar1 + 0x2e),g_MenuAnimPtr + 4,local_48,0xffffffff,local_44);
  do {
    if (iVar4 == param_2) {
      iVar1 = iVar2 + 0x1c;
      iVar5 = iVar2 + 0x20;
    }
    else {
      iVar1 = iVar2 + 0x2c;
      iVar5 = iVar2 + 0x30;
    }
    DrawRaceSprite(iVar3 + iVar8,iVar3 + iVar7,iVar1,iVar5,_DAT_800c3908,g_MenuAnimPtr + 4);
    iVar1 = iVar6 + 0xb8;
    iVar5 = iVar6 + 0xe0;
    iVar6 = iVar6 + 8;
    iVar7 = iVar7 + 8;
    iVar8 = iVar8 + 8;
    iVar4 = iVar4 + 1;
    DrawRaceSpriteEx(iVar3 + iVar1,iVar3 + iVar5,iVar2 + 0xc4,iVar2 + 0xd4,_DAT_800c3908,
                     g_MenuAnimPtr + 4);
  } while (iVar4 != 5);
  return;
}


