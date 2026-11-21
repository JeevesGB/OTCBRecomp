/* Function: State_SoundTest */
/* Address: 8002acd8 */

void State_SoundTest(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = g_GameState;
  ClearVRAM(0,0,0);
  DrawSync(0);
  InitGameSystems();
  InitMenuHeap();
  InitMemoryState();
  InitRenderer(&g_SoundTestDisplayConfig);
  ActivateDisplay();
  InitRenderQueue();
  g_SubState1 = 0;
  g_SubState2 = 0;
  g_MenuTimer = 0;
  g_SoundTestFlag1 = 0;
  g_SoundTestFlag2 = 0;
  g_SoundTestFlag3 = 0;
  g_SoundTestFlag4 = 0;
  g_SoundTestFlag5 = 0;
  g_SoundTestFlag6 = 0;
  g_SoundTestFlag7 = 0;
  g_SoundTestBuffer = MemAllocTemp(0xa28);
  uVar2 = GsGetWorkBase();
  LoadCDFile(0x12d,uVar2);
  uVar2 = GsGetWorkBase();
  RelocateData(uVar2,g_SoundTestBuffer);
  SetDisplayParams(0xffffffff,0xffffffff,g_SavedVolume,0xffffffff,0xffffffff);
  InitSoundTest();
  SetSoundTestTrack(10);
  FadeAudioVolume(0x100);
  StartSoundTest();
  g_DisplayActive = 0;
  InitSoundTestDisplay();
  while (g_GameState == iVar1) {
    (*(code *)(&g_SoundTestSubStateTable1)[g_SubState1])();
    (*(code *)(&g_SoundTestSubStateTable2)[g_SubState2])();
    UpdateSoundTest();
    ProcessRenderQueue();
    VsyncWait();
  }
  FadeOutTransition();
  ClearVRAM(0,0,0);
  VsyncWait();
  return;
}


