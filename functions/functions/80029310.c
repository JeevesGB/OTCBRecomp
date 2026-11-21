/* Function: State_ReplayViewer */
/* Address: 80029310 */

void State_ReplayViewer(void)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  
  iVar1 = g_GameState;
  ClearVRAM(0,0,0);
  DrawSync(0);
  InitGameSystems();
  InitMenuHeap();
  InitMemoryState();
  InitRenderer(&g_ReplayDisplayConfig);
  ActivateDisplay();
  InitRenderQueue();
  g_SubState1 = 0;
  g_SubState2 = 0;
  g_MenuSelection = 0;
  g_MenuPage = 0;
  g_ReplayFlag1 = 0;
  g_MenuFlag = 0;
  g_MenuTimer = 0;
  g_ReplayFlag2 = 0;
  g_ReplayFlag3 = 0;
  g_ReplaySpriteBuffer = MemAlloc(0x4b0);
  uVar3 = GsGetWorkBase();
  LoadCDFile(300,uVar3);
  uVar3 = GsGetWorkBase();
  RelocateData(uVar3,g_ReplaySpriteBuffer);
  SetSpriteTexture(0,0xe,0xe,g_ReplaySpriteBuffer + 0x230);
  SetActiveSpriteSlot(0,0);
  LoadAudioBank();
  FadeAudioVolume(0xff);
  sVar2 = LookupTable(0xf);
  LoadMusicTrack((int)sVar2);
  PlayMusicTrack(0,0);
  g_DisplayActive = 0;
  while (g_GameState == iVar1) {
    (*(code *)(&g_ReplaySubStateTable1)[g_SubState1])();
    (*(code *)(&g_ReplaySubStateTable2)[g_SubState2])();
    g_ColorCycle = g_ColorCycle - 6;
    if (g_ColorCycle < 0x40) {
      g_ColorCycle = 0xa0;
    }
    g_AnimTimer = g_AnimTimer + '\b';
    ProcessRenderQueue();
    VsyncWait();
  }
  FadeOutTransition();
  ClearVRAM(0,0,0);
  VsyncWait();
  return;
}


