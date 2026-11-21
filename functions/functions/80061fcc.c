/* Function: FUN_80061fcc */
/* Address: 80061fcc */

void FUN_80061fcc(void)

{
  undefined1 uVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  
  InitGameSystems();
  InitGraphics();
  InitMenuHeap();
  InitRenderQueue();
  DAT_800cda28 = MemAlloc(800);
  uVar4 = GsGetWorkBase();
  LoadCDFile(0x129,uVar4);
  uVar4 = GsGetWorkBase();
  RelocateData(uVar4,DAT_800cda28);
  SetSpriteTexture(0,8,10,DAT_800cda28 + 0x14);
  SetSpriteTexture(1,10,0xe,DAT_800cda28 + 0x28);
  SetSpriteTexture(2,0x10,0x10,DAT_800cda28);
  LoadAudioBank();
  FadeAudioVolume(0x100);
  sVar2 = LookupTable(3);
  LoadMusicTrack((int)sVar2);
  PlayMusicTrack(0,0);
  LoadCLUT(0,0x3f0,0x1fd);
  g_VRAMRegionPtr = &DAT_800b5aec;
  ClearVRAMRegion();
  DAT_800cda06 = 0xffff;
  DAT_800cda08 = 0xffff;
  DAT_800cda12 = DAT_800b5998;
  MemCardStart();
  DAT_800cda1c = 0xffff;
  DAT_800cda1a = 0xffff;
  DAT_800cda18 = 0xffff;
  DAT_800cda16 = 1;
  DAT_800cda14 = 0xffff;
  FUN_8005e4d4(0);
  DAT_800cda24 = GsGetWorkBase();
  DAT_800cda20 = DAT_800cda24 + 0x80;
  iVar5 = GetRaceTypePtr();
  DAT_800cda02 = (ushort)*(byte *)(iVar5 + 2);
  iVar5 = GetCarReplayData();
  uVar1 = *(undefined1 *)(iVar5 + 0xc);
  iVar5 = GetRaceTypePtr();
  uVar3 = GetChampionshipTrackIndex(uVar1,*(undefined1 *)(iVar5 + 2));
  DAT_800cda04 = uVar3 & 0xff;
  DAT_800cda0a = 2;
  FUN_80061e2c();
  return;
}


