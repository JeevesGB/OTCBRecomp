/* Function: FUN_8007d07c */
/* Address: 8007d07c */

void FUN_8007d07c(undefined1 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar1 = GetReplaySpritePositions2();
  iVar2 = GetRaceSprite1();
  iVar3 = FUN_8006719c();
  pbVar4 = (byte *)FUN_800673bc();
  DrawSpriteEx(g_CarModelBuffer + (uint)*pbVar4 * 0x14,(int)*(short *)(iVar1 + 0x14),
               (int)*(short *)(iVar1 + 0x16),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  iVar1 = iVar2 + 0xc;
  iVar5 = iVar2 + 0x10;
  DrawRaceSprite(iVar3,iVar3 + 8,iVar1,iVar5,param_1,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x10,iVar3 + 0x18,iVar1,iVar5,param_1,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x20,iVar3 + 0x28,iVar1,iVar5,param_1,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x30,iVar3 + 0x38,iVar1,iVar5,param_1,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x40,iVar3 + 0x48,iVar2 + 0x14,iVar2 + 0x18,g_ReplayPlaybackInit,
                 g_MenuAnimPtr + 4);
  return;
}


