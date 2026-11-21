/* Function: InitReplayCarSelect */
/* Address: 8006d888 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InitReplayCarSelect(void)

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
  LoadCDFile(0x125,uVar1);
  uVar1 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar1,g_CarModelBuffer);
  iVar2 = FUN_80067374();
  iVar3 = FUN_80067458();
  iVar4 = GetCarReplayData();
  uVar1 = GsGetWorkBase();
  LoadCDFile(0x110,uVar1);
  uVar1 = GsGetWorkBase();
  InitGhostCarDisplay(uVar1,*(undefined1 *)(iVar3 + (uint)*(byte *)(iVar4 + 0xc)),
                      g_CarModelBuffer + (uint)*(byte *)(iVar2 + 0x11) * 0x14);
  _DAT_800c3908 = 0;
  return;
}


