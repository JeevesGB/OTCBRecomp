/* Function: UpdateRaceLogic */
/* Address: 8002d548 */

void UpdateRaceLogic(void)

{
  g_RaceFrameFlag = 0;
  if (g_RaceMode == 4) {
    g_VSModeFlag = 0xffff;
  }
  else {
    g_VSModeFlag = 0;
  }
  SetActiveCarCount();
  *(ushort *)(*(int *)(g_DisplayConfig + 0x1c) + 6) =
       *(ushort *)(*(int *)(g_DisplayConfig + 0x1c) + 6) & 0xfffb;
  g_CollisionFlag = 0;
  UpdateRacePositions();
  return;
}


