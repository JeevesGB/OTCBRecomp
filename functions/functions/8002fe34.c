/* Function: UpdateDisplayEnv */
/* Address: 8002fe34 */

void UpdateDisplayEnv(void)

{
  uint uVar1;
  
  if ((DAT_800cca88 & 0x1000) == 0) {
    if (((DAT_800cca88 & 0x4000) != 0) &&
       (uVar1 = (uint)g_DisplayBufferIdx, g_DisplayBufferIdx = (ushort)(uVar1 + 1),
       (int)DAT_800cca8e <= (int)((uVar1 + 1) * 0x10000) >> 0x10)) {
      g_DisplayBufferIdx = g_DisplayBufferIdx - DAT_800cca8e;
    }
  }
  else {
    uVar1 = (uint)g_DisplayBufferIdx;
    g_DisplayBufferIdx = (ushort)(uVar1 - 1);
    if ((int)((uVar1 - 1) * 0x10000) < 0) {
      g_DisplayBufferIdx = g_DisplayBufferIdx + DAT_800cca8e;
    }
  }
  if ((DAT_800cca86 & 0x860) == 0) {
    if ((DAT_800cca86 & 0x90) == 0) {
      return;
    }
    g_DisplayBufferIdx = 0;
  }
  g_FrameBufferFlag = g_FrameBufferFlag | 0x8000;
  return;
}


