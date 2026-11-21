/* Function: SetActiveCarCount */
/* Address: 8003af70 */

void SetActiveCarCount(void)

{
  if (g_RacePosition != 0) {
    g_ActiveCarCount = 2;
    return;
  }
  if (g_VSModeFlag != 0) {
    g_ActiveCarCount = 4;
    return;
  }
  g_ActiveCarCount = 6;
  return;
}


