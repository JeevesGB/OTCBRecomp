/* Function: InitChampionshipStandings */
/* Address: 8008b4c0 */

void InitChampionshipStandings(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_40 [2];
  byte local_3e;
  byte local_3d;
  char local_3c [5];
  char local_37 [7];
  uint local_30;
  int local_2c;
  
  iVar3 = GetCarReplayData();
  local_30 = (uint)*(byte *)(iVar3 + 0x11);
  iVar3 = FUN_800672d4();
  iVar4 = FUN_8006741c();
  local_2c = 0;
  do {
    iVar5 = GetRaceSprite1();
    iVar6 = FUN_800671e4();
    bVar1 = g_DebugFlag != 1;
    if (bVar1) {
      DrawRaceSpriteEx(iVar6,iVar6,iVar5 + 0x124,iVar5 + 0x124,0xff,g_RaceOTPtr1 + 4);
      iVar5 = iVar5 + 0x134;
    }
    else {
      DrawRaceSpriteEx(iVar6,iVar6,iVar5 + 0x104,iVar5 + 0x104,0xff,g_RaceOTPtr1 + 4);
      iVar5 = iVar5 + 0x114;
    }
    uVar10 = (uint)bVar1;
    DrawRaceSpriteEx(iVar6 + 8,iVar6 + 8,iVar5,iVar5,0xff,g_RaceOTPtr1 + 4);
    iVar6 = iVar3 + uVar10 * 4;
    uVar9 = 0;
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 2) * 0x14,
                 (int)*(short *)(iVar3 + 4) + (int)*(short *)(iVar6 + 0x48),
                 (int)*(short *)(iVar3 + 6) + (int)*(short *)(iVar6 + 0x4a),DAT_800cbba0 + 4,0,
                 0xffffffff,0xffffffff);
    FUN_80068b8c(auStack_40,local_30);
    uVar8 = 0;
    uVar7 = 0;
    iVar5 = iVar3;
    if (local_3e != 0) {
      do {
        if (local_3c[uVar8] == '\0') {
          bVar2 = *(byte *)(iVar4 + 7);
        }
        else {
          bVar2 = *(byte *)(iVar4 + 6);
          uVar9 = uVar9 + 1;
        }
        DrawSpriteEx(g_CarModelBuffer + (uint)bVar2 * 0x14,
                     (int)*(short *)(iVar5 + 0x18) + (int)*(short *)(iVar6 + 0x58),
                     (int)*(short *)(iVar5 + 0x1a) + (int)*(short *)(iVar6 + 0x5a),DAT_800cbba0 + 4,
                     0,0xffffffff,0xffffffff);
        uVar8 = uVar8 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar8 != local_3e);
      uVar7 = (uint)local_3e;
    }
    if (uVar9 == uVar7) {
      iVar5 = iVar3 + uVar10 * 4;
      DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 4) * 0x14,
                   (int)*(short *)(iVar3 + 0x40) + (int)*(short *)(iVar5 + 0x58),
                   (int)*(short *)(iVar3 + 0x42) + (int)*(short *)(iVar5 + 0x5a),DAT_800cbba0 + 4,0,
                   0xffffffff,0xffffffff);
    }
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    if (local_3d != 0) {
      iVar6 = iVar3 + uVar10 * 4;
      iVar5 = iVar3;
      do {
        if (local_37[uVar8] == '\0') {
          bVar2 = *(byte *)(iVar4 + 7);
        }
        else {
          bVar2 = *(byte *)(iVar4 + 6);
          uVar9 = uVar9 + 1;
        }
        DrawSpriteEx(g_CarModelBuffer + (uint)bVar2 * 0x14,
                     (int)*(short *)(iVar5 + 0x2c) + (int)*(short *)(iVar6 + 0x58),
                     (int)*(short *)(iVar5 + 0x2e) + (int)*(short *)(iVar6 + 0x5a),DAT_800cbba0 + 4,
                     0,0xffffffff,0xffffffff);
        uVar8 = uVar8 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar8 != local_3d);
      uVar7 = (uint)local_3d;
    }
    if (uVar9 == uVar7) {
      iVar5 = iVar3 + uVar10 * 4;
      DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar4 + 5) * 0x14,
                   (int)*(short *)(iVar3 + 0x44) + (int)*(short *)(iVar5 + 0x58),
                   (int)*(short *)(iVar3 + 0x46) + (int)*(short *)(iVar5 + 0x5a),DAT_800cbba0 + 4,0,
                   0xffffffff,0xffffffff);
    }
    VsyncWait();
    local_2c = local_2c + 1;
  } while (local_2c != 2);
  return;
}


