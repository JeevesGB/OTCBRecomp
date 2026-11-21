/* Function: InitChampionshipAssets */
/* Address: 80078658 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InitChampionshipAssets(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
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
  LoadCDFile(0x128,uVar1);
  uVar1 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar1,g_CarModelBuffer);
  iVar2 = GetChampionshipCarData();
  iVar3 = FUN_80067458();
  uVar1 = GsGetWorkBase();
  LoadCDFile(0x110,uVar1);
  uVar1 = GsGetWorkBase();
  InitGhostCarDisplay(uVar1,*(undefined1 *)(iVar3 + (param_1 & 0xff)),
                      g_CarModelBuffer + (uint)*(byte *)(iVar2 + 0xc) * 0x14);
  g_ChampionshipModelBuffer = MemAlloc(0x2b000);
  LoadCDFile(0x127);
  _DAT_800c393c = 0;
  return;
}


