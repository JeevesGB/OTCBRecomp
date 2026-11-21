/* Function: State_ReplayCarSelect */
/* Address: 8006d9a4 */

void State_ReplayCarSelect(void)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  char *pcVar9;
  undefined4 uVar10;
  short *psVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_40 [24];
  
  iVar2 = g_GameState;
  g_ReplayCarSelectInit = 0;
  InitCarSelect();
  DrawSync(0);
  iVar13 = 0;
  BreakDraw();
  InitGameSystems();
  InitMenuHeap();
  InitMemoryState();
  InitRenderer(&g_CarSelectDisplayConfig);
  ActivateDisplay();
  InitRenderQueue();
  psVar4 = (short *)GetReplaySpritePositions();
  iVar5 = GetReplayModelData();
  iVar6 = MemAllocTemp(0x140);
  uVar7 = GsGetWorkBase();
  LoadCDFile(0x136,uVar7);
  uVar7 = GsGetWorkBase();
  RelocateData(uVar7,iVar6);
  do {
    iVar12 = 0;
    psVar11 = psVar4;
    do {
      sVar3 = *psVar11;
      psVar1 = psVar11 + 1;
      psVar11 = psVar11 + 2;
      pbVar8 = (byte *)(iVar5 + iVar12);
      iVar12 = iVar12 + 1;
      DrawSprite(iVar6 + (uint)*pbVar8 * 0x14,(int)sVar3,(int)*psVar1,g_MenuAnimPtr + 4);
      VsyncWait();
    } while (iVar12 != 6);
    iVar13 = iVar13 + 1;
  } while (iVar13 != 2);
  VsyncWait();
  MemFreeTemp(iVar6);
  InitReplayCarSelect();
  LoadAudioBank();
  FadeAudioVolume(0x100);
  sVar3 = LookupTable(2);
  LoadMusicTrack((int)sVar3);
  PlayMusicTrack(0,0);
  iVar5 = HasSavedReplay();
  if (iVar5 == 0) {
    SetActiveSpriteSlot(0,0);
    pcVar9 = "-- NONE --";
    uVar7 = 0xfffffff8;
    uVar10 = 0xb0;
  }
  else {
    LoadReplayData2(g_ReplayData,auStack_40);
    SetActiveSpriteSlot(0,4);
    DrawText(auStack_40,0x14,0xb0);
    pcVar9 = (char *)GetCarName(g_ReplayCarIndex._1_1_);
    uVar7 = 0xffffff88;
    uVar10 = 200;
  }
  DrawText(pcVar9,uVar7,uVar10);
  DrawText("REC.CAR",0xffffff88,0xb0);
  g_DisplayActive = 0;
  while (g_GameState == iVar2) {
    UpdateReplayCarSelect();
    ProcessRenderQueue();
    VsyncWait();
  }
  FadeOutTransition();
  StopCurrentSEQ();
  return;
}


