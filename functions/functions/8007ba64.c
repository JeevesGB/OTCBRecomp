/* Function: State_TimeAttack */
/* Address: 8007ba64 */

void State_TimeAttack(void)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = g_GameState;
  InitCarSelect();
  DrawSync(0);
  BreakDraw();
  InitGameSystems();
  InitMenuHeap();
  InitRenderer(&g_TimeAttackDisplayConfig);
  g_GTEScale = 0x400;
  g_GTEMaxVal = 0x3f;
  JOY_MCD_BAUD = 0x1f;
  SetGTEParams();
  ActivateDisplay();
  InitRenderQueue();
  InitTimeAttackAssets();
  g_CarModelBuffer = MemAllocTemp(0xa00);
  uVar3 = GsGetWorkBase();
  LoadCDFile(0x10f,uVar3);
  uVar3 = GsGetWorkBase();
  RelocateData(uVar3,g_CarModelBuffer);
  uVar3 = GsGetWorkBase();
  LoadCDFile(0x116,uVar3);
  uVar3 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar3,g_CarModelBuffer);
  g_TimeAttackFlag = 0;
  iVar4 = MemAlloc(0x30000);
  uVar3 = MemAlloc(0x800);
  SetupRaceBuffers(&g_TimeAttackBuffer,0x340,0x100,0x380,0x100,0x3d0,0x100,iVar4,iVar4 + 0x18000,
                   uVar3);
  g_TimeAttackVRAMW = 0x6d8;
  g_TimeAttackVRAMX = 0x50;
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
  sVar2 = LookupTable(4);
  LoadMusicTrack((int)sVar2);
  PlayMusicTrack(0,1);
  g_DisplayActive = 0;
  while (g_GameState == iVar1) {
    UpdateTimeAttack();
    ProcessRenderQueue();
    VsyncWait();
  }
  CleanupRace();
  FadeOutTransition();
  StopCurrentSEQ();
  return;
}


