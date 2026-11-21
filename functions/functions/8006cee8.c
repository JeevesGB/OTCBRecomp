/* Function: FUN_8006cee8 */
/* Address: 8006cee8 */

void FUN_8006cee8(undefined1 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = GetReplaySpritePositions();
  iVar2 = GetRaceSprite1();
  iVar3 = FUN_80067160();
  iVar4 = FUN_80067374();
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + param_2 + 9) * 0x14,
               (int)*(short *)(iVar1 + 0x34),(int)*(short *)(iVar1 + 0x36),g_MenuAnimPtr + 4,7,
               0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + param_3 + 0xd) * 0x14,
               (int)*(short *)(iVar1 + 0x3c),(int)*(short *)(iVar1 + 0x3e),g_MenuAnimPtr + 4,7,
               0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 0x11) * 0x14,(int)*(short *)(iVar1 + 0x44)
               ,(int)*(short *)(iVar1 + 0x46),g_MenuAnimPtr + 4,8,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 6) * 0x14,(int)*(short *)(iVar1 + 0x30),
               (int)*(short *)(iVar1 + 0x32),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 7) * 0x14,(int)*(short *)(iVar1 + 0x38),
               (int)*(short *)(iVar1 + 0x3a),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 8) * 0x14,(int)*(short *)(iVar1 + 0x40),
               (int)*(short *)(iVar1 + 0x42),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawRaceSprite(iVar3 + 0x50,iVar3 + 0x50,iVar2 + 0x44,iVar2 + 0x48,param_1,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x58,iVar3 + 0x58,iVar2 + 0x4c,iVar2 + 0x50,param_1,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x60,iVar3 + 0x60,iVar2 + 0x54,iVar2 + 0x58,param_1,g_MenuAnimPtr + 4);
  return;
}


