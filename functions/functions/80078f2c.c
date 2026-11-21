/* Function: State_ChampionshipRace */
/* Address: 80078f2c */

void State_ChampionshipRace(void)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  uint local_50 [3];
  u_long *local_44;
  u_long *local_38;
  
  iVar3 = g_GameState;
  memset((uchar *)&local_70,'\0',0x10);
  iVar7 = GetCarData();
  iVar8 = GetCarReplayData();
  switch(*(undefined1 *)(iVar7 + 1)) {
  case 0:
    local_68 = iVar8;
    break;
  case 1:
    local_68 = iVar8 + 10;
    break;
  case 2:
    local_68 = iVar8 + 10;
    break;
  case 3:
  case 4:
    local_68 = iVar8 + 0xf;
  }
  local_64 = GetChampionshipLapData(*(undefined1 *)(local_68 + 2));
  InitCarSelect();
  DrawSync(0);
  BreakDraw();
  iVar13 = 0;
  InitGameSystems();
  InitMenuHeap();
  InitRenderer(&g_TimeAttackDisplayConfig);
  g_GTEScale = 0x400;
  g_GTEMaxVal = 0x3f;
  JOY_MCD_BAUD = 0x1f;
  SetGTEParams();
  ActivateDisplay();
  InitRenderQueue();
  InitChampionshipAssets(*(undefined1 *)(local_68 + 2));
  iVar7 = MemAlloc(0x30000);
  uVar9 = MemAlloc(0x800);
  SetupRaceBuffers(&g_TimeAttackBuffer,0x340,0x100,0x380,0x100,0x3d0,0x100,iVar7,iVar7 + 0x18000,
                   uVar9);
  g_RaceViewX = 0x3c0;
  g_RaceViewY = 0x100;
  g_RaceScreenW = 0x3f0;
  g_RaceScreenH = 0x1db;
  g_TimeAttackVRAMX2 = 0x50;
  g_TimeAttackVRAMY2 = 0xa00;
  g_TimeAttackFlag3 = 0;
  LoadAudioBank();
  FadeAudioVolume(0x100);
  sVar6 = LookupTable(0);
  LoadMusicTrack((int)sVar6);
  PlayMusicTrack(0,1);
  iVar7 = GetReplayCarData(*(undefined1 *)(local_68 + 2));
  uVar5 = *(undefined1 *)(local_68 + 2);
  uVar4 = GetChampionshipTrackIndex(uVar5,0xffffffff);
  uVar5 = GetChampionshipCarIndex(uVar5);
  SetupChampionshipBuffers
            (&g_TimeAttackBuffer,uVar4,uVar5,*(undefined1 *)(local_68 + 3),
             (int)*(short *)(iVar7 + 0xac));
  pbVar12 = (byte *)(local_70 * 6 + *(int *)(local_64 + 4));
  iVar7 = GetChampionshipCarData();
  iVar8 = GetChampionshipModelData();
  pbVar10 = pbVar12;
  do {
    if (*pbVar10 != 0x4e) {
      InitGhostCarDisplay(g_ChampionshipModelBuffer,*(undefined1 *)(iVar8 + (uint)*pbVar10),
                          g_CarModelBuffer + (uint)*(byte *)(iVar7 + iVar13 + 0xe) * 0x14);
    }
    iVar13 = iVar13 + 1;
    pbVar10 = pbVar12 + iVar13;
  } while (iVar13 != 6);
  VsyncWait();
  uVar11 = (uint)*(byte *)(local_70 * 6 + *(int *)(local_64 + 4) + local_6c);
  iVar7 = GetChampionshipModelData();
  puVar1 = auStack_60 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800229e8 >> (3 - uVar2) * 8;
  auStack_60._0_4_ = DAT_800229e8;
  puVar1 = auStack_60 + 7;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800229ec >> (3 - uVar2) * 8;
  auStack_60._4_4_ = DAT_800229ec;
  puVar1 = auStack_58 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800229f0 >> (3 - uVar2) * 8;
  auStack_58._0_4_ = DAT_800229f0;
  puVar1 = auStack_58 + 7;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_800229f4 >> (3 - uVar2) * 8;
  auStack_58._4_4_ = DAT_800229f4;
  if (uVar11 != 0x4e) {
    GetCarTextureData(g_ChampionshipModelBuffer +
                      *(int *)((uint)*(byte *)(iVar7 + uVar11) * 4 + g_ChampionshipModelBuffer + 4),
                      local_50);
    LoadImage((RECT *)auStack_60,local_44);
    DrawSync(0);
    if ((local_50[0] & 8) != 0) {
      LoadImage((RECT *)auStack_58,local_38);
      DrawSync(0);
    }
  }
  VsyncWait();
  InitChampionshipDisplay(*(undefined4 *)(local_64 + 4));
  VsyncWait();
  iVar7 = GetChampionshipSpriteData();
  iVar8 = GetChampionshipCarData();
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar8 + 0xd) * 0x14,(int)*(short *)(iVar7 + 0x40),
               (int)*(short *)(iVar7 + 0x42),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  VsyncWait();
  g_DisplayActive = 0;
  while (g_GameState == iVar3) {
    UpdateChampionshipRace(&local_70);
    UpdateGhostDisplay();
    ProcessRenderQueue();
    VsyncWait();
  }
  CleanupRace();
  FadeOutTransition();
  StopCurrentSEQ();
  return;
}


