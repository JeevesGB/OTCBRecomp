/* Function: InitGhostRaceAssets */
/* Address: 8007c69c */

void InitGhostRaceAssets(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  g_CarModelBuffer = MemAllocTemp(0xa00);
  uVar2 = GsGetWorkBase();
  LoadCDFile(0x11f,uVar2);
  uVar2 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar2,g_CarModelBuffer);
  SetSpriteTexture(0,0xe,0xe,g_CarModelBuffer);
  SetActiveSpriteSlot(0,0);
  uVar2 = GsGetWorkBase();
  LoadCDFile(0x10f,uVar2);
  uVar2 = GsGetWorkBase();
  RelocateData(uVar2,g_CarModelBuffer);
  uVar2 = GsGetWorkBase();
  LoadCDFile(0x112,uVar2);
  uVar2 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar2,g_CarModelBuffer);
  iVar3 = GetCarReplayData();
  bVar1 = *(byte *)(iVar3 + 0x11);
  iVar3 = FUN_80067458();
  iVar4 = FUN_800673b0();
  uVar2 = GsGetWorkBase();
  LoadCDFile(0x110,uVar2);
  uVar2 = GsGetWorkBase();
  InitGhostCarDisplay(uVar2,*(undefined1 *)(iVar3 + (uint)bVar1),
                      g_CarModelBuffer + (uint)*(byte *)(iVar4 + 7) * 0x14);
  return;
}


