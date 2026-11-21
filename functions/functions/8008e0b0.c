/* Function: State_RaceResults */
/* Address: 8008e0b0 */

void State_RaceResults(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = g_GameState;
  g_RaceResultsFlag = 0;
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
  InitRaceResults();
  iVar3 = MemAlloc(0x30000);
  uVar4 = MemAlloc(0x800);
  SetupRaceBuffers(&g_TimeAttackBuffer,0x340,0x100,0x380,0x100,0x3d0,0x100,iVar3,iVar3 + 0x18000,
                   uVar4);
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
  sVar2 = LookupTable(0xb);
  LoadMusicTrack((int)sVar2);
  PlayMusicTrack(0,0);
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    iVar5 = GetRaceSprite1();
    iVar6 = GetResultsSpriteData();
    DrawRaceSpriteEx(iVar6 + 0x50,iVar6 + 0x50,iVar5 + 0x164,iVar5 + 0x164,0xff,g_RaceOTPtr1 + 4);
    DrawRaceSpriteEx(iVar6 + 0x58,iVar6 + 0x58,iVar5 + 0x174,iVar5 + 0x174,0xff,g_RaceOTPtr1 + 4);
    VsyncWait();
  } while (iVar3 != 2);
  g_DisplayActive = 0;
  while (g_GameState == iVar1) {
    UpdateRaceResults();
    ProcessRenderQueue();
    VsyncWait();
  }
  CleanupRace();
  FadeOutTransition();
  StopCurrentSEQ();
  return;
}


