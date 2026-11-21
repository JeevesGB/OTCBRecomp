/* Function: RenderScene */
/* Address: 80051e78 */

void RenderScene(void)

{
  g_RenderFlag1 = 0;
  g_RenderFlag2 = 0;
  g_RenderFlag3 = 0;
  g_RenderFlag4 = 0;
  g_RenderFlag5 = 0;
  g_RenderActive = 1;
  if (g_RaceComplete == 0) {
    g_RenderRaceFlag = 0xffff;
  }
  else {
    g_RenderRaceFlag = 0;
  }
  g_RenderCompleteFlag = 0xffff;
  return;
}


