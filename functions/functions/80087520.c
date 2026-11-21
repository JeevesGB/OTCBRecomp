/* Function: State_GearTuning */
/* Address: 80087520 */

void State_GearTuning(void)

{
  undefined1 uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  code *pcVar13;
  undefined4 local_110;
  int local_10c;
  uint local_ec;
  uint local_e8;
  undefined4 local_e4;
  undefined1 auStack_e0 [176];
  undefined4 local_30;
  int local_2c;
  int local_28;
  
  iVar9 = g_GameState;
  memset((uchar *)&local_110,'\0',0xec);
  pcVar13 = UpdateGearTuning;
  local_110 = 0xffffffff;
  InitCarSelect();
  DrawSync(0);
  iVar4 = GetCarReplayData();
  pbVar5 = (byte *)GetSelectedCarPtr();
  iVar6 = GetReplayCarData(*(undefined1 *)(iVar4 + 0x11));
  iVar7 = GetCarData();
  uVar1 = GetGearRatioData(*pbVar5);
  local_ec = (uint)*(byte *)(iVar4 + 0x11);
  local_e8 = (uint)*pbVar5;
  local_e4 = GetCarTuningData();
  local_30 = GetGearTablePtr(local_ec);
  local_2c = iVar6 + 0x1a;
  local_28 = iVar6 + 6;
  if (*(char *)(iVar7 + 3) == '\0') {
    InitAutoGearRatios(auStack_e0,local_e4,uVar1);
  }
  else {
    InitManualGearRatios(auStack_e0,local_e4);
  }
  BreakDraw();
  InitGameSystems();
  InitMenuHeap();
  InitMemoryState();
  InitRenderer(&g_CarSelectDisplayConfig);
  ActivateDisplay();
  InitRenderQueue();
  InitGearTuningDisplay();
  LoadCLUT(1,0x3c0,0x1ff);
  LoadAudioBank();
  FadeAudioVolume(0x100);
  sVar3 = LookupTable(6);
  LoadMusicTrack((int)sVar3);
  PlayMusicTrack(0,0);
  ClearVRAMRegion(&g_GearTuningPaletteRegion);
  iVar4 = HasCustomGearRatios(auStack_e0,local_30,0);
  if (iVar4 == 0) {
    iVar4 = 0;
    iVar6 = 0xb0;
    do {
      iVar7 = iVar4 << 4;
      puVar8 = (undefined4 *)((int)&g_GearTuningPaletteTable + iVar6);
      iVar6 = iVar6 + 4;
      iVar4 = iVar4 + 1;
      LoadPalette(&g_GearTuningPaletteRegion,0,iVar7,*puVar8);
    } while (iVar4 != 4);
  }
  else {
    iVar4 = 0;
    ppuVar12 = &g_GearTuningPaletteTable;
    do {
      iVar6 = iVar4 << 4;
      puVar11 = *ppuVar12;
      ppuVar12 = ppuVar12 + 1;
      iVar4 = iVar4 + 1;
      LoadPalette(&g_GearTuningPaletteRegion,0,iVar6,puVar11);
    } while (iVar4 != 4);
  }
  VsyncWait();
  iVar4 = GetCarSpriteData();
  iVar6 = GetCarModelOffset();
  InitGhostCarDisplay(g_GearTuningModelBuffer,*(undefined1 *)(iVar6 + local_10c),
                      g_CarModelBuffer + (uint)*(byte *)(iVar4 + 0x3a) * 0x14);
  VsyncWait();
  InitGearDisplay();
  g_DisplayActive = 0;
  while (g_GameState == iVar9) {
    pcVar13 = (code *)(*pcVar13)(&local_110);
    ProcessRenderQueue();
    UpdateGhostDisplay();
    VsyncWait();
  }
  iVar6 = 0;
  FadeOutTransition();
  StopCurrentSEQ();
  iVar9 = GetCarData();
  iVar4 = GetCarReplayData();
  pcVar10 = (char *)GetSelectedCarPtr();
  uVar1 = *(undefined1 *)(iVar4 + 0x11);
  if ((*(char *)(iVar9 + 3) != '\0') || (cVar2 = GetDefaultCarIndex(uVar1), *pcVar10 == cVar2)) {
    iVar6 = -1;
  }
  if (((iVar6 != 0) && (cVar2 = HasTurboKit(uVar1), cVar2 == '\0')) &&
     (iVar9 = GetCarUpgradeSlot(uVar1), iVar9 == -1)) {
    g_GameState = 0x1d;
  }
  return;
}


