/* Function: _SsVmGetSeqVol */
/* Address: 800969e8 */

int _SsVmGetSeqVol(uint param_1,undefined2 *param_2,undefined2 *param_3)

{
  int iVar1;
  
  DAT_800cefc4 = (short)param_1;
  iVar1 = (&DAT_800cdee8)[param_1 & 0xff] + ((int)(param_1 & 0xff00) >> 8) * 0xb0;
  *param_2 = *(undefined2 *)(iVar1 + 0x58);
  *param_3 = *(undefined2 *)(iVar1 + 0x5a);
  return (int)DAT_800cefc4;
}


