/* Function: InitReplayPlayback */
/* Address: 8007e734 */

void InitReplayPlayback(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  g_CarModelBuffer = MemAllocTemp(0xa00);
  uVar2 = GsGetWorkBase();
  LoadCDFile(0x11f,uVar2);
  iVar9 = 0;
  uVar2 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar2,g_CarModelBuffer);
  SetSpriteTexture(0,0xe,0xe,g_CarModelBuffer);
  SetActiveSpriteSlot(0,0);
  uVar2 = GsGetWorkBase();
  LoadCDFile(0x10f,uVar2);
  uVar2 = GsGetWorkBase();
  RelocateData(uVar2,g_CarModelBuffer);
  uVar2 = GsGetWorkBase();
  LoadCDFile(0x11e,uVar2);
  uVar2 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar2,g_CarModelBuffer);
  iVar3 = FUN_800673bc();
  iVar11 = **(int **)(param_1 + 0xc);
  puVar4 = (undefined1 *)FUN_80067440();
  iVar5 = HasReplayData(*(int *)(param_1 + 8) + 1,**(undefined4 **)(param_1 + 0xc));
  uVar2 = GsGetWorkBase();
  LoadCDFile(0x11d,uVar2);
  if (iVar11 != 0) {
    iVar10 = 0;
    do {
      uVar6 = FUN_800677c8(*(undefined1 *)(iVar10 + *(int *)(*(int *)(param_1 + 0xc) + 4)));
      if (iVar9 == iVar11 + -1) {
        if (iVar5 == -1) {
LAB_8007e8c8:
          uVar8 = puVar4[(uVar6 & 0xff) + 1];
        }
        else {
          uVar8 = *puVar4;
        }
      }
      else {
        if (*(char *)(*(int *)(param_1 + 8) + iVar9 + 1) == '\0') goto LAB_8007e8c8;
        uVar8 = puVar4[(uVar6 & 0xff) + 0x10];
      }
      iVar10 = iVar10 + 10;
      uVar2 = GsGetWorkBase();
      iVar7 = iVar3 + iVar9;
      iVar9 = iVar9 + 1;
      InitGhostCarDisplay(uVar2,uVar8,g_CarModelBuffer + (uint)*(byte *)(iVar7 + 2) * 0x14);
    } while (iVar9 != iVar11);
  }
  iVar9 = 0;
  iVar3 = FUN_800673bc();
  iVar11 = **(int **)(param_1 + 0xc);
  iVar5 = FUN_80067458();
  uVar2 = GsGetWorkBase();
  LoadCDFile(0x110,uVar2);
  if (iVar11 != 0) {
    iVar10 = 0;
    do {
      bVar1 = *(byte *)(iVar10 + *(int *)(*(int *)(param_1 + 0xc) + 4));
      iVar10 = iVar10 + 10;
      uVar2 = GsGetWorkBase();
      iVar7 = iVar3 + iVar9;
      iVar9 = iVar9 + 1;
      InitGhostCarDisplay(uVar2,*(undefined1 *)(iVar5 + (uint)bVar1),
                          g_CarModelBuffer + (uint)*(byte *)(iVar7 + 7) * 0x14);
    } while (iVar9 != iVar11);
  }
  DAT_800cdd18 = MemAlloc(0x1e800);
  LoadCDFile(0x121,DAT_800cdd18);
  return;
}


