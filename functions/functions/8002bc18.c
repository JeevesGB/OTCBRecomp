/* Function: UnloadAllSEQs */
/* Address: 8002bc18 */

void UnloadAllSEQs(void)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  StopCurrentSEQ();
  iVar3 = 0;
  if (0 < g_SeqCount) {
    psVar2 = (short *)&g_SeqSlots;
    do {
      iVar3 = iVar3 + 1;
      SsSeqClose(*psVar2);
      iVar1 = g_SeqCount;
      psVar2[0] = -1;
      psVar2[1] = -1;
      psVar2 = psVar2 + 2;
    } while (iVar3 < iVar1);
  }
  g_SeqCount = 0;
  return;
}


