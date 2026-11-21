/* Function: FUN_8007f520 */
/* Address: 8007f520 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007f520(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char acStack_88 [64];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar1 = FUN_80067280();
  iVar2 = GetRaceSprite1();
  iVar3 = FUN_80067190();
  iVar4 = FUN_800673c8();
  GetMenuItemColor(&local_48,&local_44,DAT_800cdd28,0xffffffff);
  local_48 = 1;
  if ((param_4 & 0x10) == 0) {
    local_44 = 0xffffffff;
  }
  else {
    local_48 = 2;
  }
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 2) * 0x14,(int)*(short *)(iVar1 + 8),
               (int)*(short *)(iVar1 + 10),g_MenuAnimPtr + 4,local_48,0xffffffff,local_44);
  GetMenuItemColor(&local_40,&local_3c,DAT_800cdd28,0xffffffff);
  local_40 = 1;
  if (*(int *)(param_1 + 0x10) < 3) {
    local_3c = 0xffffffff;
  }
  else {
    local_40 = 2;
  }
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 3) * 0x14,(int)*(short *)(iVar1 + 0xc),
               (int)*(short *)(iVar1 + 0xe),g_MenuAnimPtr + 4,local_40,0xffffffff,local_3c);
  GetMenuItemColor(&local_38,&local_34,DAT_800cdd28,0xffffffff);
  local_38 = 1;
  if (*(int *)(param_1 + 0x10) < 1) {
    local_34 = 0xffffffff;
  }
  else {
    local_38 = 2;
  }
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 4) * 0x14,(int)*(short *)(iVar1 + 0x10),
               (int)*(short *)(iVar1 + 0x12),g_MenuAnimPtr + 4,local_38,0xffffffff,local_34);
  if (param_3 != -1) {
    GetMenuItemColor(&local_30,&local_2c,DAT_800cdd28,param_3 == 0);
    if (param_3 == 0) {
      local_30 = 2;
    }
    else {
      local_30 = 0;
    }
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 5) * 0x14,(int)*(short *)(iVar1 + 0x18),
                 (int)*(short *)(iVar1 + 0x1a),g_MenuAnimPtr + 4,local_30,0xffffffff,local_2c);
    GetMenuItemColor(&local_30,&local_2c,DAT_800cdd28,param_3 == 1);
    if (param_3 == 1) {
      local_30 = 2;
    }
    else {
      local_30 = 0;
    }
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 6) * 0x14,(int)*(short *)(iVar1 + 0x1c),
                 (int)*(short *)(iVar1 + 0x1e),g_MenuAnimPtr + 4,local_30,0xffffffff,local_2c);
    DrawSpriteFlipped((int)*(short *)(iVar1 + 0x14),(int)*(short *)(iVar1 + 0x16),
                      &g_TuningPaletteRegion,g_MenuAnimPtr + 4);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 1) * 0x14,(int)*(short *)(iVar1 + 4),
                 (int)*(short *)(iVar1 + 6),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + param_5 % 10 + 7) * 0x14,
                 (int)*(short *)(iVar1 + 0x24),(int)*(short *)(iVar1 + 0x26),g_MenuAnimPtr + 4,0,
                 0xffffffff,0xffffffff);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + param_5 / 10 + 7) * 0x14,
                 (int)*(short *)(iVar1 + 0x20),(int)*(short *)(iVar1 + 0x22),g_MenuAnimPtr + 4,0,
                 0xffffffff,0xffffffff);
  }
  DrawRaceSprite(iVar3 + 0x10,iVar3 + 0x18,iVar2 + 0xc,iVar2 + 0x10,_g_TuningShopFlag1,
                 g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x20,iVar3 + 0x28,iVar2 + 0xc,iVar2 + 0x10,_g_TuningShopFlag1,
                 g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x30,iVar3 + 0x38,iVar2 + 8,iVar2 + 8,_g_TuningShopFlag1,g_MenuAnimPtr + 4)
  ;
  iVar4 = iVar2 + 4;
  if (param_6 != 0) {
    puVar5 = (undefined4 *)FUN_80069778();
    sprintf(acStack_88,"%d",*puVar5);
    FUN_80058a88(acStack_88,(int)*(short *)(iVar1 + 0x2c),(int)*(short *)(iVar1 + 0x2e));
    DrawRaceSpriteEx(iVar3 + 0x60,iVar3 + 0x60,iVar2 + 0x144,iVar2 + 0x144,0xff,g_RaceOTPtr1 + 4);
  }
  DrawSpriteScaled(iVar4,iVar3 + 0x48,g_RaceOTPtr1 + 4);
  DrawSpriteScaled(iVar4,iVar3 + 0x50,g_RaceOTPtr1 + 4);
  DrawSpriteScaled(iVar4,iVar3 + 0x58,g_RaceOTPtr1 + 4);
  return;
}


