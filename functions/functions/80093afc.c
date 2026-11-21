/* Function: SsUtSetReverbFeedback */
/* Address: 80093afc */

void SsUtSetReverbFeedback(short param_1)

{
  DAT_800ceec0 = (int)param_1;
  DAT_800ceeb0 = 0x10;
  SpuSetReverbModeParam((SpuReverbAttr *)&DAT_800ceeb0);
  return;
}


