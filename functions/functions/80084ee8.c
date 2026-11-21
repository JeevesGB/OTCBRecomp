/* Function: FUN_80084ee8 */
/* Address: 80084ee8 */

void FUN_80084ee8(undefined1 param_1,undefined1 param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  undefined1 local_50;
  undefined1 local_4f;
  int local_48;
  int local_44;
  int local_40;
  byte *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_48 = GetRaceSprite1();
  iVar1 = FUN_800672bc();
  local_44 = FUN_800671cc();
  local_40 = GetCarSpriteData();
  FUN_800847f8(param_1);
  local_50 = 0xff;
  local_4f = param_2;
  FUN_80084920(&local_50,param_3,param_5,param_6);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_40 + 1) * 0x14,
               (int)*(short *)(iVar1 + 0x17c),(int)*(short *)(iVar1 + 0x17e),g_MenuAnimPtr + 4,0,
               0xffffffff,0xffffffff);
  iVar9 = local_40 + 0x1a;
  piVar2 = (int *)(param_5 * 8 + param_3);
  iVar4 = *piVar2;
  local_3c = (byte *)piVar2[1];
  if (iVar4 == 2) {
    iVar4 = 0;
    local_30 = 200;
    local_2c = iVar1;
    do {
      pbVar8 = local_3c + iVar4;
      iVar7 = iVar1 + (uint)*pbVar8 * 4;
      iVar6 = (int)*(short *)(local_2c + 0x48) + (int)*(short *)(iVar7 + 0x8c);
      iVar7 = (int)*(short *)(local_2c + 0x4a) + (int)*(short *)(iVar7 + 0x8e);
      if (param_6 == iVar4) {
        if (*(char *)(iVar9 + (uint)*pbVar8) == *(char *)(iVar9 + (uint)**(byte **)(param_3 + 4))) {
          DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_40 + param_6 + 0x37) * 0x14,
                       iVar6 + *(short *)(iVar1 + 0x100),iVar7 + *(short *)(iVar1 + 0x102),
                       g_MenuAnimPtr + 4,7,0xffffffff,0xffffffff);
        }
        DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar9 + (uint)*pbVar8) * 0x14,iVar6,iVar7,
                     g_MenuAnimPtr + 4,8,0xffffffff,0xffffffff);
        uVar3 = GetCarBaseColor();
        iVar6 = local_44 + param_6 * 8 + 200;
        iVar5 = local_48 + 0x1c;
        iVar7 = local_48 + 0x20;
      }
      else {
        uVar3 = 9;
        iVar5 = FUN_8006b8dc(param_4,*(undefined1 *)(*(int *)(param_5 * 8 + param_3 + 4) + iVar4));
        if (iVar5 != 0) {
          uVar3 = 8;
        }
        if (*(char *)(iVar9 + (uint)*pbVar8) == *(char *)(iVar9 + (uint)**(byte **)(param_3 + 4))) {
          DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_40 + iVar4 + 0x37) * 0x14,
                       iVar6 + *(short *)(iVar1 + 0x100),iVar7 + *(short *)(iVar1 + 0x102),
                       g_MenuAnimPtr + 4,uVar3,0xffffffff,0xffffffff);
        }
        DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar9 + (uint)*pbVar8) * 0x14,iVar6,iVar7,
                     g_MenuAnimPtr + 4,uVar3,0xffffffff,0xffffffff);
        if (iVar5 == -1) {
          iVar6 = local_44 + local_30;
          uVar3 = 0xff;
          iVar5 = local_48 + 0x3c;
          iVar7 = local_48 + 0x40;
        }
        else {
          iVar6 = local_44 + local_30;
          uVar3 = 0xff;
          iVar5 = local_48 + 0x4c;
          iVar7 = iVar5;
        }
      }
      DrawRaceSprite(iVar6,iVar6,iVar5,iVar7,uVar3,g_MenuAnimPtr + 4);
      iVar4 = iVar4 + 1;
      local_30 = local_30 + 8;
      local_2c = local_2c + 4;
    } while (iVar4 != 2);
  }
  else if (iVar4 < 3) {
    if (iVar4 == 1) {
      iVar4 = iVar1 + (uint)*local_3c * 4;
      DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar9 + (uint)*local_3c) * 0x14,
                   (int)*(short *)(iVar1 + 0x44) + (int)*(short *)(iVar4 + 0x8c),
                   (int)*(short *)(iVar1 + 0x46) + (int)*(short *)(iVar4 + 0x8e),g_MenuAnimPtr + 4,8
                   ,0xffffffff,0xffffffff);
      if (*local_3c == 0) {
        DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_40 + 0x37) * 0x14,
                     *(short *)(iVar1 + 0x44) + 0x3c,(int)*(short *)(iVar1 + 0x46),g_MenuAnimPtr + 4
                     ,8,0xffffffff,0xffffffff);
      }
      uVar3 = GetCarBaseColor();
      DrawRaceSprite(local_44 + 0xc0,local_44 + 0xc0,local_48 + 0x1c,local_48 + 0x20,uVar3,
                     g_MenuAnimPtr + 4);
    }
  }
  else {
    iVar7 = 0;
    if (iVar4 == 3) {
      local_38 = 0xd8;
      local_34 = iVar1;
      do {
        pbVar8 = local_3c + iVar7;
        iVar4 = iVar1 + (uint)*pbVar8 * 4;
        iVar6 = (int)*(short *)(local_34 + 0x50) + (int)*(short *)(iVar4 + 0x8c);
        iVar4 = (int)*(short *)(local_34 + 0x52) + (int)*(short *)(iVar4 + 0x8e);
        if (param_6 == iVar7) {
          if (*(char *)(iVar9 + (uint)*pbVar8) == *(char *)(iVar9 + (uint)**(byte **)(param_3 + 4)))
          {
            DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_40 + param_6 + 0x37) * 0x14,
                         iVar6 + *(short *)(iVar1 + 0x100),iVar4 + *(short *)(iVar1 + 0x102),
                         g_MenuAnimPtr + 4,7,0xffffffff,0xffffffff);
          }
          DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar9 + (uint)*pbVar8) * 0x14,iVar6,iVar4,
                       g_MenuAnimPtr + 4,7,0xffffffff,0xffffffff);
          uVar3 = GetCarBaseColor();
          iVar6 = local_44 + param_6 * 8 + 0xd8;
          iVar5 = local_48 + 0x1c;
          iVar4 = local_48 + 0x20;
        }
        else {
          uVar3 = 9;
          iVar5 = FUN_8006b8dc(param_4,*(undefined1 *)(*(int *)(param_5 * 8 + param_3 + 4) + iVar7))
          ;
          if (iVar5 != 0) {
            uVar3 = 8;
          }
          if (*(char *)(iVar9 + (uint)*pbVar8) == *(char *)(iVar9 + (uint)**(byte **)(param_3 + 4)))
          {
            DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_40 + iVar7 + 0x37) * 0x14,
                         iVar6 + *(short *)(iVar1 + 0x100),iVar4 + *(short *)(iVar1 + 0x102),
                         g_MenuAnimPtr + 4,uVar3,0xffffffff,0xffffffff);
          }
          DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar9 + (uint)*pbVar8) * 0x14,iVar6,iVar4,
                       g_MenuAnimPtr + 4,uVar3,0xffffffff,0xffffffff);
          if (iVar5 == -1) {
            iVar6 = local_44 + local_38;
            uVar3 = 0xff;
            iVar5 = local_48 + 0x3c;
            iVar4 = local_48 + 0x40;
          }
          else {
            iVar6 = local_44 + local_38;
            uVar3 = 0xff;
            iVar5 = local_48 + 0x4c;
            iVar4 = iVar5;
          }
        }
        DrawRaceSprite(iVar6,iVar6,iVar5,iVar4,uVar3,g_MenuAnimPtr + 4);
        iVar7 = iVar7 + 1;
        local_38 = local_38 + 8;
        local_34 = local_34 + 4;
      } while (iVar7 != 3);
    }
  }
  if (param_6 != 0xb) {
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_40 + 0x3a) * 0x14,
                 (int)*(short *)(iVar1 + 0x10),(int)*(short *)(iVar1 + 0x12),g_MenuAnimPtr + 4,0,
                 0xffffffff,0xffffffff);
    DrawSpriteFlipped((int)*(short *)(iVar1 + 0x180),(int)*(short *)(iVar1 + 0x182),
                      &g_GearTuningPaletteRegion,g_MenuAnimPtr + 4);
  }
  return;
}


