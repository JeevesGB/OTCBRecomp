/* Function: InitGraphics */
/* Address: 80055f3c */

void InitGraphics(void)

{
  VSync(0);
  InitGPU_Pre();
  VSyncCallback((f *)&LAB_800562e0);
  InitGPU_Post();
  g_FrameCount = 0;
  ResetGraph(1);
  return;
}


