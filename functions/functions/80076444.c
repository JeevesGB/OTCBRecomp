/* Function: InitRaceAssets */
/* Address: 80076444 */

void InitRaceAssets(void)

{
  undefined4 uVar1;
  
  g_CarModelBuffer = MemAllocTemp(0xa00);
  uVar1 = GsGetWorkBase();
  LoadCDFile(0x11f,uVar1);
  uVar1 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar1,g_CarModelBuffer);
  SetSpriteTexture(0,0xe,0xe,g_CarModelBuffer);
  SetActiveSpriteSlot(0,0);
  uVar1 = GsGetWorkBase();
  LoadCDFile(0x10f,uVar1);
  uVar1 = GsGetWorkBase();
  RelocateData(uVar1,g_CarModelBuffer);
  uVar1 = GsGetWorkBase();
  LoadCDFile(0x111,uVar1);
  uVar1 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar1,g_CarModelBuffer);
  g_TrackGeometryBuffer = MemAlloc(0x23000);
  LoadCDFile(0x110);
  g_TrackObjectBuffer = MemAlloc(0x1e800);
  LoadCDFile(0x121);
  return;
}


