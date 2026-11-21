/* Function: State_ChampionshipStandings */
/* Address: 8008bfc4 */

void State_ChampionshipStandings(void)

{
  ushort uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = g_GameState;
  g_StandingsFlag1 = 0;
  g_StandingsFlag2 = 0;
  g_StandingsFlag3 = 0;
  iVar4 = GetChampionshipData();
  if (g_DebugFlag == 0) {
    uVar1 = *(ushort *)(iVar4 + 8);
  }
  else {
    if (g_DebugFlag < 1) {
      if (g_DebugFlag == -1) {
        g_StandingsRoundCount = 0;
      }
      goto LAB_8008c07c;
    }
    if (g_DebugFlag != 1) goto LAB_8008c07c;
    uVar1 = *(ushort *)(iVar4 + 6);
  }
  g_StandingsRoundCount = (uint)uVar1;
LAB_8008c07c:
  g_StandingsFlag4 = 0;
  g_StandingsFlag5 = 0;
  InitCarSelect();
  DrawSync(0);
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
  g_CarModelBuffer = MemAllocTemp(0xa00);
  uVar5 = GsGetWorkBase();
  LoadCDFile(0x11f,uVar5);
  uVar5 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar5,g_CarModelBuffer);
  SetSpriteTexture(0,0xe,0xe,g_CarModelBuffer);
  SetActiveSpriteSlot(0,0);
  uVar5 = GsGetWorkBase();
  LoadCDFile(0x10f,uVar5);
  uVar5 = GsGetWorkBase();
  RelocateData(uVar5,g_CarModelBuffer);
  uVar5 = GsGetWorkBase();
  LoadCDFile(0x11c,uVar5);
  uVar5 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar5,g_CarModelBuffer);
  iVar4 = MemAlloc(0x30000);
  uVar5 = MemAlloc(0x800);
  SetupRaceBuffers(&g_TimeAttackBuffer,0x340,0x100,0x380,0x100,0x3d0,0x100,iVar4,iVar4 + 0x18000,
                   uVar5);
  g_TimeAttackVRAMX = 0x30;
  g_TimeAttackVRAMW = 0x718;
  g_TimeAttackVRAMX2 = 0x50;
  g_TimeAttackVRAMY2 = 0xa00;
  g_RaceViewX = 0x3c0;
  g_RaceViewY = 0x100;
  g_RaceScreenW = 0x3f0;
  g_TimeAttackFlag2 = 0;
  g_TimeAttackFlag3 = 0;
  g_RaceScreenH = 0x1db;
  LoadAudioBank();
  FadeAudioVolume(0x100);
  uVar5 = 0x11;
  if (g_DebugFlag == 1) {
    uVar5 = 10;
  }
  sVar3 = LookupTable(uVar5);
  LoadMusicTrack((int)sVar3);
  PlayMusicTrack(0,0);
  uVar5 = GetChampionshipData();
  uVar6 = GetCarReplayData();
  UpdateChampionshipStandings(uVar5,uVar6,(int)g_DebugFlag);
  InitChampionshipStandings();
  g_DisplayActive = 0;
  while (g_GameState == iVar2) {
    UpdateChampionshipStandings2();
    UpdateGhostDisplay();
    ProcessRenderQueue();
    VsyncWait();
  }
  CleanupRace();
  FadeOutTransition();
  StopCurrentSEQ();
  return;
}


