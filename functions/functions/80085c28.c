/* Function: FUN_80085c28 */
/* Address: 80085c28 */

void FUN_80085c28(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar1 = GetRaceSprite1();
  iVar2 = FUN_800672bc();
  iVar3 = FUN_800671cc();
  iVar4 = GetCarSpriteData();
  GetMenuItemColor(&local_28,&local_24,DAT_800cdde8,param_1 == 0);
  if (param_1 == 0) {
    local_28 = 2;
  }
  else {
    local_28 = 0;
  }
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 0x51) * 0x14,
               (int)*(short *)(iVar2 + 0x18c),(int)*(short *)(iVar2 + 0x18e),g_MenuAnimPtr + 4,
               local_28,0xffffffff,local_24);
  GetMenuItemColor(&local_28,&local_24,DAT_800cdde8,param_1 == 1);
  if (param_1 == 1) {
    local_28 = 2;
  }
  else {
    local_28 = 0;
  }
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 0x52) * 0x14,(int)*(short *)(iVar2 + 400),
               (int)*(short *)(iVar2 + 0x192),g_MenuAnimPtr + 4,local_28,0xffffffff,local_24);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 0x4f) * 0x14,
               (int)*(short *)(iVar2 + 0x184),(int)*(short *)(iVar2 + 0x186),g_MenuAnimPtr + 4,0,
               0xffffffff,0xffffffff);
  iVar3 = iVar3 + 0x138;
  FUN_800650e0(iVar3,iVar3,4,3,iVar1 + 0x4c,iVar1 + 0x4c,0xff,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3,iVar3,iVar1 + 4,iVar1 + 4,0xff,g_MenuAnimPtr + 4);
  return;
}


