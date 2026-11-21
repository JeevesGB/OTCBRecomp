/* Function: FUN_8006e3f4 */
/* Address: 8006e3f4 */

void FUN_8006e3f4(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    iVar3 = GetSelectedCarData();
    iVar4 = FUN_80067458();
    piVar5 = (int *)FUN_800679a4(uVar1,uVar2);
    iVar6 = 0;
    if (*piVar5 != 0) {
      do {
        InitGhostCarDisplay(g_TrackGeometryBuffer,
                            *(undefined1 *)(iVar4 + (uint)*(byte *)(piVar5[1] + iVar6)),
                            g_CarModelBuffer + (uint)*(byte *)(iVar3 + iVar6 + 0x1f) * 0x14);
        iVar6 = iVar6 + 1;
      } while (iVar6 != *piVar5);
    }
  }
  else if (param_2 == 1) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    iVar3 = GetSelectedCarData();
    iVar4 = FUN_80067458();
    piVar5 = (int *)FUN_800679a4(uVar1,uVar2);
    iVar6 = 0;
    if (*piVar5 != 0) {
      do {
        InitGhostCarDisplay(g_TrackGeometryBuffer,
                            *(undefined1 *)(iVar4 + (uint)*(byte *)(piVar5[1] + iVar6)),
                            g_CarModelBuffer + (uint)*(byte *)(iVar3 + iVar6 + 0x25) * 0x14);
        iVar6 = iVar6 + 1;
      } while (iVar6 != *piVar5);
    }
  }
  return;
}


