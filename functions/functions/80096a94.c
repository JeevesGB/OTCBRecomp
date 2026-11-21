/* Function: _SsVmGetSeqRVol */
/* Address: 80096a94 */

int _SsVmGetSeqRVol(uint param_1)

{
  DAT_800cefc4 = (short)param_1;
  return (int)*(short *)((&DAT_800cdee8)[param_1 & 0xff] + ((int)(param_1 & 0xff00) >> 8) * 0xb0 +
                        0x5a);
}


