/* Function: FUN_80080624 */
/* Address: 80080624 */

void FUN_80080624(int param_1)

{
  short sVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar4 = GetCarReplayData();
  iVar5 = GetPartsSpritePositions();
  iVar6 = FUN_800673ec();
  cVar3 = HasTurboKit(*(undefined1 *)(iVar4 + 0x11));
  if (cVar3 == '\0') {
    GetMenuItemColor(&local_38,&local_34,DAT_800cdd38,param_1 == 0);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar6 + 1) * 0x14,(int)*(short *)(iVar5 + 0x2c),
                 (int)*(short *)(iVar5 + 0x2e),g_MenuAnimPtr + 4,local_38,0xffffffff,local_34);
    GetMenuItemColor(&local_38,&local_34,DAT_800cdd38,param_1 == 1);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar6 + 2) * 0x14,(int)*(short *)(iVar5 + 0x30),
                 (int)*(short *)(iVar5 + 0x32),g_MenuAnimPtr + 4,local_38,0xffffffff,local_34);
    GetMenuItemColor(&local_38,&local_34,DAT_800cdd38,param_1 == 2);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar6 + 3) * 0x14,(int)*(short *)(iVar5 + 0x34),
                 (int)*(short *)(iVar5 + 0x36),g_MenuAnimPtr + 4,local_38,0xffffffff,local_34);
    GetMenuItemColor(&local_38,&local_34,DAT_800cdd38,param_1 == 3);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar6 + 4) * 0x14,(int)*(short *)(iVar5 + 0x38),
                 (int)*(short *)(iVar5 + 0x3a),g_MenuAnimPtr + 4,local_38,0xffffffff,local_34);
    GetMenuItemColor(&local_38,&local_34,DAT_800cdd38,param_1 == 4);
    sVar1 = *(short *)(iVar5 + 0x3c);
    sVar2 = *(short *)(iVar5 + 0x3e);
    iVar4 = g_CarModelBuffer + (uint)*(byte *)(iVar6 + 5) * 0x14;
  }
  else {
    GetMenuItemColor(&local_30,&local_2c,DAT_800cdd38,param_1 == 0);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar6 + 1) * 0x14,(int)*(short *)(iVar5 + 0x2c),
                 (int)*(short *)(iVar5 + 0x2e),g_MenuAnimPtr + 4,1,0xffffffff,local_2c);
    GetMenuItemColor(&local_30,&local_2c,DAT_800cdd38,param_1 == 1);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar6 + 2) * 0x14,(int)*(short *)(iVar5 + 0x30),
                 (int)*(short *)(iVar5 + 0x32),g_MenuAnimPtr + 4,1,0xffffffff,local_2c);
    GetMenuItemColor(&local_30,&local_2c,DAT_800cdd38,param_1 == 2);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar6 + 3) * 0x14,(int)*(short *)(iVar5 + 0x34),
                 (int)*(short *)(iVar5 + 0x36),g_MenuAnimPtr + 4,local_30,0xffffffff,local_2c);
    GetMenuItemColor(&local_30,&local_2c,DAT_800cdd38,param_1 == 3);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar6 + 4) * 0x14,(int)*(short *)(iVar5 + 0x38),
                 (int)*(short *)(iVar5 + 0x3a),g_MenuAnimPtr + 4,local_30,0xffffffff,local_2c);
    GetMenuItemColor(&local_30,&local_2c,DAT_800cdd38,param_1 == 4);
    sVar1 = *(short *)(iVar5 + 0x3c);
    sVar2 = *(short *)(iVar5 + 0x3e);
    iVar4 = g_CarModelBuffer + (uint)*(byte *)(iVar6 + 5) * 0x14;
    local_34 = local_2c;
    local_38 = local_30;
  }
  DrawSpriteEx(iVar4,(int)sVar1,(int)sVar2,g_MenuAnimPtr + 4,local_38,0xffffffff,local_34);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar6 + 9) * 0x14,(int)*(short *)(iVar5 + 0x54),
               (int)*(short *)(iVar5 + 0x56),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  return;
}


