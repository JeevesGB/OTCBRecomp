/* Function: InitRaceAI */
/* Address: 8004e8fc */

void InitRaceAI(void)

{
  DAT_800ccff8 = g_ResultSavePtr1;
  DAT_800ccffc = g_ResultSavePtr2;
  DAT_800ccff2 = 0;
  DAT_800ccff0 = 0;
  g_ResultSavePtr1 = 0;
  g_ResultSavePtr2 = 0;
  return;
}


