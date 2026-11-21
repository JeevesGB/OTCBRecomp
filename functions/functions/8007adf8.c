/* Function: State_GhostCarSelect */
/* Address: 8007adf8 */

void State_GhostCarSelect(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  code *pcVar9;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  pcVar9 = UpdateGhostCarSelect;
  iVar5 = GetCourseData();
  local_38 = (uint)*(byte *)(iVar5 + 3);
  iVar6 = GetCourseData();
  iVar5 = g_GameState;
  local_4c = (uint)*(byte *)(iVar6 + 4);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_50 = local_38;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_34 = local_4c;
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
  uVar7 = GsGetWorkBase();
  LoadCDFile(0x11f,uVar7);
  uVar7 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar7,g_CarModelBuffer);
  SetSpriteTexture(0,0xe,0xe,g_CarModelBuffer);
  SetActiveSpriteSlot(0,0);
  uVar7 = GsGetWorkBase();
  LoadCDFile(0x114,uVar7);
  uVar7 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar7,g_CarModelBuffer);
  g_GhostCarBuffer = MemAlloc(0x92000);
  LoadCDFile(0x115);
  LoadAudioBank();
  FadeAudioVolume(0x100);
  sVar4 = LookupTable(1);
  LoadMusicTrack((int)sVar4);
  PlayMusicTrack(0,0);
  g_DisplayActive = 0;
  iVar6 = GetGhostCarTable(local_50);
  bVar1 = *(byte *)(iVar6 + local_4c);
  iVar6 = GetGhostCarData();
  iVar8 = GetGhostTrackData();
  InitGhostCarDisplay(g_GhostCarBuffer,*(undefined1 *)(iVar8 + (uint)bVar1),
                      g_CarModelBuffer + (uint)*(byte *)(iVar6 + 0x2a) * 0x14);
  uVar3 = local_4c;
  uVar2 = local_50;
  SetupGhostRaceBuffers(0);
  RenderGhostCarSelect(0,0x80,uVar2,uVar3,0);
  VsyncWait();
  uVar3 = local_4c;
  uVar2 = local_50;
  SetupGhostRaceBuffers(0);
  RenderGhostCarSelect(0,0x80,uVar2,uVar3,0);
  VsyncWait();
  while (g_GameState == iVar5) {
    pcVar9 = (code *)(*pcVar9)(&local_50);
    ProcessRenderQueue();
    UpdateGhostDisplay();
    VsyncWait();
  }
  iVar5 = GetCourseData();
  *(undefined1 *)(iVar5 + 3) = (undefined1)local_50;
  iVar5 = GetCourseData();
  *(undefined1 *)(iVar5 + 4) = (undefined1)local_4c;
  FadeOutTransition();
  StopCurrentSEQ();
  return;
}


