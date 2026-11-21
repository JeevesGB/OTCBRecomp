/* Function: SaveReplaySlot */
/* Address: 80069b60 */

void SaveReplaySlot(uint param_1)

{
  (&DAT_800ba768)[param_1 & 0xff] = 0xff;
  return;
}


