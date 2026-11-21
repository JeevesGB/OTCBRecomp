/* Function: State_ReplayTrackSelect */
/* Address: 8002a2a4 */

void State_ReplayTrackSelect(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  iVar1 = g_GameState;
  ClearVRAM(0,0,0);
  DrawSync(0);
  InitGameSystems();
  InitMenuHeap();
  InitMemoryState();
  InitRenderer(&g_ReplayTrackDisplayConfig);
  ActivateDisplay();
  InitRenderQueue();
  g_SubState1 = 0;
  g_SubState2 = 0;
  g_MenuPage = 0;
  g_ReplayFlag1 = 0;
  g_MenuFlag = 0;
  g_MenuSelection = 0;
  g_ReplayTrackFlag = 0;
  iVar3 = GetCarReplayData();
  g_MenuSelection = (ushort)*(byte *)(iVar3 + 0x10);
  g_ReplayTrackBuffer = MemAllocTemp(0x708);
  uVar4 = GsGetWorkBase();
  LoadCDFile(0x12e,uVar4);
  uVar4 = GsGetWorkBase();
  RelocateData(uVar4,g_ReplayTrackBuffer);
  g_ReplayTrackGeometry = MemAlloc(0x23000);
  LoadCDFile(0x110);
  LoadAudioBank();
  FadeAudioVolume(0xff);
  sVar2 = LookupTable(0xf);
  LoadMusicTrack((int)sVar2);
  PlayMusicTrack(0,0);
  g_DisplayActive = 0;
  g_ReplayPrevSelection = -1;
  while (g_GameState == iVar1) {
    (*(code *)(&g_ReplayTrackSubStateTable1)[g_SubState1])();
    (*(code *)(&g_ReplayTrackSubStateTable2)[g_SubState2])();
    g_ReplayPrevSelection = (int)(short)g_MenuSelection;
    g_ColorCycle = g_ColorCycle - 6;
    if (g_ColorCycle < 0x40) {
      g_ColorCycle = 0xa0;
    }
    g_AnimTimer = g_AnimTimer + '\x04';
    ProcessRenderQueue();
    VsyncWait();
  }
  puVar5 = (undefined1 *)GetCarData();
  if (puVar5[5] == '\x01') {
    *puVar5 = 4;
    g_GameState = 0xe;
  }
  FadeOutTransition();
  StopCurrentSEQ();
  ClearVRAM(0,0,0);
  VsyncWait();
  return;
}


