/* Function: MIDIREAD_OBJ_2D4 */
/* Address: 8008ed50 */

void MIDIREAD_OBJ_2D4(void)

{
  int unaff_s0;
  int unaff_s1;
  ushort unaff_s2;
  
  if (*(char *)(unaff_s0 + 0x22) != -1) {
    *(undefined1 *)(unaff_s0 + 0x14) = 0;
    _SsSndNextSep((int)*(char *)(unaff_s0 + 0x22),(int)*(char *)(unaff_s0 + 0x23));
    _SsVmSeqKeyOff((int)(short)(unaff_s2 | (ushort)(unaff_s1 << 8)));
  }
  _SsVmSeqKeyOff((int)(short)(unaff_s2 | (ushort)(unaff_s1 << 8)));
  *(int *)(unaff_s0 + 0x90) = (int)*(short *)(unaff_s0 + 0x54);
  return;
}


