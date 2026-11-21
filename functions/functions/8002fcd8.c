/* Function: UpdateFrameBuffer */
/* Address: 8002fcd8 */

void UpdateFrameBuffer(void)

{
  RECT local_10;
  
  DrawSync(0);
  VSync(0);
  InitControllerPorts();
  local_10.x = *g_CurrentOT;
  local_10.y = g_CurrentOT[1];
  local_10.w = g_CurrentOT[2];
  local_10.h = g_CurrentOT[3];
  g_VsyncCount = 0;
  MoveImage(&local_10,(int)g_CurrentOT[0x2e],(int)g_CurrentOT[0x2f]);
  DrawOTag(DAT_800ccaac);
  DAT_800cca8c = DAT_800cca8c ^ 1;
  DAT_800ccaac = *(u_long **)((int)&DAT_800ccab0 + ((int)((uint)DAT_800cca8c << 0x10) >> 0xe));
  ClearOTag(DAT_800ccaac,10);
  g_VRAMRectPtr = (&DAT_800ccaa4)[(short)DAT_800cca8c];
  if (g_RaceMode == 4) {
    DAT_800cca86 = g_PadButtons | g_PadButtons2_Alt;
    DAT_800cca88 = g_PadAnalog1 | g_PadAnalog2;
    DAT_800cca8a = g_PadButtons2 | g_PadButtons3;
  }
  else {
    DAT_800cca86 = g_PadButtons;
    DAT_800cca88 = g_PadAnalog1;
    DAT_800cca8a = g_PadButtons2;
  }
  return;
}


