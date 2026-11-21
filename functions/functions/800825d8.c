/* Function: State_PartsInstall */
/* Address: 800825d8 */

void State_PartsInstall(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  code *pcVar4;
  uint local_20 [2];
  
  iVar1 = g_GameState;
  pcVar4 = UpdatePartsInstall;
  local_20[0] = 0;
  iVar3 = GetCourseData();
  local_20[0] = (uint)*(byte *)(iVar3 + 7);
  InitCarSelect();
  DrawSync(0);
  BreakDraw();
  InitGameSystems();
  InitMenuHeap();
  InitMemoryState();
  InitRenderer(&g_CarSelectDisplayConfig);
  ActivateDisplay();
  InitRenderQueue();
  InitPartsInstallDisplay();
  LoadCLUT(0,0x3c0,0x1ff);
  LoadAudioBank();
  FadeAudioVolume(0x100);
  sVar2 = LookupTable(6);
  LoadMusicTrack((int)sVar2);
  PlayMusicTrack(0,0);
  g_DisplayActive = 0;
  while (g_GameState == iVar1) {
    pcVar4 = (code *)(*pcVar4)(local_20);
    ProcessRenderQueue();
    UpdateGhostDisplay();
    VsyncWait();
  }
  FadeOutTransition();
  StopCurrentSEQ();
  *(undefined1 *)(iVar3 + 7) = (undefined1)local_20[0];
  return;
}


