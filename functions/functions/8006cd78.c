/* Function: State_CourseSelect */
/* Address: 8006cd78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void State_CourseSelect(void)

{
  int iVar1;
  short sVar2;
  byte *pbVar3;
  undefined4 uVar4;
  
  iVar1 = g_GameState;
  pbVar3 = (byte *)GetCourseData();
  g_CourseSelectData = (uint)*pbVar3;
  InitCarSelect();
  DrawSync(0);
  BreakDraw();
  InitGameSystems();
  InitMenuHeap();
  InitMemoryState();
  InitRenderer(&g_CarSelectDisplayConfig);
  ActivateDisplay();
  InitRenderQueue();
  InitCourseSelect();
  g_CarModelBuffer = MemAllocTemp(0xa00);
  uVar4 = GsGetWorkBase();
  LoadCDFile(0x10e,uVar4);
  uVar4 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar4,g_CarModelBuffer);
  _g_CourseDisplayInit = 0;
  _g_CourseSelectFlag = 0;
  LoadAudioBank();
  FadeAudioVolume(0x100);
  sVar2 = LookupTable(2);
  LoadMusicTrack((int)sVar2);
  PlayMusicTrack(0,0);
  g_DisplayActive = 0;
  while (g_GameState == iVar1) {
    UpdateCourseSelect();
    ProcessRenderQueue();
    VsyncWait();
  }
  FadeOutTransition();
  StopCurrentSEQ();
  *pbVar3 = (byte)g_CourseSelectData;
  return;
}


