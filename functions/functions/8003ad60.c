/* Function: FUN_8003ad60 */
/* Address: 8003ad60 */

void FUN_8003ad60(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_8003a16c();
  iVar5 = 0;
  DAT_800ccbd0 = FUN_80039b5c();
  if (0 < g_TrackSegmentCount) {
    do {
      FUN_80056754(g_WheelForceTable2,iVar5);
      FUN_80056754(g_WheelForceTable1,iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar5 < g_TrackSegmentCount);
  }
  iVar4 = *(int *)(g_WheelForceTable3 + 8);
  iVar5 = 0;
  if (0 < iVar4) {
    iVar3 = 0xc;
    do {
      iVar1 = *(int *)(g_WheelForceTable3 + iVar3 + 0x14);
      iVar2 = g_WheelForceTable3 + *(int *)(g_WheelForceTable3 + iVar3 + 0x10) + 0xc;
      while (iVar1 = iVar1 + -1, iVar1 != -1) {
        if ((*(ushort *)(iVar2 + 2) & 0x3f04) == 0x3300) {
                    /* Possible PsyQ macro: setPolyF3() */
          *(undefined1 *)(iVar2 + 0xb) = 0x20;
        }
        iVar2 = iVar2 + (*(byte *)(iVar2 + 1) + 1) * 4;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar5 < iVar4);
  }
  return;
}


