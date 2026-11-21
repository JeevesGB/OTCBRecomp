/* Function: FUN_80078448 */
/* Address: 80078448 */

void FUN_80078448(undefined1 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  int local_30;
  int local_2c;
  
  iVar1 = GetChampionshipSpriteData();
  iVar2 = FUN_80067178();
  iVar3 = GetRaceSprite1();
  local_30 = GetChampionshipCarData();
  FUN_80077dec(param_1);
  iVar7 = 0;
  local_2c = iVar3 + 0x34;
  iVar5 = 0x48;
  local_38 = param_1;
  local_37 = param_1;
  local_36 = param_1;
  FUN_80077f2c(&local_38,param_5,param_6,param_7);
  uVar4 = GetCarBaseColor();
  iVar6 = iVar2 + param_2 * 8 + 0x48;
  FUN_800650e0(iVar6,iVar6,3,2,iVar3 + 0x1c,iVar3 + 0x20,uVar4,g_MenuAnimPtr + 4);
  iVar6 = iVar2 + 0x48;
  do {
    iVar5 = iVar5 + 8;
    iVar7 = iVar7 + 1;
    FUN_800650e0(iVar6,iVar6,3,2,local_2c,iVar3 + 0x38,param_1,g_MenuAnimPtr + 4);
    iVar6 = iVar2 + iVar5;
  } while (iVar7 != 6);
  if (param_3 != 0) {
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_30 + 0x14) * 0x14,
                 (int)*(short *)(iVar1 + 0x38),(int)*(short *)(iVar1 + 0x3a),g_MenuAnimPtr + 4,0,
                 0xffffffff,0xffffffff);
  }
  if (param_4 != 0) {
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_30 + 0x15) * 0x14,
                 (int)*(short *)(iVar1 + 0x3c),(int)*(short *)(iVar1 + 0x3e),g_MenuAnimPtr + 4,0,
                 0xffffffff,0xffffffff);
  }
  return;
}


