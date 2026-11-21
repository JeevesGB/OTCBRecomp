/* Function: FUN_8006ee80 */
/* Address: 8006ee80 */

void FUN_8006ee80(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_48 [4];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  iVar1 = GetCarPositionData();
  iVar2 = GetRaceSprite2();
  iVar3 = GetRaceSprite1();
  iVar4 = GetSelectedCarData();
  DrawText("2PLAYER",(int)*(short *)(iVar1 + 0x140),(int)*(short *)(iVar1 + 0x142));
  if (param_2 != 4) {
    local_38 = (uint)*(byte *)(iVar4 + 0x15);
    local_34 = (uint)*(byte *)(iVar4 + 0x16);
    local_30 = (uint)*(byte *)(iVar4 + 0x17);
    local_2c = (uint)*(byte *)(iVar4 + 0x18);
    local_48[0] = (uint)*(byte *)(iVar4 + 0x15);
    local_48[1] = (uint)*(byte *)(iVar4 + 0x16);
    local_48[2] = (uint)*(byte *)(iVar4 + 0x17);
    local_48[3] = (uint)*(byte *)(iVar4 + 0x18);
    DrawSpriteEx(g_CarModelBuffer + local_48[param_2] * 0x14,(int)*(short *)(iVar1 + 0x128),
                 (int)*(short *)(iVar1 + 0x12a),g_MenuAnimPtr + 4,7,0xffffffff,0xffffffff);
  }
  if (param_3 != 4) {
    local_38 = (uint)*(byte *)(iVar4 + 0x19);
    local_34 = (uint)*(byte *)(iVar4 + 0x1a);
    local_30 = (uint)*(byte *)(iVar4 + 0x1b);
    local_2c = (uint)*(byte *)(iVar4 + 0x1c);
    local_48[0] = (uint)*(byte *)(iVar4 + 0x19);
    local_48[1] = (uint)*(byte *)(iVar4 + 0x1a);
    local_48[2] = (uint)*(byte *)(iVar4 + 0x1b);
    local_48[3] = (uint)*(byte *)(iVar4 + 0x1c);
    DrawSpriteEx(g_CarModelBuffer + local_48[param_3] * 0x14,(int)*(short *)(iVar1 + 0x130),
                 (int)*(short *)(iVar1 + 0x132),g_MenuAnimPtr + 4,7,0xffffffff,0xffffffff);
  }
  if (param_4 != 0x4e) {
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 0x1e) * 0x14,
                 (int)*(short *)(iVar1 + 0x138),(int)*(short *)(iVar1 + 0x13a),g_MenuAnimPtr + 4,8,
                 0xffffffff,0xffffffff);
  }
  DrawRaceSprite(iVar2 + 0x120,iVar2 + 0x120,iVar3 + 0x44,iVar3 + 0x48,*param_1,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar2 + 0x130,iVar2 + 0x130,iVar3 + 0x4c,iVar3 + 0x50,param_1[1],g_MenuAnimPtr + 4)
  ;
  DrawRaceSprite(iVar2 + 0x140,iVar2 + 0x140,iVar3 + 0x54,iVar3 + 0x58,param_1[2],g_MenuAnimPtr + 4)
  ;
  return;
}


