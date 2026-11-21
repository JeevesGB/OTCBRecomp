/* Function: State_CarUnlock */
/* Address: 8008d154 */

void State_CarUnlock(void)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  uint *puVar10;
  undefined **ppuVar11;
  int iVar12;
  undefined1 auStack_38 [8];
  uint local_30;
  uint local_2c;
  
  iVar4 = g_GameState;
  g_CarUnlockFlag = 0;
  InitCarSelect();
  DrawSync(0);
  iVar12 = 0;
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
  InitCarUnlockDisplay();
  LoadCLUT(1,0x3c0,0x1ff);
  ppuVar11 = &g_UnlockPaletteTable;
  puVar10 = (uint *)&g_UnlockPaletteRegions;
  do {
    auStack_38._0_4_ = *puVar10;
    local_30 = auStack_38._0_4_;
    iVar8 = (uint)(ushort)puVar10[1] << 0x10;
    uVar3 = CONCAT22(*(undefined2 *)((int)puVar10 + 6),
                     (short)((iVar8 >> 0x10) - (iVar8 >> 0x1f) >> 1));
    local_2c = uVar3;
    puVar1 = auStack_38 + 3;
    uVar2 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar2) =
         *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 |
         (uint)auStack_38._0_4_ >> (3 - uVar2) * 8;
    puVar1 = auStack_38 + 7;
    uVar2 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar2) =
         *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uVar3 >> (3 - uVar2) * 8;
    iVar12 = iVar12 + 1;
    auStack_38._4_4_ = uVar3;
    ClearImage((RECT *)auStack_38,'\0','\0','\0');
    VsyncWait();
    puVar9 = *ppuVar11;
    ppuVar11 = ppuVar11 + 1;
    LoadPalette(puVar10,0,0,puVar9);
    VsyncWait();
    puVar10 = (uint *)((int)puVar10 + 0xe);
  } while (iVar12 != 4);
  iVar12 = MemAlloc(0x30000);
  uVar6 = MemAlloc(0x800);
  SetupRaceBuffers(&g_TimeAttackBuffer,0x340,0x100,0x380,0x100,0x3d0,0x100,iVar12,iVar12 + 0x18000,
                   uVar6);
  g_TimeAttackVRAMX = 0x30;
  g_TimeAttackVRAMW = 0x718;
  g_TimeAttackVRAMX2 = 0x50;
  g_TimeAttackVRAMY2 = 0xa00;
  g_RaceViewX = 0x3c0;
  g_RaceViewY = 0x100;
  g_RaceScreenW = 0x3f0;
  g_TimeAttackFlag2 = 0;
  g_TimeAttackFlag3 = 0;
  g_RaceScreenH = 0x1db;
  LoadAudioBank();
  FadeAudioVolume(0x100);
  sVar5 = LookupTable(7);
  LoadMusicTrack((int)sVar5);
  PlayMusicTrack(0,0);
  iVar12 = 0;
  do {
    iVar12 = iVar12 + 1;
    iVar8 = GetRaceSprite1();
    iVar7 = GetUnlockSpriteData();
    DrawRaceSpriteEx(iVar7,iVar7,iVar8 + 0x164,iVar8 + 0x164,0xff,g_RaceOTPtr1 + 4);
    DrawRaceSpriteEx(iVar7 + 8,iVar7 + 8,iVar8 + 0x174,iVar8 + 0x174,0xff,g_RaceOTPtr1 + 4);
    VsyncWait();
  } while (iVar12 != 2);
  g_DisplayActive = 0;
  while (g_GameState == iVar4) {
    UpdateCarUnlock();
    ProcessRenderQueue();
    UpdateGhostDisplay();
    VsyncWait();
  }
  CleanupRace();
  FadeOutTransition();
  StopCurrentSEQ();
  return;
}


