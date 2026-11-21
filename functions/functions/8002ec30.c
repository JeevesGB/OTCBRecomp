/* Function: FindNearestSegment */
/* Address: 8002ec30 */

int FindNearestSegment(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(param_3 * 0xc + g_TrackSegmentArray);
  iVar2 = CalcDistance2D(param_1 - *piVar1,param_2 - piVar1[2]);
  iVar4 = param_3 + 1;
  if (g_TrackSegmentCount <= iVar4) {
    iVar4 = iVar4 - g_TrackSegmentCount;
  }
  piVar1 = (int *)(iVar4 * 0xc + g_TrackSegmentArray);
  iVar3 = CalcDistance2D(param_1 - *piVar1,param_2 - piVar1[2]);
  if (iVar2 <= iVar3) {
    iVar4 = param_3 + -1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + g_TrackSegmentCount;
    }
    piVar1 = (int *)(iVar4 * 0xc + g_TrackSegmentArray);
    iVar3 = CalcDistance2D(param_1 - *piVar1,param_2 - piVar1[2]);
    if (iVar2 <= iVar3) {
      iVar4 = param_3;
    }
  }
  return iVar4;
}


