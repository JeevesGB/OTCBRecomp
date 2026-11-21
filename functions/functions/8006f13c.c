/* Function: FUN_8006f13c */
/* Address: 8006f13c */

void FUN_8006f13c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_40 [4];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  iVar1 = GetCarPositionData();
  iVar2 = GetRaceSprite2();
  iVar3 = GetRaceSprite1();
  iVar4 = GetSelectedCarData();
  if (param_3 != 4) {
    local_30 = (uint)*(byte *)(iVar4 + 0x19);
    local_2c = (uint)*(byte *)(iVar4 + 0x1a);
    local_28 = (uint)*(byte *)(iVar4 + 0x1b);
    local_24 = (uint)*(byte *)(iVar4 + 0x1c);
    local_40[0] = (uint)*(byte *)(iVar4 + 0x19);
    local_40[1] = (uint)*(byte *)(iVar4 + 0x1a);
    local_40[2] = (uint)*(byte *)(iVar4 + 0x1b);
    local_40[3] = (uint)*(byte *)(iVar4 + 0x1c);
    DrawSpriteEx(g_CarModelBuffer + local_40[param_3] * 0x14,(int)*(short *)(iVar1 + 300),
                 (int)*(short *)(iVar1 + 0x12e),g_MenuAnimPtr + 4,7,0xffffffff,0xffffffff);
  }
  if (param_4 != 0x4e) {
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 0x1d) * 0x14,
                 (int)*(short *)(iVar1 + 0x134),(int)*(short *)(iVar1 + 0x136),g_MenuAnimPtr + 4,8,
                 0xffffffff,0xffffffff);
  }
  DrawRaceSprite(iVar2 + 0x128,iVar2 + 0x128,iVar3 + 0x4c,iVar3 + 0x50,*(undefined1 *)(param_1 + 1),
                 g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar2 + 0x138,iVar2 + 0x138,iVar3 + 0x54,iVar3 + 0x58,*(undefined1 *)(param_1 + 2),
                 g_MenuAnimPtr + 4);
  return;
}


