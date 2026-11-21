/* Function: State_RaceEngine */
/* Address: 8002c9bc */

void State_RaceEngine(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  InitGameSystems();
  InitGraphics();
  SetHeapBase(PTR_DAT_8001bbf8);
  SetVRAMBase(&DAT_801f8000);
  if (g_SavedClass == '\0') {
    g_RaceClass = 0;
  }
  else {
    g_RaceClass = 0xffff;
  }
  if (g_SavedCourse == '\0') {
    g_RaceCourse = 0;
  }
  else {
    g_RaceCourse = 0xffff;
  }
  g_RaceFlag = 0xffff;
  g_RaceComplete = 0;
  g_RaceLap = 0;
  g_RacePosition = 0;
  g_RaceActive = 0;
  g_RaceRetired = 0;
  InitRaceData();
  InitRaceTrack();
  InitRaceAI();
  InitMemoryState();
  InitRaceCars();
  do {
    InitHeap3((ulong *)&DAT_801f8000,0x7400);
    uVar1 = GsGetWorkBase();
    iVar2 = GetHeapEnd();
    iVar3 = GsGetWorkBase();
    InitHeapBlock(uVar1,(iVar2 - iVar3) + -8);
    InitRenderQueue();
    UpdateRaceLogic();
    UpdateCarPhysics();
    UpdateTrackCollision(&g_TrackCollisionData);
    UpdateAI();
    UpdateCamera();
    UpdateRaceSound();
    UpdateParticles();
    UpdateHUD();
    UpdateReplayRecord();
    RenderScene();
    UpdateRaceAudio();
    RaceRenderLoop();
    if ((g_PadButtons3 & 0x2100) == 0x2100) {
      g_DebugFlag = 1;
    }
    UpdatePadInput();
    UpdateTransmission();
    BreakDraw();
    g_DrawSyncFlag = 0;
    SsUtAllKeyOff(0);
  } while (g_RaceActive != 0);
  CleanupRaceEngine();
  if (g_RaceRetired == 0) {
    g_GameState = 0x19;
  }
  else {
    g_GameState = 10;
  }
  return;
}


