/* Function: InitCourseSelect */
/* Address: 8006cadc */

void InitCourseSelect(void)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  
  psVar3 = (short *)GetCourseSpritePositions();
  iVar4 = GetCourseModelData();
  iVar5 = MemAllocTemp(0x140);
  uVar6 = GsGetWorkBase();
  LoadCDFile(0x12f,uVar6);
  VSync(2);
  iVar10 = 0;
  uVar6 = GsGetWorkBase();
  RelocateData(uVar6,iVar5);
  VSync(2);
  do {
    iVar9 = 0;
    psVar8 = psVar3;
    do {
      sVar2 = *psVar8;
      psVar1 = psVar8 + 1;
      psVar8 = psVar8 + 2;
      pbVar7 = (byte *)(iVar4 + iVar9);
      iVar9 = iVar9 + 1;
      DrawSprite(iVar5 + (uint)*pbVar7 * 0x14,(int)sVar2,(int)*psVar1,g_MenuAnimPtr + 4);
      VsyncWait();
    } while (iVar9 != 6);
    iVar10 = iVar10 + 1;
  } while (iVar10 != 2);
  VsyncWait();
  MemFreeTemp(iVar5);
  return;
}


