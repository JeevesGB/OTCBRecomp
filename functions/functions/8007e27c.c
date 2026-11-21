/* Function: UpdateReplayPlayback2 */
/* Address: 8007e27c */

code * UpdateReplayPlayback2(int *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  
  if (g_ReplayPlaybackInit == 0) {
    uVar4 = *(undefined1 *)(*param_1 * 10 + *(int *)(param_1[3] + 4));
    uVar2 = GetChampionshipTrackIndex(uVar4,0xffffffff);
    FUN_80066d68(&g_TimeAttackBuffer,uVar2,uVar4,0,0);
    uVar5 = GetDefaultCarIndex(*(undefined1 *)(*param_1 * 10 + *(int *)(param_1[3] + 4)));
    iVar6 = FUN_800673bc();
    iVar7 = FUN_80067470();
    cVar3 = FUN_80067870(uVar5 & 0xff);
    if (cVar3 == '\0') {
      bVar1 = *(byte *)(iVar6 + 0x1f);
    }
    else {
      bVar1 = *(byte *)(iVar6 + 0x20);
    }
    InitGhostCarDisplay(DAT_800cdd18,*(undefined1 *)(iVar7 + (uVar5 & 0xff)),
                        g_CarModelBuffer + (uint)bVar1 * 0x14);
    FUN_8007cdf8(param_1);
    ClearVRAMRegion(&g_ReplayPaletteRegion);
    iVar7 = 0;
    uVar5 = FUN_800677c8(*(undefined1 *)(*param_1 * 10 + *(int *)(param_1[3] + 4)));
    iVar6 = (uVar5 & 0xff) * 0x1c;
    do {
      iVar11 = iVar7 << 4;
      puVar8 = (undefined4 *)((int)&g_ReplayPaletteTable + iVar6);
      iVar6 = iVar6 + 4;
      iVar7 = iVar7 + 1;
      LoadPalette(&g_ReplayPaletteRegion,0,iVar11,*puVar8);
      VsyncWait();
    } while (iVar7 != 7);
  }
  if ((g_PadButtons & 0x60) == 0) {
    if ((g_PadButtons & 0x90) != 0) {
      PlaySFX(0x11);
      g_GameState = 0x12;
    }
  }
  else {
    PlaySFX(0x10);
    puVar9 = (undefined1 *)GetChampionshipData();
    *puVar9 = (char)*param_1;
    puVar9[2] = *(undefined1 *)(*param_1 * 10 + *(int *)(param_1[3] + 4));
    uVar4 = FUN_800677c8(*(undefined1 *)(*param_1 * 10 + *(int *)(param_1[3] + 4)));
    puVar9[1] = uVar4;
    uVar4 = GetDefaultCarIndex(*(undefined1 *)(*param_1 * 10 + *(int *)(param_1[3] + 4)));
    puVar9[3] = uVar4;
    *(undefined2 *)(puVar9 + 6) = *(undefined2 *)(*param_1 * 10 + *(int *)(param_1[3] + 4) + 2);
    *(undefined2 *)(puVar9 + 8) = *(undefined2 *)(*param_1 * 10 + *(int *)(param_1[3] + 4) + 4);
    *(undefined2 *)(puVar9 + 10) = *(undefined2 *)(*param_1 * 10 + *(int *)(param_1[3] + 4) + 6);
    *(undefined2 *)(puVar9 + 0xc) = *(undefined2 *)(*param_1 * 10 + *(int *)(param_1[3] + 4) + 8);
    iVar6 = GetRaceTypePtr();
    *(undefined1 *)(iVar6 + 3) = *(undefined1 *)(*param_1 * 10 + *(int *)(param_1[3] + 4) + 1);
    iVar6 = GetCarData();
    *(undefined1 *)(iVar6 + 4) = 3;
    g_GameState = 0x1a;
  }
  iVar6 = FUN_80066d8c(&g_TimeAttackBuffer);
  if (iVar6 == -1) {
    FUN_80067090(&g_TimeAttackBuffer);
    FUN_80067008(&g_TimeAttackBuffer,DAT_800cbb9c + 4);
    g_TimeAttackVRAMY2 = g_TimeAttackVRAMY2 + 4;
  }
  iVar6 = GetRaceSprite1();
  iVar7 = FUN_8006719c();
  iVar11 = FUN_800673bc();
  iVar10 = (uint)*(ushort *)(iVar7 + 0xc6) << 0x10;
  iVar10 = (iVar10 >> 0x10) - (iVar10 >> 0x1f) >> 1;
  FUN_80066010(g_CarModelBuffer + (uint)*(byte *)(iVar11 + 0xc) * 0x14,
               (int)((*(ushort *)(iVar7 + 0xc0) + 0x30) * 0x10000) >> 0x10,
               (int)(((uint)*(ushort *)(iVar7 + 0xc2) + iVar10 + 4) * 0x10000) >> 0x10,
               (int)((*(ushort *)(iVar7 + 0xc4) - 0x60) * 0x10000) >> 0x10,iVar10,g_RaceOTPtr1 + 4);
  DrawSpriteScaled(iVar6 + 4,iVar7 + 0xc0,g_RaceOTPtr1 + 4);
  uVar4 = GetDefaultCarIndex(*(undefined1 *)(*param_1 * 10 + *(int *)(param_1[3] + 4)));
  uVar4 = FUN_80067870(uVar4);
  FUN_8007d6a0(param_1,g_ReplayPlaybackInit & 0xff,uVar4,0xffffffff);
  g_ReplayPlaybackInit = g_ReplayPlaybackInit + 8;
  if (0xff < (int)g_ReplayPlaybackInit) {
    g_ReplayPlaybackInit = 0xff;
  }
  return UpdateReplayPlayback2;
}


