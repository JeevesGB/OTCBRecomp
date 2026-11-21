/* Function: State_ReplayPlayback */
/* Address: 8007e9f8 */

void State_ReplayPlayback(void)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined *puVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  int iVar12;
  undefined **ppuVar13;
  code *pcVar14;
  int local_40;
  uint local_3c;
  undefined1 *local_38;
  int *local_34;
  undefined4 local_30;
  
  iVar2 = g_GameState;
  memset((uchar *)&local_40,'\0',0x10);
  pcVar14 = (code *)&UNK_8007da9c;
  g_ReplayPlaybackInit = 0;
  InitCarSelect();
  DrawSync(0);
  iVar4 = GetCarReplayData();
  local_40 = 0;
  local_3c = GetReplayCarIndex(*(undefined1 *)(iVar4 + 0x11));
  local_3c = local_3c & 0xff;
  local_38 = (undefined1 *)GetReplayCarData();
  local_30 = 8;
  local_34 = (int *)GetReplayLapData(local_3c,*local_38);
  iVar9 = *local_34;
  iVar4 = HasReplayData(local_38 + 1,iVar9);
  if (iVar4 != 0) {
    pcVar14 = UpdateReplayPlayback2;
    local_40 = iVar9 + -1;
    local_30 = 9;
  }
  iVar12 = 0;
  BreakDraw();
  InitGameSystems();
  InitMenuHeap();
  InitMemoryState();
  InitRenderer(&g_TimeAttackDisplayConfig);
  g_GTEScale = 0x400;
  g_GTEMaxVal = 0x3f;
  JOY_MCD_BAUD = 0x1f;
  SetGTEParams();
  ActivateDisplay();
  InitRenderQueue();
  psVar5 = (short *)GetReplaySpritePositions2();
  iVar4 = GetReplayModelData2();
  iVar9 = MemAllocTemp(0x140);
  uVar6 = GsGetWorkBase();
  LoadCDFile(0x135,uVar6);
  uVar6 = GsGetWorkBase();
  RelocateData(uVar6,iVar9);
  do {
    iVar11 = 0;
    psVar10 = psVar5;
    do {
      sVar3 = *psVar10;
      psVar1 = psVar10 + 1;
      psVar10 = psVar10 + 2;
      pbVar7 = (byte *)(iVar4 + iVar11);
      iVar11 = iVar11 + 1;
      DrawSprite(iVar9 + (uint)*pbVar7 * 0x14,(int)sVar3,(int)*psVar1,g_MenuAnimPtr + 4);
      VsyncWait();
    } while (iVar11 != 5);
    iVar12 = iVar12 + 1;
  } while (iVar12 != 2);
  VsyncWait();
  MemFreeTemp(iVar9);
  InitReplayPlayback(&local_40);
  iVar4 = MemAlloc(0x20000);
  uVar6 = MemAlloc(0x800);
  SetupRaceBuffers(&g_TimeAttackBuffer,0x340,0x100,0x380,0x100,0x3d0,0x100,iVar4,iVar4 + 0x10000,
                   uVar6);
  g_TimeAttackFlag2 = 0xff80;
  g_TimeAttackVRAMX = 0x70;
  g_TimeAttackVRAMW = 0x938;
  g_TimeAttackVRAMX2 = 0x50;
  g_TimeAttackVRAMY2 = 0xa00;
  g_RaceViewX = 0x3c0;
  g_RaceViewY = 0x100;
  g_RaceScreenW = 0x3f0;
  g_TimeAttackFlag3 = 0;
  g_RaceScreenH = 0x1db;
  LoadAudioBank();
  FadeAudioVolume(0x100);
  sVar3 = LookupTable(local_30);
  LoadMusicTrack((int)sVar3);
  PlayMusicTrack(0,0);
  LoadCLUT(0,0x2c0,0x1ff);
  ClearVRAMRegion(&g_ReplayPaletteRegion);
  iVar4 = 0;
  ppuVar13 = &g_ReplayPaletteTable;
  do {
    iVar9 = iVar4 << 4;
    puVar8 = *ppuVar13;
    ppuVar13 = ppuVar13 + 1;
    iVar4 = iVar4 + 1;
    LoadPalette(&g_ReplayPaletteRegion,0,iVar9,puVar8);
    VsyncWait();
  } while (iVar4 != 7);
  g_DisplayActive = 0;
  while (g_GameState == iVar2) {
    pcVar14 = (code *)(*pcVar14)(&local_40);
    ProcessRenderQueue();
    UpdateGhostDisplay();
    VsyncWait();
  }
  CleanupRace();
  FadeOutTransition();
  StopCurrentSEQ();
  return;
}


