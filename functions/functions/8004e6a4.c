/* Function: UpdateCarLapCounter */
/* Address: 8004e6a4 */

void UpdateCarLapCounter(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (g_PhysicsFlag4 == 0) {
    iVar3 = *(int *)(param_1 + 0x24);
    if (*(short *)(iVar3 + 6) == 0) {
      if (*(short *)(iVar3 + 4) == 0) {
        iVar2 = iVar3 + *(short *)(iVar3 + 10) * 4;
        *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + (int)g_TrackGrip;
      }
      else {
        iVar2 = (int)*(short *)(iVar3 + 10);
        if (iVar2 < *(short *)(iVar3 + 0xc)) {
          iVar1 = iVar2 * 4 + iVar3;
          do {
            iVar2 = iVar2 + 1;
            *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + (int)g_TrackGrip;
            iVar1 = iVar1 + 4;
          } while (iVar2 < *(short *)(iVar3 + 0xc));
        }
      }
      *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + (int)g_TrackGrip;
    }
    iVar2 = (int)*(short *)(param_1 + 0x15c) - (int)*(short *)(param_1 + 0x15e);
    iVar3 = 0;
    if (iVar2 != 0) {
      if (iVar2 < 0) {
        iVar2 = iVar2 + g_TrackLength;
      }
      if (g_TrackLength >> 1 < iVar2) {
        iVar2 = iVar2 - g_TrackLength;
      }
      iVar2 = *(int *)(param_1 + 0x168) + iVar2;
      *(int *)(param_1 + 0x168) = iVar2;
      if (*(int *)(param_1 + 0x164) < iVar2) {
        *(int *)(param_1 + 0x164) = iVar2;
        iVar3 = -1;
      }
      else {
        iVar3 = 0;
      }
    }
    if (iVar3 != 0) {
      FUN_8004e540(param_1);
    }
  }
  return;
}


