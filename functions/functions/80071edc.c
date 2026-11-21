/* Function: FUN_80071edc */
/* Address: 80071edc */

void FUN_80071edc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar1 = GetCarPositionData();
  iVar2 = GetSelectedCarData();
  if ((g_RaceFrameCount & 1) != 0) {
    GetMenuItemColor(auStack_38,&local_34,g_RaceColorCycle,param_3 == 0);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar2 + 0x11) * 0x14,
                 (int)*(short *)(iVar1 + 0x1e0),(int)*(short *)(iVar1 + 0x1e2),g_RaceOTPtr2 + 4,0,
                 0xffffffff,local_34);
    GetMenuItemColor(auStack_38,&local_34,g_RaceColorCycle,param_3 == 1);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar2 + 0x10) * 0x14,
                 (int)*(short *)(iVar1 + 0x1e8),(int)*(short *)(iVar1 + 0x1ea),g_RaceOTPtr2 + 4,0,
                 0xffffffff,local_34);
    if (param_4 != 0) {
      iVar2 = GetSelectedCarData();
      GetMenuItemColor(&local_30,&local_2c,g_RaceColorCycle,0xffffffff);
      DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar2 + 0x2d) * 0x14,
                   (int)*(short *)(iVar1 + 0x1f0),(int)*(short *)(iVar1 + 0x1f2),g_MenuAnimPtr + 4,
                   local_30,0xffffffff,local_2c);
      DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar2 + 0x2e) * 0x14,
                   (int)*(short *)(iVar1 + 0x1f8),(int)*(short *)(iVar1 + 0x1fa),g_MenuAnimPtr + 4,
                   local_30,0xffffffff,local_2c);
    }
  }
  return;
}


