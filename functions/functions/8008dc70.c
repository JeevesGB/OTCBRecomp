/* Function: InitRaceResults */
/* Address: 8008dc70 */

void InitRaceResults(void)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  g_CarModelBuffer = MemAllocTemp(0xa00);
  uVar3 = GsGetWorkBase();
  LoadCDFile(0x11f,uVar3);
  uVar3 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar3,g_CarModelBuffer);
  SetSpriteTexture(0,0xe,0xe,g_CarModelBuffer);
  SetActiveSpriteSlot(0,0);
  uVar3 = GsGetWorkBase();
  LoadCDFile(0x10f,uVar3);
  uVar3 = GsGetWorkBase();
  RelocateData(uVar3,g_CarModelBuffer);
  uVar3 = GsGetWorkBase();
  LoadCDFile(0x117,uVar3);
  uVar3 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar3,g_CarModelBuffer);
  pbVar4 = (byte *)GetProgressionPtr();
  bVar1 = *pbVar4;
  uVar5 = GetDefaultCarIndex((uint)bVar1);
  iVar6 = FUN_80067458();
  iVar7 = FUN_800673e0();
  uVar3 = GsGetWorkBase();
  LoadCDFile(0x110,uVar3);
  uVar3 = GsGetWorkBase();
  InitGhostCarDisplay(uVar3,*(undefined1 *)(iVar6 + (uint)bVar1),
                      g_CarModelBuffer + (uint)*(byte *)(iVar7 + 6) * 0x14);
  iVar6 = FUN_80067470();
  iVar7 = FUN_800673e0();
  uVar3 = GsGetWorkBase();
  LoadCDFile(0x121,uVar3);
  cVar2 = FUN_80067870(uVar5 & 0xff);
  if (cVar2 == '\0') {
    bVar1 = *(byte *)(iVar7 + 8);
  }
  else {
    bVar1 = *(byte *)(iVar7 + 9);
  }
  uVar3 = GsGetWorkBase();
  InitGhostCarDisplay(uVar3,*(undefined1 *)(iVar6 + (uVar5 & 0xff)),
                      g_CarModelBuffer + (uint)bVar1 * 0x14);
  iVar6 = GetCarReplayData();
  bVar1 = *(byte *)(iVar6 + 0x11);
  iVar6 = FUN_80067458();
  iVar7 = FUN_800673e0();
  uVar3 = GsGetWorkBase();
  LoadCDFile(0x110,uVar3);
  uVar3 = GsGetWorkBase();
  InitGhostCarDisplay(uVar3,*(undefined1 *)(iVar6 + (uint)bVar1),
                      g_CarModelBuffer + (uint)*(byte *)(iVar7 + 7) * 0x14);
  DAT_800cde38 = 0;
  DAT_800cde40 = 0;
  return;
}


