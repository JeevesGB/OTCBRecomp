/* Function: DispatchCarPhysics */
/* Address: 8002d5c8 */

void DispatchCarPhysics(void)

{
  if (g_VSModeFlag == 0) {
    UpdateSinglePlayerPhysics();
  }
  else {
    g_RaceFrameFlag = g_RaceFrameFlag + 1;
    *(ushort *)(*(int *)(g_DisplayConfig + 0x1c) + 6) =
         *(ushort *)(*(int *)(g_DisplayConfig + 0x1c) + 6) | 4;
    UpdateVSPlayerPhysics();
  }
  return;
}


