/* Function: State_TuningShop */
/* Address: 800801dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void State_TuningShop(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  uchar auStack_40 [4];
  int local_3c;
  int local_30;
  
  iVar1 = g_GameState;
  memset(auStack_40,'\0',0x14);
  pcVar5 = UpdateTuningShop;
  iVar3 = GetCarReplayData();
  iVar3 = GetReplayCarData(*(undefined1 *)(iVar3 + 0x11));
  if ((*(ushort *)(iVar3 + 0xac) & 0x10) != 0) {
    local_3c = local_3c + 5;
  }
  if ((*(ushort *)(iVar3 + 0xac) & 1) != 0) {
    local_30 = local_30 + 1;
  }
  if ((*(ushort *)(iVar3 + 0xac) & 2) != 0) {
    local_30 = local_30 + 1;
  }
  if ((*(ushort *)(iVar3 + 0xac) & 4) != 0) {
    local_30 = local_30 + 1;
  }
  if ((*(ushort *)(iVar3 + 0xac) & 8) != 0) {
    local_30 = local_30 + 1;
  }
  if (0 < local_30) {
    local_3c = local_3c + 5;
  }
  if (2 < local_30) {
    local_3c = local_3c + 5;
  }
  _g_TuningShopFlag1 = 0;
  g_TuningShopFlag2 = 0;
  g_TuningShopFlag3 = 0;
  InitCarSelect();
  DrawSync(0);
  BreakDraw();
  InitGameSystems();
  InitMenuHeap();
  InitMemoryState();
  InitRenderer(&g_TimeAttackDisplayConfig);
  g_GTEScale = 0x400;
  g_GTEMaxVal = 0x3f;
  JOY_MCD_BAUD = 0x1f;
  SetGTEParams();
  ActivateDisplay();
  InitRenderQueue();
  g_CarModelBuffer = MemAllocTemp(0xa00);
  uVar4 = GsGetWorkBase();
  LoadCDFile(0x11f,uVar4);
  uVar4 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar4,g_CarModelBuffer);
  SetSpriteTexture(0,0xe,0xe,g_CarModelBuffer);
  SetActiveSpriteSlot(0,0);
  uVar4 = GsGetWorkBase();
  LoadCDFile(0x10f,uVar4);
  uVar4 = GsGetWorkBase();
  RelocateData(uVar4,g_CarModelBuffer);
  uVar4 = GsGetWorkBase();
  LoadCDFile(0x11a,uVar4);
  uVar4 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar4,g_CarModelBuffer);
  LoadAudioBank();
  FadeAudioVolume(0xff);
  sVar2 = LookupTable(0x10);
  LoadMusicTrack((int)sVar2);
  PlayMusicTrack(0,0);
  iVar3 = MemAlloc(0x30000);
  uVar4 = MemAlloc(0x800);
  SetupRaceBuffers(&g_TimeAttackBuffer,0x340,0x100,0x380,0x100,0x3d0,0x100,iVar3,iVar3 + 0x18000,
                   uVar4);
  g_RaceViewX = 0x3c0;
  g_RaceViewY = 0x100;
  g_RaceScreenW = 0x3f0;
  g_RaceScreenH = 0x1db;
  g_TimeAttackFlag2 = 0x88;
  g_TimeAttackVRAMX = 0x20;
  g_TimeAttackVRAMW = 0x6e0;
  g_TimeAttackVRAMX2 = 0x50;
  g_TimeAttackVRAMY2 = 0xa00;
  g_TimeAttackFlag3 = 0;
  LoadCLUT(0,0x2c0,0x1ff);
  ClearVRAMRegion(&g_TuningPaletteRegion);
  VsyncWait();
  LoadPalette(&g_TuningPaletteRegion,0,0,&g_TuningPaletteData);
  VsyncWait();
  InitTuningShopDisplay();
  g_DisplayActive = 0;
  while (g_GameState == iVar1) {
    pcVar5 = (code *)(*pcVar5)(auStack_40);
    ProcessRenderQueue();
    VsyncWait();
  }
  CleanupRace();
  FadeOutTransition();
  StopCurrentSEQ();
  return;
}


