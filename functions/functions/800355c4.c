/* Function: UpdateTrackEffects */
/* Address: 800355c4 */

void UpdateTrackEffects(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  if (0 < g_TrackSegmentFlag + -1) {
    puVar6 = &g_TrackSegmentFlag;
    do {
      iVar2 = iVar5 + 1;
      iVar4 = puVar6[1];
      if (iVar2 < g_TrackSegmentFlag) {
        puVar3 = &g_TrackSegmentFlag + iVar2;
        do {
          iVar1 = (int)*(short *)(iVar4 + 0x15c) - (int)*(short *)(puVar3[1] + 0x15c);
          if (iVar1 < 0) {
            iVar1 = iVar1 + g_TrackLength;
          }
          if (g_TrackLength / 2 < iVar1) {
            iVar1 = iVar1 - g_TrackLength;
          }
          if (iVar1 < 0) {
            iVar1 = -iVar1;
          }
          if (iVar1 < 0x15) {
            TriggerSlipstream(iVar4);
          }
          iVar2 = iVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar2 < g_TrackSegmentFlag);
      }
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar5 < g_TrackSegmentFlag + -1);
  }
  return;
}


