/* Function: State_CarTuning */
/* Address: 8008404c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void State_CarTuning(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined **ppuVar17;
  code *pcVar18;
  undefined4 local_f0 [2];
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  uint local_70;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_64;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  
  iVar9 = g_GameState;
  puVar2 = &g_CarTuningDefaults;
  puVar3 = local_f0;
  do {
    puVar11 = puVar3;
    puVar10 = puVar2;
    uVar14 = puVar10[1];
    uVar15 = puVar10[2];
    uVar16 = puVar10[3];
    *puVar11 = *puVar10;
    puVar11[1] = uVar14;
    puVar11[2] = uVar15;
    puVar11[3] = uVar16;
    puVar2 = puVar10 + 4;
    puVar3 = puVar11 + 4;
  } while (puVar10 + 4 != (undefined4 *)&UNK_80022bf0);
  pcVar18 = UpdateCarTuning;
  uVar14 = puVar10[5];
  uVar15 = puVar10[6];
  puVar11[4] = _UNK_80022bf0;
  puVar11[5] = uVar14;
  puVar11[6] = uVar15;
  _g_CarTuningFlag = 0;
  InitCarSelect();
  DrawSync(0);
  BreakDraw();
  InitGameSystems();
  InitMenuHeap();
  InitMemoryState();
  InitRenderer(&g_CarSelectDisplayConfig);
  ActivateDisplay();
  InitRenderQueue();
  InitCarTuningDisplay(local_f0);
  LoadCLUT(1,0x3c0,0x1ff);
  LoadAudioBank();
  FadeAudioVolume(0x100);
  sVar5 = LookupTable(6);
  LoadMusicTrack((int)sVar5);
  PlayMusicTrack(0,0);
  iVar6 = GetCarReplayData();
  uVar1 = *(undefined1 *)(iVar6 + 0x11);
  iVar6 = GetReplayCarData(uVar1);
  local_e8 = (int)*(short *)(iVar6 + 6);
  local_e4 = (int)*(short *)(iVar6 + 8);
  local_e0 = (int)*(short *)(iVar6 + 10);
  local_dc = (int)*(short *)(iVar6 + 0xc);
  local_d8 = (int)*(short *)(iVar6 + 0xe);
  local_d4 = (int)*(short *)(iVar6 + 0x10);
  local_d0 = (int)*(short *)(iVar6 + 0x12);
  local_cc = (int)*(short *)(iVar6 + 0x14);
  local_c8 = (int)*(short *)(iVar6 + 0x16);
  local_c4 = (int)*(short *)(iVar6 + 0x18);
  iVar7 = GetReplayCarData(uVar1);
  iVar8 = GetCarTuningData(uVar1);
  iVar12 = 0;
  iVar6 = iVar7;
  do {
    if (*(char *)(iVar6 + 0x88) == '\x02') {
      local_6c = 1;
      local_64 = 1;
      local_70 = (uint)*(byte *)(iVar12 * 0x10 + *(int *)(iVar8 + 100) + 8);
      local_68 = (uint)*(byte *)(iVar12 * 0x10 + *(int *)(iVar8 + 100) + 0xc);
    }
    iVar12 = iVar12 + 1;
    iVar6 = iVar7 + iVar12;
  } while (iVar12 != 5);
  iVar6 = GetReplayCarData(uVar1);
  local_38 = 0;
  local_37 = 0;
  local_36 = 0;
  local_35 = 0;
  local_34 = 0;
  iVar7 = HasTuningPart(iVar6 + 0x1a,0x15);
  if (iVar7 != 0) {
    local_38 = 0xff;
  }
  iVar6 = HasTuningPart(iVar6 + 0x1a,0x16);
  if (iVar6 != 0) {
    local_38 = 0xff;
    local_37 = 0xff;
    local_36 = 0xff;
  }
  cVar4 = HasTurboKit(uVar1);
  if (cVar4 != '\0') {
    local_38 = 0xff;
    local_37 = 0xff;
    local_35 = 0xff;
    local_34 = 0xff;
  }
  ClearVRAMRegion(&g_TuningPaletteRegion2);
  iVar6 = 0;
  ppuVar17 = &g_TuningPaletteTable2;
  do {
    iVar7 = iVar6 << 4;
    puVar13 = *ppuVar17;
    ppuVar17 = ppuVar17 + 1;
    iVar6 = iVar6 + 1;
    LoadPalette(&g_TuningPaletteRegion2,0,iVar7,puVar13);
  } while (iVar6 != 5);
  g_DisplayActive = 0;
  while (g_GameState == iVar9) {
    pcVar18 = (code *)(*pcVar18)(local_f0);
    ProcessRenderQueue();
    UpdateGhostDisplay();
    VsyncWait();
  }
  iVar9 = GetCarReplayData();
  iVar9 = GetReplayCarData(*(undefined1 *)(iVar9 + 0x11));
  *(undefined2 *)(iVar9 + 6) = (undefined2)local_e8;
  *(undefined2 *)(iVar9 + 8) = (undefined2)local_e4;
  *(undefined2 *)(iVar9 + 10) = (undefined2)local_e0;
  *(undefined2 *)(iVar9 + 0xc) = (undefined2)local_dc;
  *(undefined2 *)(iVar9 + 0xe) = (undefined2)local_d8;
  *(undefined2 *)(iVar9 + 0x10) = (undefined2)local_d4;
  *(undefined2 *)(iVar9 + 0x12) = (undefined2)local_d0;
  *(undefined2 *)(iVar9 + 0x14) = (undefined2)local_cc;
  *(undefined2 *)(iVar9 + 0x16) = (undefined2)local_c8;
  *(undefined2 *)(iVar9 + 0x18) = (undefined2)local_c4;
  FadeOutTransition();
  StopCurrentSEQ();
  return;
}


