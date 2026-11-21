/* Function: UpdateBGMVolume */
/* Address: 8002bae0 */

void UpdateBGMVolume(void)

{
  short sVar1;
  
  sVar1 = (short)((uint)(*(short *)(g_DisplayParams + 0x12) * 0xfe00) >> 0x10);
  SsSeqSetVol(g_CurrentSeqHandle,sVar1,sVar1);
  return;
}


