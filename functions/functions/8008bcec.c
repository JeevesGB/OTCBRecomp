/* Function: UpdateChampionshipStandings2 */
/* Address: 8008bcec */

void UpdateChampionshipStandings2(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar3 = GetCarReplayData();
  if (g_DebugFlag == 1) {
    if (g_StandingsFlag2 == 0) {
      iVar4 = GetReplayCarData(*(undefined1 *)(iVar3 + 0x11));
      uVar2 = *(undefined1 *)(iVar3 + 0x11);
      uVar1 = GetChampionshipTrackIndex(uVar2,0xffffffff);
      uVar2 = GetChampionshipCarIndex(uVar2);
      FUN_80066d68(&g_TimeAttackBuffer,uVar1,uVar2,*(undefined1 *)(iVar3 + 0x12),
                   (int)*(short *)(iVar4 + 0xac));
    }
    iVar4 = FUN_80066d8c(&g_TimeAttackBuffer);
    if (iVar4 == -1) {
      FUN_80067008(&g_TimeAttackBuffer,DAT_800cbb9c + 4);
      if (g_DebugFlag == 1) {
        FUN_80067090(&g_TimeAttackBuffer);
        g_TimeAttackVRAMY2 = g_TimeAttackVRAMY2 + 4;
      }
      else {
        FUN_800670bc(&g_TimeAttackBuffer);
        g_TimeAttackVRAMY2 = g_TimeAttackVRAMY2 + 0x40;
      }
    }
    iVar4 = GetRaceSprite1();
    iVar5 = FUN_800671e4();
    iVar6 = FUN_8006741c();
    iVar7 = (uint)*(ushort *)(iVar5 + 0x46) << 0x10;
    iVar7 = (iVar7 >> 0x10) - (iVar7 >> 0x1f) >> 1;
    FUN_80066010(g_CarModelBuffer + (uint)*(byte *)(iVar6 + 0x14) * 0x14,
                 (int)*(short *)(iVar5 + 0x40),
                 (int)(((uint)*(ushort *)(iVar5 + 0x42) + iVar7 + 8) * 0x10000) >> 0x10,
                 (int)*(short *)(iVar5 + 0x44),iVar7,g_RaceOTPtr1 + 4);
    DrawSpriteScaled(iVar4 + 4,iVar5 + 0x40,g_RaceOTPtr1 + 4);
  }
  if (g_StandingsFlag2 == 0xff) {
    if (g_StandingsFlag5 == g_StandingsRoundCount) {
      if ((g_PadButtons & 0x60) != 0) {
        PlaySFX(0x10);
        FUN_8008b3a8();
      }
    }
    else {
      if ((g_PadButtons2 & 0xf0) == 0) {
        uVar8 = g_StandingsFlag4 & 7;
      }
      else {
        uVar8 = g_StandingsFlag4 & 3;
      }
      if (uVar8 == 0) {
        PlaySFX(0xf);
        g_StandingsFlag5 = g_StandingsFlag5 + 1;
      }
      g_StandingsFlag4 = g_StandingsFlag4 + 1;
    }
  }
  FUN_8008b878(g_StandingsFlag2 & 0xff,(int)g_DebugFlag,g_ResultSavePtr1,g_StandingsFlag5,
               *(undefined1 *)(iVar3 + 0x11));
  g_StandingsFlag3 = g_StandingsFlag3 + -6;
  if (g_StandingsFlag3 < 0x40) {
    g_StandingsFlag3 = 0xa0;
  }
  g_StandingsFlag2 = g_StandingsFlag2 + 8;
  if (0xff < (int)g_StandingsFlag2) {
    g_StandingsFlag2 = 0xff;
  }
  return;
}


