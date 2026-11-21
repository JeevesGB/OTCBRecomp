/* Function: UpdateCarTrackPosition */
/* Address: 80035998 */

void UpdateCarTrackPosition(int param_1)

{
  if (*(short *)(param_1 + 0x17a) == 0) {
    (&DAT_800ccb34)[g_TrackSegmentFlag] = param_1;
    g_TrackSegmentFlag = g_TrackSegmentFlag + 1;
  }
  return;
}


