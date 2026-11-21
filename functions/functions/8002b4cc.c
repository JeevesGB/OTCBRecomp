/* Function: UnloadMusicTrack */
/* Address: 8002b4cc */

void UnloadMusicTrack(void)

{
  bool bVar1;
  int iVar2;
  short *psVar3;
  
  if (g_SeqCount != 0) {
    g_SeqCount = g_SeqCount + -1;
    psVar3 = (short *)(&g_SeqSlots + g_SeqCount);
    SsSeqClose(*psVar3);
    iVar2 = g_VabCount;
    bVar1 = g_VabCount != 0;
    psVar3[0] = -1;
    psVar3[1] = -1;
    if (bVar1) {
      g_VabCount = iVar2 + -1;
      psVar3 = (short *)(&g_VabSlots + g_VabCount);
      SsVabClose(*psVar3);
      psVar3[0] = -1;
      psVar3[1] = -1;
    }
  }
  return;
}


