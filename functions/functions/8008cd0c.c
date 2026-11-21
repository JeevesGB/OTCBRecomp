/* Function: InitCarUnlockDisplay */
/* Address: 8008cd0c */

void InitCarUnlockDisplay(void)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
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
  LoadCDFile(0x113,uVar4);
  uVar4 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar4,g_CarModelBuffer);
  iVar5 = GetCarReplayData();
  uVar2 = FUN_8006781c(*(undefined1 *)(iVar5 + 0x11));
  uVar6 = GetDefaultCarIndex(uVar2);
  iVar5 = FUN_80067470();
  iVar7 = FUN_800673d4();
  uVar4 = GsGetWorkBase();
  LoadCDFile(0x121,uVar4);
  cVar3 = FUN_80067870(uVar6 & 0xff);
  if (cVar3 == '\0') {
    bVar1 = *(byte *)(iVar7 + 5);
  }
  else {
    bVar1 = *(byte *)(iVar7 + 6);
  }
  uVar4 = GsGetWorkBase();
  InitGhostCarDisplay(uVar4,*(undefined1 *)(iVar5 + (uVar6 & 0xff)),
                      g_CarModelBuffer + (uint)bVar1 * 0x14);
  DAT_800cde28 = 0;
  DAT_800cde30 = 0;
  return;
}


