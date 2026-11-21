/* Function: State_Race */
/* Address: 800767d4 */

void State_Race(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  char *pcVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  undefined **ppuVar9;
  code *pcVar10;
  code *pcVar11;
  uchar auStack_98 [96];
  code *local_38;
  int local_34;
  
  pcVar10 = UpdateRace_1P;
  local_38 = (code *)&UpdateRace_2P_Player1;
  pcVar11 = (code *)&UpdateRace_2P_Player2;
  memset(auStack_98,'\0',0x5c);
  g_RaceFrameCount = '\0';
  local_34 = g_GameState;
  InitCarSelect();
  DrawSync(0);
  BreakDraw();
  InitGameSystems();
  InitMenuHeap();
  InitMemoryState();
  InitRaceVRAM();
  InitRenderer(&g_RaceDisplayConfig);
  g_GTEScale = 0x400;
  g_GTEMaxVal = 0x3f;
  JOY_MCD_BAUD = 0x1f;
  SetGTEParams();
  ActivateDisplay();
  InitRenderQueue();
  InitRaceAssets();
  LoadAudioBank();
  FadeAudioVolume(0x100);
  sVar1 = LookupTable(0);
  LoadMusicTrack((int)sVar1);
  PlayMusicTrack(0,0);
  LoadCLUT(0,0x2c0,0x1ff);
  iVar2 = MemAlloc(0x30000);
  uVar3 = MemAlloc(0x800);
  SetupRaceBuffers(&g_RaceBuffer1,0x300,0x100,0x340,0x100,0x3d0,0x100,iVar2,iVar2 + 0x20000,uVar3);
  SetupRaceBuffers(&g_RaceBuffer2,0x380,0x100,0x340,0x180,0x3e0,0x100,iVar2 + 0x10000,
                   iVar2 + 0x20000,uVar3);
  g_RaceViewX = 0x3c0;
  g_RaceViewY = 0x100;
  g_RaceScreenW = 0x3f0;
  g_RaceScreenH = 0x1db;
  g_RaceVRAMX1 = 0x50;
  g_RaceVRAMY1 = 0xa00;
  g_RaceVRAMFlag1 = 0;
  g_RaceVRAMX2 = 0x50;
  g_RaceVRAMY2 = 0xa00;
  g_RaceVRAMFlag2 = 0;
  ClearVRAMRegion(&g_RacePaletteRegion);
  DrawSync(0);
  VsyncWait();
  pbVar4 = (byte *)GetCarData();
  iVar2 = GetCarReplayData();
  if (*pbVar4 - 4 < 2) {
    pcVar10 = (code *)&g_UpdateRace_2P;
    iVar8 = 0;
    ppuVar9 = &g_CarPaletteTable_A;
    do {
      iVar6 = iVar8 << 4;
      puVar7 = *ppuVar9;
      ppuVar9 = ppuVar9 + 1;
      iVar8 = iVar8 + 1;
      LoadPalette(&g_RacePaletteRegion,0,iVar6,puVar7);
    } while (iVar8 != 5);
  }
  else {
    iVar8 = 0;
    ppuVar9 = &g_CarPaletteTable_B;
    do {
      iVar6 = iVar8 << 4;
      puVar7 = *ppuVar9;
      ppuVar9 = ppuVar9 + 1;
      iVar8 = iVar8 + 1;
      LoadPalette(&g_RacePaletteRegion,0,iVar6,puVar7);
    } while (iVar8 != 5);
  }
  VsyncWait();
  VsyncWait();
  if (pbVar4[7] == 1) {
    iVar8 = 0;
    switch(*pbVar4) {
    case 0:
      iVar8 = iVar2;
      break;
    case 2:
    case 3:
      iVar8 = iVar2 + 10;
      break;
    case 4:
    case 5:
      iVar8 = iVar2 + 0xf;
    }
    LoadReplayData(auStack_98,iVar8);
    pcVar10 = UpdateRace_Replay;
    pbVar4[7] = 0;
  }
  VsyncWait();
  g_DisplayActive = 0;
  SetRaceActive(0xffffffff);
  if (g_GameState == local_34) {
    do {
      pcVar5 = (char *)GetCarData();
      if (*pcVar5 == '\x01') {
        local_38 = (code *)(*local_38)(auStack_98);
        pcVar11 = (code *)(*pcVar11)(auStack_98);
      }
      else {
        pcVar10 = (code *)(*pcVar10)(auStack_98);
      }
      g_RaceColorCycle = g_RaceColorCycle + -6;
      if (g_RaceColorCycle < 0x40) {
        g_RaceColorCycle = 0xa0;
      }
      RenderRace();
      ProcessRenderQueue();
      VsyncWait();
      g_RaceFrameCount = g_RaceFrameCount + '\x01';
    } while (g_GameState == local_34);
  }
  SetRaceActive(0);
  CleanupRace();
  FadeOutTransition();
  StopCurrentSEQ();
  return;
}


