/* Function: SortCarsByDepth */
/* Address: 80053128 */

void SortCarsByDepth(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar2 = g_CollisionFlag1;
  if (g_CarRenderStart < g_CollisionFlag1 + -1) {
    piVar4 = &g_CarRenderList + g_CarRenderStart;
    iVar9 = g_CarRenderStart;
    do {
      iVar10 = g_CollisionFlag1;
      iVar8 = iVar9 + 1;
      if (iVar8 < iVar2) {
        piVar7 = &g_CarRenderList + iVar8;
        do {
          iVar6 = *piVar4;
          if (*(int *)(iVar6 + 0x168) < *(int *)(*piVar7 + 0x168)) {
            *piVar4 = *piVar7;
            *piVar7 = iVar6;
          }
          iVar8 = iVar8 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar8 < iVar10);
      }
      iVar9 = iVar9 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar9 < g_CollisionFlag1 + -1);
  }
  iVar2 = g_CollisionFlag1;
  sVar1 = g_CameraClipDist;
  if (g_CarRenderStart < g_CollisionFlag1) {
    piVar4 = &g_CarRenderList + g_CarRenderStart;
    do {
      iVar9 = g_CollisionFlag1;
      iVar10 = *(int *)(*piVar4 + 0x24);
      if (*(short *)(iVar10 + 10) < sVar1) break;
      iVar8 = g_CarRenderStart + 1;
      if (iVar8 < iVar2) {
        piVar7 = &g_CarRenderList + iVar8;
        do {
          iVar6 = *piVar7;
          if (*(short *)(*(int *)(iVar6 + 0x24) + 10) < sVar1) break;
          iVar5 = *(int *)(iVar10 + 0x18);
          iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x18);
          if ((iVar3 < iVar5) ||
             (((iVar5 == iVar3 && ((*(uint *)(*piVar4 + 0x40) & 0x10000) == 0)) &&
              ((*(uint *)(iVar6 + 0x40) & 0x10000) != 0)))) {
            iVar3 = *piVar4;
            *piVar4 = iVar6;
            *piVar7 = iVar3;
          }
          iVar8 = iVar8 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar8 < iVar9);
      }
      g_CarRenderStart = g_CarRenderStart + 1;
      piVar4 = piVar4 + 1;
    } while (g_CarRenderStart < g_CollisionFlag1);
  }
  iVar2 = g_CollisionFlag1;
  iVar9 = 0;
  if (0 < g_CollisionFlag1) {
    piVar4 = &g_CarRenderList;
    do {
      *(short *)(*(int *)(*piVar4 + 0x24) + 0x10) = (short)iVar9;
      iVar9 = iVar9 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar9 < iVar2);
  }
  return;
}


