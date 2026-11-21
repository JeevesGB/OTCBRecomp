/* Function: FUN_80077f2c */
/* Address: 80077f2c */

void FUN_80077f2c(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_48 [4];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  iVar1 = GetChampionshipSpriteData();
  iVar2 = FUN_80067178();
  iVar3 = GetRaceSprite1();
  iVar4 = GetChampionshipCarData();
  iVar5 = GetCarData();
  if ((1 < *(byte *)(iVar5 + 1) - 3) && (param_2 != 4)) {
    local_38 = (uint)*(byte *)(iVar4 + 4);
    local_34 = (uint)*(byte *)(iVar4 + 5);
    local_30 = (uint)*(byte *)(iVar4 + 6);
    local_2c = (uint)*(byte *)(iVar4 + 7);
    local_48[0] = (uint)*(byte *)(iVar4 + 4);
    local_48[1] = (uint)*(byte *)(iVar4 + 5);
    local_48[2] = (uint)*(byte *)(iVar4 + 6);
    local_48[3] = (uint)*(byte *)(iVar4 + 7);
    DrawSpriteEx(g_CarModelBuffer + local_48[param_2] * 0x14,(int)*(short *)(iVar1 + 8),
                 (int)*(short *)(iVar1 + 10),g_MenuAnimPtr + 4,7,0xffffffff,0xffffffff);
  }
  if (param_3 != 4) {
    local_38 = (uint)*(byte *)(iVar4 + 8);
    local_34 = (uint)*(byte *)(iVar4 + 9);
    local_30 = (uint)*(byte *)(iVar4 + 10);
    local_2c = (uint)*(byte *)(iVar4 + 0xb);
    local_48[0] = (uint)*(byte *)(iVar4 + 8);
    local_48[1] = (uint)*(byte *)(iVar4 + 9);
    local_48[2] = (uint)*(byte *)(iVar4 + 10);
    local_48[3] = (uint)*(byte *)(iVar4 + 0xb);
    DrawSpriteEx(g_CarModelBuffer + local_48[param_3] * 0x14,(int)*(short *)(iVar1 + 0x10),
                 (int)*(short *)(iVar1 + 0x12),g_MenuAnimPtr + 4,7,0xffffffff,0xffffffff);
  }
  if (param_4 != 0x4e) {
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 0xc) * 0x14,
                 (int)*(short *)(iVar1 + 0x18),(int)*(short *)(iVar1 + 0x1a),g_MenuAnimPtr + 4,8,
                 0xffffffff,0xffffffff);
  }
  if (1 < *(byte *)(iVar5 + 1) - 3) {
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 1) * 0x14,(int)*(short *)(iVar1 + 4),
                 (int)*(short *)(iVar1 + 6),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  }
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 2) * 0x14,(int)*(short *)(iVar1 + 0xc),
               (int)*(short *)(iVar1 + 0xe),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 3) * 0x14,(int)*(short *)(iVar1 + 0x14),
               (int)*(short *)(iVar1 + 0x16),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  if (1 < *(byte *)(iVar5 + 1) - 3) {
    DrawRaceSprite(iVar2 + 0x30,iVar2 + 0x30,iVar3 + 0x44,iVar3 + 0x48,*param_1,g_MenuAnimPtr + 4);
  }
  DrawRaceSprite(iVar2 + 0x38,iVar2 + 0x38,iVar3 + 0x4c,iVar3 + 0x50,param_1[1],g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar2 + 0x40,iVar2 + 0x40,iVar3 + 0x54,iVar3 + 0x58,param_1[2],g_MenuAnimPtr + 4);
  return;
}


