/* Function: SsUtSetReverbDelay */
/* Address: 8009397c */

void SsUtSetReverbDelay(short param_1)

{
  DAT_800ceebc = (int)param_1;
  DAT_800ceeb0 = 8;
  SpuSetReverbModeParam((SpuReverbAttr *)&DAT_800ceeb0);
  return;
}


