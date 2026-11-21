/* Function: State_GhostRace */
/* Address: 8007c7d8 */

void State_GhostRace(void)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  
  iVar2 = g_GameState;
  g_GhostRaceFlag1 = 0;
  g_GhostRaceFlag2 = 0;
  InitCarSelect();
  DrawSync(0);
  iVar11 = 0;
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
  psVar4 = (short *)GetGhostSpritePositions();
  iVar5 = GetGhostModelData();
  iVar6 = MemAllocTemp(0x140);
  uVar7 = GsGetWorkBase();
  LoadCDFile(0x130,uVar7);
  uVar7 = GsGetWorkBase();
  RelocateData(uVar7,iVar6);
  do {
    iVar10 = 0;
    psVar9 = psVar4;
    do {
      sVar3 = *psVar9;
      psVar1 = psVar9 + 1;
      psVar9 = psVar9 + 2;
      pbVar8 = (byte *)(iVar5 + iVar10);
      iVar10 = iVar10 + 1;
      DrawSprite(iVar6 + (uint)*pbVar8 * 0x14,(int)sVar3,(int)*psVar1,g_MenuAnimPtr + 4);
      VsyncWait();
    } while (iVar10 != 5);
    iVar11 = iVar11 + 1;
  } while (iVar11 != 2);
  VsyncWait();
  MemFreeTemp(iVar6);
  InitGhostRaceAssets();
  iVar5 = MemAlloc(0x30000);
  uVar7 = MemAlloc(0x800);
  SetupRaceBuffers(&g_TimeAttackBuffer,0x340,0x100,0x380,0x100,0x3d0,0x100,iVar5,iVar5 + 0x18000,
                   uVar7);
  g_TimeAttackFlag2 = 0x94;
  g_TimeAttackVRAMX = 0x60;
  g_TimeAttackVRAMW = 0x778;
  g_TimeAttackVRAMX2 = 0x50;
  g_TimeAttackVRAMY2 = 0xa00;
  g_RaceViewX = 0x3c0;
  g_RaceViewY = 0x100;
  g_RaceScreenW = 0x3f0;
  g_TimeAttackFlag3 = 0;
  g_RaceScreenH = 0x1db;
  LoadAudioBank();
  FadeAudioVolume(0x100);
  sVar3 = LookupTable(5);
  LoadMusicTrack((int)sVar3);
  PlayMusicTrack(0,0);
  g_DisplayActive = 0;
  while (g_GameState == iVar2) {
    UpdateGhostRace();
    ProcessRenderQueue();
    VsyncWait();
  }
  CleanupRace();
  FadeOutTransition();
  StopCurrentSEQ();
  return;
}


