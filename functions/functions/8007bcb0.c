/* Function: FUN_8007bcb0 */
/* Address: 8007bcb0 */

void FUN_8007bcb0(undefined4 param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_88 [2];
  byte local_86;
  byte local_85;
  char local_84 [5];
  char local_7f [7];
  char acStack_78 [64];
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  
  iVar2 = GetGhostSpritePositions();
  local_30 = GetRaceSprite1();
  iVar3 = FUN_800671a8();
  pbVar4 = (byte *)FUN_800673b0();
  DrawSpriteEx(g_CarModelBuffer + (uint)*pbVar4 * 0x14,(int)*(short *)(iVar2 + 0x14),
               (int)*(short *)(iVar2 + 0x16),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[0xb] * 0x14,(int)*(short *)(iVar2 + 0x58),
               (int)*(short *)(iVar2 + 0x5a),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[0xc] * 0x14,(int)*(short *)(iVar2 + 0x5c),
               (int)*(short *)(iVar2 + 0x5e),g_RaceOTPtr2 + 4,0,0xffffffff,0xffffffff);
  GetMenuItemColor(&local_38,&local_34,DAT_800cdd10,param_2 == 0);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[1] * 0x14,(int)*(short *)(iVar2 + 0x18),
               (int)*(short *)(iVar2 + 0x1a),g_MenuAnimPtr + 4,local_38,0xffffffff,local_34);
  GetMenuItemColor(&local_38,&local_34,DAT_800cdd10,param_2 == 1);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[2] * 0x14,(int)*(short *)(iVar2 + 0x1c),
               (int)*(short *)(iVar2 + 0x1e),g_MenuAnimPtr + 4,local_38,0xffffffff,local_34);
  GetMenuItemColor(&local_38,&local_34,DAT_800cdd10,param_2 == 2);
  iVar5 = FUN_80069ed8(param_3);
  if (iVar5 == 0) {
    local_38 = 1;
  }
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[3] * 0x14,(int)*(short *)(iVar2 + 0x20),
               (int)*(short *)(iVar2 + 0x22),g_MenuAnimPtr + 4,local_38,0xffffffff,local_34);
  GetMenuItemColor(&local_38,&local_34,DAT_800cdd10,param_2 == 3);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[4] * 0x14,(int)*(short *)(iVar2 + 0x24),
               (int)*(short *)(iVar2 + 0x26),g_MenuAnimPtr + 4,local_38,0xffffffff,local_34);
  GetMenuItemColor(&local_38,&local_34,DAT_800cdd10,param_2 == 4);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[5] * 0x14,(int)*(short *)(iVar2 + 0x28),
               (int)*(short *)(iVar2 + 0x2a),g_MenuAnimPtr + 4,local_38,0xffffffff,local_34);
  GetMenuItemColor(&local_38,&local_34,DAT_800cdd10,param_2 == 5);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[6] * 0x14,(int)*(short *)(iVar2 + 0x2c),
               (int)*(short *)(iVar2 + 0x2e),g_MenuAnimPtr + 4,local_38,0xffffffff,local_34);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[7] * 0x14,(int)*(short *)(iVar2 + 100),
               (int)*(short *)(iVar2 + 0x66),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  FUN_80068b8c(auStack_88,param_3);
  uVar7 = 0;
  iVar5 = iVar2;
  if (local_86 != 0) {
    do {
      if (local_84[uVar7] == '\0') {
        bVar1 = pbVar4[10];
      }
      else {
        bVar1 = pbVar4[9];
      }
      DrawSpriteEx(g_CarModelBuffer + (uint)bVar1 * 0x14,(int)*(short *)(iVar5 + 0x30),
                   (int)*(short *)(iVar5 + 0x32),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar7 != local_86);
  }
  uVar7 = 0;
  iVar5 = iVar2;
  if (local_85 != 0) {
    do {
      if (local_7f[uVar7] == '\0') {
        bVar1 = pbVar4[10];
      }
      else {
        bVar1 = pbVar4[9];
      }
      DrawSpriteEx(g_CarModelBuffer + (uint)bVar1 * 0x14,(int)*(short *)(iVar5 + 0x44),
                   (int)*(short *)(iVar5 + 0x46),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar7 != local_85);
  }
  iVar11 = 0;
  puVar6 = (undefined4 *)FUN_80069778();
  iVar10 = 0;
  iVar9 = 0x80;
  iVar8 = 0x50;
  sprintf(acStack_78,"%d",*puVar6);
  FUN_80058a88(acStack_78,(int)*(short *)(iVar2 + 0x60),(int)*(short *)(iVar2 + 0x62));
  iVar2 = local_30 + 0xc;
  iVar5 = local_30 + 0x10;
  DrawRaceSprite(iVar3,iVar3 + 8,iVar2,iVar5,g_GhostRaceFlag2,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x10,iVar3 + 0x18,iVar2,iVar5,g_GhostRaceFlag2,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x20,iVar3 + 0x28,iVar2,iVar5,g_GhostRaceFlag2,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x30,iVar3 + 0x38,iVar2,iVar5,g_GhostRaceFlag2,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x40,iVar3 + 0x48,local_30 + 0x14,local_30 + 0x18,g_GhostRaceFlag2,
                 g_MenuAnimPtr + 4);
  do {
    if (iVar11 == param_2) {
      iVar2 = local_30 + 0x1c;
      iVar5 = local_30 + 0x20;
    }
    else {
      iVar2 = local_30 + 0x2c;
      iVar5 = local_30 + 0x30;
    }
    DrawRaceSprite(iVar3 + iVar8,iVar3 + iVar9,iVar2,iVar5,g_GhostRaceFlag2,g_MenuAnimPtr + 4);
    iVar2 = iVar10 + 0xb0;
    iVar5 = iVar10 + 0xe0;
    iVar10 = iVar10 + 8;
    iVar9 = iVar9 + 8;
    iVar8 = iVar8 + 8;
    iVar11 = iVar11 + 1;
    DrawRaceSpriteEx(iVar3 + iVar2,iVar3 + iVar5,local_30 + 0xc4,local_30 + 0xd4,g_GhostRaceFlag2,
                     g_MenuAnimPtr + 4);
  } while (iVar11 != 6);
  return;
}


