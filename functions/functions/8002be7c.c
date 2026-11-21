/* Function: StopCurrentSEQ */
/* Address: 8002be7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void StopCurrentSEQ(void)

{
  if (-1 < _g_CurrentSeqHandle) {
    SsSeqStop(g_CurrentSeqHandle);
  }
  _g_CurrentSeqHandle = 0xffffffff;
  return;
}


