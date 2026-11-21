/* Function: State_MainMenu */
/* Address: 800277a4 */

void State_MainMenu(void)

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
  InitRenderer(&g_MenuDisplayConfig);
  ActivateDisplay();
  InitRenderQueue();
  InitMenuState();
  g_MenuSpriteBuffer = MemAlloc(0x4b0);
  uVar3 = GsGetWorkBase();
  LoadCDFile(299,uVar3);
  uVar3 = GsGetWorkBase();
  RelocateData(uVar3,g_MenuSpriteBuffer);
  SetSpriteTexture(0,0xe,0xe,g_MenuSpriteBuffer + 0x2d0);
  SetActiveSpriteSlot(0,0);
  LoadAudioBank();
  FadeAudioVolume(0xff);
  sVar2 = LookupTable(0xe);
  LoadMusicTrack((int)sVar2);
  PlayMusicTrack(0,0);
  LoadCLUT(0,0x3f0,0x1fd);
  g_VRAMRegionPtr = &g_MenuVRAMRegion;
  ClearVRAMRegion();
  g_DisplayActive = 0;
  while (g_GameState == iVar1) {
    UpdatePadState();
    (*(code *)(&g_SubStateTable1)[g_SubState1])();
    (*(code *)(&g_SubStateTable2)[g_SubState2])();
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


