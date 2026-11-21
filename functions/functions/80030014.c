/* Function: FlipDisplayAndSync */
/* Address: 80030014 */

int FlipDisplayAndSync(void)

{
  InitFrameBuffers();
  while (-1 < g_FrameBufferFlag) {
    UpdateFrameBuffer();
    UpdateSoundTest();
    UpdateDisplayEnv();
    FlipDisplayBuffers();
  }
  DrawSync(0);
  VSync(0);
  g_VRAMRectPtr = g_VRAMRectBase;
  if ((&g_DisplayStateTable)[g_DisplayBufferIdx] == 0) {
    StartSoundTest();
    InitSoundTestDisplay();
  }
  PutDrawEnv(*(DRAWENV **)(g_DisplayConfig + g_DisplayBufferIndex * 4 + 0x2c));
  return (int)(short)(&g_DisplayStateTable)[g_DisplayBufferIdx];
}


