/* Function: UpdateGhostRace */
/* Address: 8007c350 */

void UpdateGhostRace(void)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  
  iVar4 = GetCarReplayData();
  if (g_GhostRaceFlag2 == 0) {
    iVar5 = GetReplayCarData(*(undefined1 *)(iVar4 + 0x11));
    uVar3 = *(undefined1 *)(iVar4 + 0x11);
    uVar2 = GetChampionshipTrackIndex(uVar3,0xffffffff);
    uVar3 = GetChampionshipCarIndex(uVar3);
    FUN_80066d68(&g_TimeAttackBuffer,uVar2,uVar3,*(undefined1 *)(iVar4 + 0x12),
                 (int)*(short *)(iVar5 + 0xac));
  }
  iVar5 = FUN_80066d8c(&g_TimeAttackBuffer);
  if (iVar5 == -1) {
    FUN_80067090(&g_TimeAttackBuffer);
    FUN_80067008(&g_TimeAttackBuffer,DAT_800cbb9c + 4);
    g_TimeAttackVRAMY2 = g_TimeAttackVRAMY2 + 4;
  }
  iVar5 = GetRaceSprite1();
  iVar6 = FUN_800671a8();
  iVar7 = FUN_800673b0();
  iVar8 = (uint)*(ushort *)(iVar6 + 0x11e) << 0x10;
  iVar8 = (iVar8 >> 0x10) - (iVar8 >> 0x1f) >> 1;
  FUN_80066010(g_CarModelBuffer + (uint)*(byte *)(iVar7 + 8) * 0x14,(int)*(short *)(iVar6 + 0x118),
               (int)(((uint)*(ushort *)(iVar6 + 0x11a) + iVar8 + 4) * 0x10000) >> 0x10,
               (int)*(short *)(iVar6 + 0x11c),iVar8,g_RaceOTPtr1 + 4);
  DrawSpriteScaled(iVar5 + 4,iVar6 + 0x118,g_RaceOTPtr1 + 4);
  if ((g_PadButtons & 0x1000) != 0) {
    PlaySFX(0xf);
    bVar1 = g_GhostRaceFlag1 == 0;
    g_GhostRaceFlag1 = g_GhostRaceFlag1 + -1;
    if (bVar1) {
      g_GhostRaceFlag1 = 5;
    }
    goto switchD_8007c55c_default;
  }
  if ((g_PadButtons & 0x4000) != 0) {
    PlaySFX(0xf);
    bVar1 = g_GhostRaceFlag1 == 5;
    g_GhostRaceFlag1 = g_GhostRaceFlag1 + 1;
    if (bVar1) {
      g_GhostRaceFlag1 = 0;
    }
    goto switchD_8007c55c_default;
  }
  if ((g_PadButtons & 0x60) == 0) {
    if ((g_PadButtons & 0x90) != 0) {
      PlaySFX(0x11);
      g_GameState = 0xb;
    }
    goto switchD_8007c55c_default;
  }
  puVar9 = (undefined1 *)GetCarData();
  switch(g_GhostRaceFlag1) {
  case 0:
    g_GameState = 0x13;
    break;
  case 1:
    g_GameState = 0x15;
    break;
  case 2:
    iVar5 = GetCarReplayData();
    iVar5 = FUN_80069ed8(*(undefined1 *)(iVar5 + 0x11));
    if (iVar5 == 0) {
      PlaySFX(0x13);
      goto switchD_8007c55c_default;
    }
    g_GameState = 0x14;
    break;
  case 3:
    g_GameState = 2;
    puVar9[5] = 0;
    goto LAB_8007c5d8;
  case 4:
    *puVar9 = 5;
    g_GameState = 0xe;
LAB_8007c5d8:
    PlaySFX(0x10);
    goto switchD_8007c55c_default;
  case 5:
    g_GameState = 0xb;
    break;
  default:
    goto switchD_8007c55c_default;
  }
  PlaySFX(0x10);
switchD_8007c55c_default:
  FUN_8007bcb0(g_GhostRaceFlag2 & 0xff,g_GhostRaceFlag1,*(undefined1 *)(iVar4 + 0x11));
  DAT_800cdd10 = DAT_800cdd10 + -6;
  if (DAT_800cdd10 < 0x40) {
    DAT_800cdd10 = 0xa0;
  }
  g_GhostRaceFlag2 = g_GhostRaceFlag2 + 8;
  if (0xff < (int)g_GhostRaceFlag2) {
    g_GhostRaceFlag2 = 0xff;
  }
  return;
}


