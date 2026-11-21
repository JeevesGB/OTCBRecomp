/* Function: InitTimeAttackAssets */
/* Address: 8007b614 */

void InitTimeAttackAssets(void)

{
  short *psVar1;
  byte bVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  byte *pbVar9;
  undefined4 uVar10;
  short *psVar11;
  int iVar12;
  
  psVar4 = (short *)FUN_8006725c();
  iVar5 = FUN_800674ac();
  iVar6 = GetCarReplayData();
  iVar7 = MemAllocTemp(0x140);
  bVar2 = *(byte *)(iVar6 + 0x10);
  if (bVar2 == 1) {
    uVar8 = GsGetWorkBase();
    uVar10 = 0x132;
  }
  else if (bVar2 < 2) {
    if (bVar2 != 0) goto LAB_8007b6e0;
    uVar8 = GsGetWorkBase();
    uVar10 = 0x131;
  }
  else if (bVar2 == 2) {
    uVar8 = GsGetWorkBase();
    uVar10 = 0x133;
  }
  else {
    if (bVar2 != 3) goto LAB_8007b6e0;
    uVar8 = GsGetWorkBase();
    uVar10 = 0x134;
  }
  LoadCDFile(uVar10,uVar8);
LAB_8007b6e0:
  iVar6 = 0;
  uVar8 = GsGetWorkBase();
  RelocateData(uVar8,iVar7);
  do {
    iVar12 = 0;
    psVar11 = psVar4;
    do {
      sVar3 = *psVar11;
      psVar1 = psVar11 + 1;
      psVar11 = psVar11 + 2;
      pbVar9 = (byte *)(iVar5 + iVar12);
      iVar12 = iVar12 + 1;
      DrawSprite(iVar7 + (uint)*pbVar9 * 0x14,(int)sVar3,(int)*psVar1,g_MenuAnimPtr + 4);
      VsyncWait();
    } while (iVar12 != 10);
    iVar6 = iVar6 + 1;
  } while (iVar6 != 2);
  VsyncWait();
  MemFreeTemp(iVar7);
  return;
}


