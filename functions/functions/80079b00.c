/* Function: FUN_80079b00 */
/* Address: 80079b00 */

void FUN_80079b00(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar1 = FUN_80067250();
  iVar2 = FUN_80067184();
  iVar3 = GetRaceSprite1();
  iVar4 = GetGhostCarData();
  if (param_3 == 0) {
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 2) * 0x14,(int)*(short *)(iVar1 + 8),
                 (int)*(short *)(iVar1 + 10),g_MenuAnimPtr + 4,7,0xffffffff,0xffffffff);
    uVar5 = GetCarBaseColor();
    iVar6 = iVar3 + 0x1c;
    iVar7 = iVar3 + 0x20;
  }
  else {
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 2) * 0x14,(int)*(short *)(iVar1 + 8),
                 (int)*(short *)(iVar1 + 10),g_MenuAnimPtr + 4,9,0xffffffff,0xffffffff);
    iVar6 = iVar3 + 0x2c;
    iVar7 = iVar3 + 0x30;
    uVar5 = 0xff;
  }
  DrawRaceSprite(iVar2 + 0x30,iVar2 + 0x30,iVar6,iVar7,uVar5,g_MenuAnimPtr + 4);
  if (param_3 == 1) {
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 3) * 0x14,(int)*(short *)(iVar1 + 0xc),
                 (int)*(short *)(iVar1 + 0xe),g_MenuAnimPtr + 4,7,0xffffffff,0xffffffff);
    uVar5 = GetCarBaseColor();
    iVar6 = iVar3 + 0x1c;
    iVar7 = iVar3 + 0x20;
  }
  else {
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 3) * 0x14,(int)*(short *)(iVar1 + 0xc),
                 (int)*(short *)(iVar1 + 0xe),g_MenuAnimPtr + 4,9,0xffffffff,0xffffffff);
    iVar6 = iVar3 + 0x2c;
    iVar7 = iVar3 + 0x30;
    uVar5 = 0xff;
  }
  DrawRaceSprite(iVar2 + 0x38,iVar2 + 0x38,iVar6,iVar7,uVar5,g_MenuAnimPtr + 4);
  if (param_3 == 2) {
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 4) * 0x14,(int)*(short *)(iVar1 + 0x10),
                 (int)*(short *)(iVar1 + 0x12),g_MenuAnimPtr + 4,7,0xffffffff,0xffffffff);
    uVar5 = GetCarBaseColor();
    iVar6 = iVar3 + 0x1c;
    iVar3 = iVar3 + 0x20;
  }
  else {
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 4) * 0x14,(int)*(short *)(iVar1 + 0x10),
                 (int)*(short *)(iVar1 + 0x12),g_MenuAnimPtr + 4,9,0xffffffff,0xffffffff);
    iVar6 = iVar3 + 0x2c;
    iVar3 = iVar3 + 0x30;
    uVar5 = 0xff;
  }
  DrawRaceSprite(iVar2 + 0x40,iVar2 + 0x40,iVar6,iVar3,uVar5,g_MenuAnimPtr + 4);
  if (param_4 != 0) {
    GetMenuItemColor(&local_38,&local_34,param_2,0xffffffff);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 0x2b) * 0x14,
                 (int)*(short *)(iVar1 + 0x68),(int)*(short *)(iVar1 + 0x6a),g_MenuAnimPtr + 4,
                 local_38,0xffffffff,local_34);
  }
  if (param_5 != 0) {
    GetMenuItemColor(&local_30,&local_2c,param_2,0xffffffff);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 0x2c) * 0x14,
                 (int)*(short *)(iVar1 + 0x6c),(int)*(short *)(iVar1 + 0x6e),g_MenuAnimPtr + 4,
                 local_30,0xffffffff,local_2c);
  }
  return;
}


