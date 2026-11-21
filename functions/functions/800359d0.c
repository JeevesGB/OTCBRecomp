/* Function: FUN_800359d0 */
/* Address: 800359d0 */

void FUN_800359d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)(param_1 + *(int *)(param_1 + 4));
  DAT_800ccb70 = param_1 + *(int *)(param_1 + 8);
  DAT_800ccc00 = 0;
  g_CameraAngle = 0;
  g_WheelForceTable3 = 0;
  DAT_800ccc08 = 0;
  DAT_800ccbf0 = 0;
  g_WheelForceTable4 = 0;
  g_WheelForceTable1 = 0;
  g_WheelForceTable2 = 0;
  DAT_800ccbfc = 0;
  g_TrackSegmentData = param_1 + *(int *)(param_1 + 0xc);
  g_TrackSegmentCount = (int)*(short *)(pbVar5 + 4);
  g_TrackLength = g_TrackSegmentCount << 4;
  DAT_800cca10 = (int)*(short *)(pbVar5 + 6);
  DAT_800ccc0c = (int)*(short *)(DAT_800ccb70 + 6);
  DAT_800ccbe8 = (uint)pbVar5[3];
  if (*(int *)(param_1 + 0x10) != 0) {
    DAT_800ccbfc = param_1 + *(int *)(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    g_WheelForceTable2 = param_1 + *(int *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    g_WheelForceTable1 = param_1 + *(int *)(param_1 + 0x18);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    g_WheelForceTable4 = param_1 + *(int *)(param_1 + 0x1c);
  }
  piVar3 = (int *)(param_1 + *(int *)(param_1 + 0x20));
  if (*(int *)(param_1 + 0x20) != 0) {
    DAT_800ccbf8 = (int)piVar3 + *piVar3;
    DAT_800ccbf0 = (int)piVar3 + piVar3[1];
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    DAT_800ccc08 = param_1 + *(int *)(param_1 + 0x24);
  }
  piVar3 = (int *)(param_1 + *(int *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x28) != 0) {
    g_TrackSurfaceData = (int)piVar3 + *piVar3;
    g_WheelForceTable3 = (int)piVar3 + piVar3[1];
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    DAT_800ccc00 = param_1 + *(int *)(param_1 + 0x2c);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    g_CameraAngle = param_1 + *(int *)(param_1 + 0x30);
  }
  iVar4 = 0;
  piVar3 = (int *)(param_1 + *(int *)(param_1 + 0x34));
  DAT_800cca48 = (int)piVar3 + *piVar3;
  DAT_800cca44 = (int)piVar3 + piVar3[1];
  piVar3 = (int *)(param_1 + *(int *)(param_1 + 0x38));
  DAT_800cca14 = DAT_800cca44 + *(int *)(DAT_800cca44 + 4);
  DAT_800cca74 = DAT_800cca44 + *(int *)(DAT_800cca44 + 8);
  DAT_800ccb24 = (int)piVar3 + piVar3[1];
  DAT_800ccb28 = (int)piVar3 + *piVar3;
  DAT_800ccb80 = param_1 + *(int *)(param_1 + 0x3c);
  g_TrackSegmentArray = param_1 + *(int *)(param_1 + 0x40);
  DAT_800cca18 = param_1 + *(int *)(param_1 + 0x44);
  DAT_800ccb2c = DAT_800ccb24 + *(int *)(DAT_800ccb24 + 4);
  piVar3 = (int *)(param_1 + 0x48);
  g_CarTrackData = pbVar5;
  if (*pbVar5 != 0) {
    piVar2 = &DAT_800cca50;
    do {
      iVar1 = *piVar3;
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + 1;
      *piVar2 = param_1 + iVar1;
      piVar2 = piVar2 + 1;
    } while (iVar4 < (int)(uint)*pbVar5);
  }
  pbVar5 = g_CarTrackData;
  iVar4 = 0;
  if (g_CarTrackData[1] != 0) {
    piVar2 = &DAT_800cca20;
    do {
      iVar1 = *piVar3;
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + 1;
      *piVar2 = param_1 + iVar1;
      piVar2 = piVar2 + 1;
    } while (iVar4 < (int)(uint)pbVar5[1]);
  }
  return;
}


