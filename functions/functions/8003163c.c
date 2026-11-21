/* Function: InitCarCamera */
/* Address: 8003163c */

void InitCarCamera(int param_1)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = malloc3(100);
  uVar2 = (uint)g_CameraFlag3;
  g_CameraFlag3 = g_CameraFlag3 + 1;
  *(int **)((int)&g_CameraList + ((int)(uVar2 << 0x10) >> 0xe)) = piVar3;
  bzero((uchar *)piVar3,100);
  piVar3[4] = param_1;
  sVar1 = *(short *)(param_1 + 0x15c);
  piVar3[1] = 0;
  *(short *)((int)piVar3 + 0x22) = sVar1 >> 4;
  if (g_RaceComplete == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = g_TrackSurface + 10;
  }
  g_PlayerCarObject = param_1;
  *piVar3 = DAT_800ccb18 + *(int *)(iVar4 * 4 + DAT_800ccb18);
  return;
}


