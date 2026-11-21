/* Function: FUN_80084b74 */
/* Address: 80084b74 */

void FUN_80084b74(int param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 local_40;
  undefined1 local_3f;
  int local_38;
  int local_34;
  int local_30;
  
  iVar1 = GetRaceSprite1();
  iVar2 = FUN_800672bc();
  local_38 = FUN_800671cc();
  local_34 = GetCarSpriteData();
  FUN_800847f8(param_2);
  local_3f = 0;
  local_40 = param_3;
  FUN_80084920(&local_40,param_4,param_6,0xffffffff);
  if (param_6 == 0xb) {
    DrawRaceSprite(local_38 + 0x100,local_38 + 0x100,iVar1 + 4,iVar1 + 4,param_2,g_MenuAnimPtr + 4);
  }
  else {
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_34 + 1) * 0x14,
                 (int)*(short *)(iVar2 + 0x17c),(int)*(short *)(iVar2 + 0x17e),g_MenuAnimPtr + 4,0,
                 0xffffffff,0xffffffff);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_34 + 0x3a) * 0x14,
                 (int)*(short *)(iVar2 + 0x10),(int)*(short *)(iVar2 + 0x12),g_MenuAnimPtr + 4,0,
                 0xffffffff,0xffffffff);
    DrawSpriteFlipped((int)*(short *)(iVar2 + 0x180),(int)*(short *)(iVar2 + 0x182),
                      &g_GearTuningPaletteRegion,g_MenuAnimPtr + 4);
  }
  iVar5 = 0;
  iVar8 = 0x60;
  local_30 = iVar1 + 0x4c;
  DrawSpriteScaled(iVar1 + 4,local_38 + 0x140,g_RaceOTPtr1 + 4);
  do {
    if (*(char *)(param_1 + iVar5) != '\0') {
      iVar6 = (int)*(short *)(iVar2 + 0x14) + (int)*(short *)(iVar2 + 0x5c);
      iVar7 = (int)*(short *)(iVar2 + 0x16) + (int)*(short *)(iVar2 + 0x5e);
      if (param_6 == iVar5) {
        DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_34 + iVar5 + 0xe) * 0x14,iVar6,iVar7,
                     g_MenuAnimPtr + 4,7,0xffffffff,0xffffffff);
        uVar3 = GetCarBaseColor();
        iVar4 = local_38 + iVar8;
        iVar6 = iVar1 + 0x1c;
        iVar7 = iVar1 + 0x20;
      }
      else {
        uVar3 = 9;
        if (iVar5 == 0xb) {
          iVar4 = -1;
        }
        else {
          iVar4 = HasCustomGearRatios(param_5,param_4,iVar5);
        }
        if (iVar4 != 0) {
          uVar3 = 8;
        }
        DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_34 + iVar5 + 0xe) * 0x14,iVar6,iVar7,
                     g_MenuAnimPtr + 4,uVar3,0xffffffff,0xffffffff);
        uVar3 = 0xff;
        if (iVar4 == -1) {
          iVar4 = local_38 + iVar8;
          iVar6 = iVar1 + 0x3c;
          iVar7 = iVar1 + 0x40;
        }
        else {
          iVar4 = local_38 + iVar8;
          iVar6 = local_30;
          iVar7 = local_30;
        }
      }
      DrawRaceSprite(iVar4,iVar4,iVar6,iVar7,uVar3,g_MenuAnimPtr + 4);
    }
    iVar8 = iVar8 + 8;
    iVar5 = iVar5 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar5 != 0xc);
  return;
}


