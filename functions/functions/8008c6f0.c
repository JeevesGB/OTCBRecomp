/* Function: State_ChampionshipEnding */
/* Address: 8008c6f0 */

void State_ChampionshipEnding(void)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = g_GameState;
  g_EndingFlag1 = 0;
  g_EndingFlag2 = 0;
  g_EndingFlag3 = 0;
  InitCarSelect();
  DrawSync(0);
  BreakDraw();
  InitGameSystems();
  InitMenuHeap();
  InitMemoryState();
  InitRenderer(&g_CarSelectDisplayConfig);
  ActivateDisplay();
  InitRenderQueue();
  g_CarModelBuffer = MemAllocTemp(0xa00);
  uVar3 = GsGetWorkBase();
  LoadCDFile(0x11f,uVar3);
  uVar3 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar3,g_CarModelBuffer);
  SetSpriteTexture(0,0xe,0xe,g_CarModelBuffer);
  SetActiveSpriteSlot(0,0);
  uVar3 = GsGetWorkBase();
  LoadCDFile(0x11b,uVar3);
  uVar3 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar3,g_CarModelBuffer);
  g_EndingFlag4 = 0;
  g_EndingFlag5 = 0;
  LoadAudioBank();
  FadeAudioVolume(0x100);
  iVar4 = GetCarReplayData();
  pcVar5 = (char *)GetReplayCarData(*(undefined1 *)(iVar4 + 0x11));
  uVar3 = 0xd;
  if (*pcVar5 == '\0') {
    uVar3 = 0xc;
  }
  iVar4 = 0;
  sVar2 = LookupTable(uVar3);
  LoadMusicTrack((int)sVar2);
  PlayMusicTrack(0,0);
  do {
    iVar4 = iVar4 + 1;
    iVar6 = GetRaceSprite1();
    iVar7 = GetEndingSpriteData();
    DrawRaceSpriteEx(iVar7,iVar7,iVar6 + 0x184,iVar6 + 0x184,0xff,g_RaceOTPtr1 + 4);
    DrawRaceSpriteEx(iVar7 + 8,iVar7 + 8,iVar6 + 0x194,iVar6 + 0x194,0xff,g_RaceOTPtr1 + 4);
    VsyncWait();
  } while (iVar4 != 2);
  g_DisplayActive = 0;
  while (g_GameState == iVar1) {
    UpdateChampionshipEnding();
    UpdateGhostDisplay();
    ProcessRenderQueue();
    VsyncWait();
  }
  FadeOutTransition();
  StopCurrentSEQ();
  return;
}


