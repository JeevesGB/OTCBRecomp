/* Function: SsUtSetReverbDepth */
/* Address: 800939bc */

void SsUtSetReverbDepth(short param_1,short param_2)

{
  DAT_800ceeb0 = 6;
  DAT_800ceeb8 = (undefined2)((param_1 * 0x7fff) / 0x7f);
  DAT_800ceeba = (undefined2)((param_2 * 0x7fff) / 0x7f);
  SpuSetReverbModeParam((SpuReverbAttr *)&DAT_800ceeb0);
  return;
}


