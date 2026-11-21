/* Function: InitPartsInstallDisplay */
/* Address: 80082494 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InitPartsInstallDisplay(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  g_CarModelBuffer = MemAllocTemp(0xa00);
  uVar1 = GsGetWorkBase();
  LoadCDFile(0x11f,uVar1);
  uVar1 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar1,g_CarModelBuffer);
  SetSpriteTexture(0,0xe,0xe,g_CarModelBuffer);
  SetActiveSpriteSlot(0,0);
  uVar1 = GsGetWorkBase();
  LoadCDFile(0x122,uVar1);
  uVar1 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar1,g_CarModelBuffer);
  DAT_800cdd40 = MemAlloc(0x6e800);
  LoadCDFile(0x123);
  _g_AnimTimer = 0;
  iVar2 = GetCarReplayData();
  iVar3 = FUN_800673f8();
  iVar4 = FUN_80067458();
  uVar1 = GsGetWorkBase();
  LoadCDFile(0x110,uVar1);
  uVar1 = GsGetWorkBase();
  InitGhostCarDisplay(uVar1,*(undefined1 *)(iVar4 + (uint)*(byte *)(iVar2 + 0x11)),
                      g_CarModelBuffer + (uint)*(byte *)(iVar3 + 0x1e) * 0x14);
  VsyncWait();
  return;
}


