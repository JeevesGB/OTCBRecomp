/* Function: FUN_8004e540 */
/* Address: 8004e540 */

void FUN_8004e540(int param_1)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  
  psVar3 = *(short **)(param_1 + 0x24);
  if (psVar3[3] == 0) {
    iVar1 = (int)*(short *)(param_1 + 0x15c) - (int)psVar3[10];
    if (iVar1 < 0) {
      iVar1 = iVar1 + g_TrackLength;
    }
    if (g_TrackLength >> 1 < iVar1) {
      iVar1 = iVar1 - g_TrackLength;
    }
    iVar2 = -1;
    if (((-1 < iVar1) && (iVar2 = iVar1, psVar3[9] == 0)) &&
       (iVar2 = -1, g_TrackLength <= *(int *)(param_1 + 0x164) - (int)psVar3[0xb])) {
      psVar3[0xb] = *(short *)(param_1 + 0x164);
      iVar2 = iVar1;
    }
    if (-1 < iVar2) {
      iVar1 = *(int *)(param_1 + 0x60);
      iVar2 = iVar2 * *(short *)(g_CarTrackData + 6) * (int)g_TrackGrip * 0x100;
      if (iVar1 == 0) {
        trap(0x1c00);
      }
      if ((iVar1 == -1) && (iVar2 == -0x80000000)) {
        trap(0x1800);
      }
      FUN_8004e20c(psVar3,iVar2 / iVar1);
      if ((DAT_800ccf44 != 0) && (*psVar3 != 0)) {
        FUN_8004e3ac(param_1);
      }
    }
  }
  return;
}


