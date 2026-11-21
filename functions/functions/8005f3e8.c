/* Function: InitMemoryCardOp */
/* Address: 8005f3e8 */

void InitMemoryCardOp(void)

{
  short sVar1;
  undefined4 uVar2;
  
  InitGameSystems();
  InitGraphics();
  InitMenuHeap();
  InitRenderQueue();
  LoadAudioBank();
  FadeAudioVolume(0x100);
  sVar1 = LookupTable(3);
  LoadMusicTrack((int)sVar1);
  PlayMusicTrack(0,0);
  DAT_800cd9e0 = MemAlloc(800);
  uVar2 = GsGetWorkBase();
  LoadCDFile(0x12a,uVar2);
  uVar2 = GsGetWorkBase();
  RelocateData(uVar2,DAT_800cd9e0);
  SetSpriteTexture(0,0x10,0x10,DAT_800cd9e0);
  FUN_8005f1dc();
  LoadCLUT(0,0x3f0,0x1fd);
  g_VRAMRegionPtr = &DAT_800b57ac;
  ClearVRAMRegion();
  g_MemCardOpActive = 0xffff;
  g_MemCardOpState = 0;
  DAT_800cd9cc = 0;
  DAT_800cd9ce = 0;
  DAT_800cd9d8 = 0xffff;
  DAT_800cd9d6 = 0;
  g_MemCardSFX = 0xffff;
  MemCardStart();
  DAT_800cd9dc = GsGetWorkBase();
  FUN_8005e4d4(0);
  return;
}


