/* Function: SetCameraMatrix */
/* Address: 80031448 */

/* WARNING: Removing unreachable block (ram,0x80031534) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SetCameraMatrix(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (g_RaceComplete == 0) {
    iVar3 = (int)g_TrackSurface;
    if (g_VSModeFlag != 0) {
      iVar3 = iVar3 + 0xc;
    }
  }
  else {
    iVar3 = (int)*(short *)(param_1 + 0x34);
  }
  g_CarPhysicsParams = (&g_CarInputTablePtrs)[iVar3];
  g_PlayerCarObject = *(undefined4 *)(param_1 + 0x10);
  g_CarTrackSegment = *(undefined2 *)(param_1 + 0x22);
  _g_CarPosX = *(undefined4 *)(param_1 + 0x54);
  _g_CarPosY = *(uint *)(param_1 + 0x58);
  _g_CarPosZ = *(undefined4 *)(param_1 + 0x5c);
  g_CameraRoll = *(uint *)(param_1 + 0x60);
  uVar1 = param_1 + 0x4fU & 3;
  uVar2 = param_1 + 0x4cU & 3;
  g_CameraAngleX =
       (*(int *)((param_1 + 0x4fU) - uVar1) << (3 - uVar1) * 8 |
       g_CameraRoll & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar2) * 8 |
       *(uint *)((param_1 + 0x4cU) - uVar2) >> uVar2 * 8;
  uVar1 = param_1 + 0x53U & 3;
  uVar2 = param_1 + 0x50U & 3;
  g_CameraAngleY =
       (*(int *)((param_1 + 0x53U) - uVar1) << (3 - uVar1) * 8 |
       _g_CarPosY & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar2) * 8 |
       *(uint *)((param_1 + 0x50U) - uVar2) >> uVar2 * 8;
  g_GTEScale = *(short *)(param_1 + 0x24);
  g_GTEMaxVal = 0xffff / (int)g_GTEScale;
  if (g_GTEScale == 0) {
    trap(0x1c00);
  }
  JOY_MCD_BAUD = (undefined2)(g_GTEMaxVal >> 1);
  g_CurrentCarPtr = param_1;
  SetGTEParams();
  return;
}


