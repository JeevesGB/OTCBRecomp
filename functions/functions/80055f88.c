/* Function: ActivateDisplay */
/* Address: 80055f88 */

void ActivateDisplay(void)

{
  g_DisplayActive = 0xffffffff;
  VSync(0);
  PutDispEnv((DISPENV *)(g_CurrentOT + 1));
  PutDrawEnv(g_CurrentOT);
  if (*(short *)(g_DisplayConfig + 0x10) != 0) {
    g_DrawBuffer = 0xffffffff;
  }
  g_VsyncCount = 0;
  InitControllerPorts();
  return;
}


