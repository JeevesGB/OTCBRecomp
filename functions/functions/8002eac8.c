/* Function: FindNearestSegmentFull */
/* Address: 8002eac8 */

int FindNearestSegmentFull(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 0x7fffffff;
  iVar4 = 0;
  iVar7 = (g_TrackSegmentCount + 1) / 2;
  iVar6 = param_3;
  if (0 < iVar7) {
    do {
      iVar3 = param_3 + iVar4;
      if (g_TrackSegmentCount <= iVar3) {
        iVar3 = iVar3 - g_TrackSegmentCount;
      }
      piVar1 = (int *)(iVar3 * 0xc + g_TrackSegmentArray);
      iVar2 = CalcDistance2D(*piVar1 - param_1,piVar1[2] - param_2);
      if (iVar2 < iVar5) {
        iVar5 = iVar2;
        iVar6 = iVar3;
      }
      iVar3 = (param_3 - iVar4) + -1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + g_TrackSegmentCount;
      }
      piVar1 = (int *)(iVar3 * 0xc + g_TrackSegmentArray);
      iVar2 = CalcDistance2D(*piVar1 - param_1,piVar1[2] - param_2);
      if (iVar2 < iVar5) {
        iVar5 = iVar2;
        iVar6 = iVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar7);
  }
  return iVar6;
}


