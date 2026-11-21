/* Function: State_PartsSelect */
/* Address: 800810cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void State_PartsSelect(void)

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
  g_PartsSelectFlag1 = 0;
  _g_PartsSelectFlag2 = 0;
  InitCarSelect();
  DrawSync(0);
  iVar11 = 0;
  BreakDraw();
  InitGameSystems();
  InitMenuHeap();
  InitMemoryState();
  InitRenderer(&g_CarSelectDisplayConfig);
  ActivateDisplay();
  InitRenderQueue();
  psVar4 = (short *)GetPartsSpritePositions();
  iVar5 = GetPartsModelData();
  iVar6 = MemAllocTemp(0x140);
  uVar7 = GsGetWorkBase();
  LoadCDFile(0x138,uVar7);
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
    } while (iVar10 != 10);
    iVar11 = iVar11 + 1;
  } while (iVar11 != 2);
  VsyncWait();
  MemFreeTemp(iVar6);
  InitPartsSelect();
  LoadAudioBank();
  FadeAudioVolume(0x100);
  sVar3 = LookupTable(6);
  LoadMusicTrack((int)sVar3);
  PlayMusicTrack(0,0);
  g_DisplayActive = 0;
  while (g_GameState == iVar2) {
    UpdatePartsSelect();
    ProcessRenderQueue();
    VsyncWait();
  }
  FadeOutTransition();
  StopCurrentSEQ();
  return;
}


