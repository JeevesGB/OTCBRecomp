/* Function: MIDIREAD_OBJ_6A8 */
/* Address: 8008f124 */

void MIDIREAD_OBJ_6A8(int param_1,short param_2)

{
  (*DAT_800cde54)(param_1 >> 0x10,(int)param_2);
  return;
}


