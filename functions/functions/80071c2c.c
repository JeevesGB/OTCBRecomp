/* Function: FUN_80071c2c */
/* Address: 80071c2c */

void FUN_80071c2c(undefined4 param_1,char param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar1 = GetCarPositionData();
  iVar2 = GetSelectedCarData();
  if (param_2 != -1) {
    iVar3 = GetRaceSprite2();
    iVar4 = GetRaceSprite1();
    DrawRaceSprite(iVar3,iVar3 + 8,iVar4 + 0xc,iVar4 + 0x10,param_2,g_MenuAnimPtr + 4);
    DrawRaceSprite(iVar3 + 0x10,iVar3 + 0x18,iVar4 + 0xc,iVar4 + 0x10,param_2,g_MenuAnimPtr + 4);
    iVar3 = GetRaceSprite2();
    iVar4 = GetRaceSprite1();
    DrawRaceSprite(iVar3 + 0x30,iVar3 + 0x38,iVar4 + 0xc,iVar4 + 0x10,param_2,g_RaceOTPtr2 + 4);
  }
  if ((g_RaceFrameCount & 1) == 0) {
    GetMenuItemColor(auStack_38,&local_34,g_RaceColorCycle,param_3 == 0);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar2 + 0x11) * 0x14,
                 (int)*(short *)(iVar1 + 0x1dc),(int)*(short *)(iVar1 + 0x1de),g_RaceOTPtr2 + 4,0,
                 0xffffffff,local_34);
    GetMenuItemColor(auStack_38,&local_34,g_RaceColorCycle,param_3 == 1);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar2 + 0x10) * 0x14,
                 (int)*(short *)(iVar1 + 0x1e4),(int)*(short *)(iVar1 + 0x1e6),g_RaceOTPtr2 + 4,0,
                 0xffffffff,local_34);
    if (param_4 != 0) {
      iVar2 = GetSelectedCarData();
      GetMenuItemColor(&local_30,&local_2c,g_RaceColorCycle,0xffffffff);
      DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar2 + 0x2d) * 0x14,
                   (int)*(short *)(iVar1 + 0x1ec),(int)*(short *)(iVar1 + 0x1ee),g_MenuAnimPtr + 4,
                   local_30,0xffffffff,local_2c);
      DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar2 + 0x2e) * 0x14,
                   (int)*(short *)(iVar1 + 500),(int)*(short *)(iVar1 + 0x1f6),g_MenuAnimPtr + 4,
                   local_30,0xffffffff,local_2c);
    }
  }
  return;
}


