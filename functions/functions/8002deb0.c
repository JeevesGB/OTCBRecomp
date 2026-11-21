/* Function: TriggerSlipstreamEffect */
/* Address: 8002deb0 */

void TriggerSlipstreamEffect(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * param_2;
  if (0x4000 < param_1) {
    iVar1 = param_2 * 0x4000;
  }
  if ((int)g_AudioFlag3 < iVar1 >> 0xe) {
    g_AudioFlag3 = (short)(iVar1 >> 0xe);
  }
  return;
}


