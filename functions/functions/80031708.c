/* Function: UpdateCameraPosition */
/* Address: 80031708 */

void UpdateCameraPosition(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  if (0 < g_CameraFlag3) {
    piVar4 = &g_CameraList;
    do {
      iVar2 = *piVar4;
      UpdateCameraMatrix(iVar2);
      (*(code *)(&g_CameraTypeTable)[**(byte **)(iVar2 + 8)])(iVar2);
      if (*(short *)(iVar2 + 0x1e) == 0) {
        uVar1 = FindNearestSegment(*(undefined4 *)(iVar2 + 0x54),*(undefined4 *)(iVar2 + 0x5c),
                                   (int)*(short *)(iVar2 + 0x22));
        *(undefined2 *)(iVar2 + 0x22) = uVar1;
      }
      else {
        *(undefined2 *)(iVar2 + 0x1e) = 0;
        uVar1 = FindNearestSegmentFull
                          (*(undefined4 *)(iVar2 + 0x54),*(undefined4 *)(iVar2 + 0x5c),
                           (int)*(short *)(iVar2 + 0x22));
        *(undefined2 *)(iVar2 + 0x22) = uVar1;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < g_CameraFlag3);
  }
  return;
}


