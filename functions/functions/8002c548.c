/* Function: InitRaceTrack */
/* Address: 8002c548 */

void InitRaceTrack(void)

{
  undefined4 uVar1;
  
  g_TrackConfigBuffer = MemAlloc(800);
  uVar1 = GsGetWorkBase();
  LoadCDFile(0xf8,uVar1);
  uVar1 = GsGetWorkBase();
  RelocateData(uVar1,g_TrackConfigBuffer);
  g_RaceViewX = 0x3f0;
  g_RaceViewY = 0;
  g_RaceScreenW = 0x3e0;
  g_RaceScreenH = 0xfe;
  SetSpriteTexture(0,8,10,g_TrackConfigBuffer + 0x3c);
  SetSpriteTexture(2,10,0xe,g_TrackConfigBuffer + 0x50);
  SetSpriteTextureEx(1,8,10,7,g_TrackConfigBuffer + 0x3c);
  InitTrackRenderer();
  VSync(0);
  SetDispMask(0);
  g_DisplayActive = 0xffffffff;
  LoadTrackGeometry(&g_TrackCollisionData);
  LoadTrackObjects(&g_TrackCollisionData);
  InitCarStartPositions();
  InitTrackSurface((int)g_TrackSurface);
  return;
}


