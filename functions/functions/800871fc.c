/* Function: InitGearTuningDisplay */
/* Address: 800871fc */

void InitGearTuningDisplay(void)

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
  LoadCDFile(0x118,uVar1);
  uVar1 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar1,g_CarModelBuffer);
  g_GearTuningModelBuffer = MemAlloc(0x3c000);
  LoadCDFile(0x119);
  DAT_800cddf0 = 0;
  iVar2 = GetCarReplayData();
  iVar3 = GetCarSpriteData();
  iVar4 = FUN_80067458();
  uVar1 = GsGetWorkBase();
  LoadCDFile(0x110,uVar1);
  uVar1 = GsGetWorkBase();
  InitGhostCarDisplay(uVar1,*(undefined1 *)(iVar4 + (uint)*(byte *)(iVar2 + 0x11)),
                      g_CarModelBuffer + (uint)*(byte *)(iVar3 + 0x55) * 0x14);
  VsyncWait();
  return;
}


