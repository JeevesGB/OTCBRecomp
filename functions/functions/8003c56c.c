/* Function: InitCarPhysicsData */
/* Address: 8003c56c */

void InitCarPhysicsData(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_800ccb70;
  if (g_RaceMode < 3) {
    if ((0 < g_RaceMode) || (g_RaceMode != 0)) goto LAB_8003c5cc;
LAB_8003c5a8:
    *(undefined4 *)(param_1 + 100) = 0;
    iVar3 = (int)*(short *)(iVar3 + 8) + param_2 * -0x14;
  }
  else {
    if (g_RaceMode == 3) goto LAB_8003c5a8;
LAB_8003c5cc:
    if ((param_2 & 1) == 0) {
      sVar1 = *(short *)(DAT_800ccb70 + 2);
    }
    else {
      sVar1 = *(short *)(DAT_800ccb70 + 4);
    }
    *(int *)(param_1 + 100) = (int)sVar1 << 0xc;
    param_2 = (int)param_2 >> 1;
    iVar3 = (int)*(short *)(DAT_800ccb70 + 8) + param_2 * -0x14;
  }
  iVar2 = g_TrackLength;
  if (-1 < iVar3) {
    if (iVar3 < g_TrackLength) goto LAB_8003c654;
    iVar2 = -g_TrackLength;
  }
  iVar3 = iVar3 + iVar2;
LAB_8003c654:
  *(short *)(param_1 + 0x15c) = (short)iVar3;
  *(uint *)(param_1 + 0x168) = param_2 * -0x14;
  *(uint *)(param_1 + 0x164) = param_2 * -0x14;
  return;
}


