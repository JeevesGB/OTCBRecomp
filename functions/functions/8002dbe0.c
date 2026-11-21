/* Function: FUN_8002dbe0 */
/* Address: 8002dbe0 */

void FUN_8002dbe0(void)

{
  if (g_AudioFlag1 == 0) {
    if ((*(uint *)(g_CarTrackSegment * 4 + g_TrackSegmentData) & 4) != 0) {
      SsUtSetReverbDepth(0x5a,0x5a);
      SetDisplayParams(0xffffffff,0x46,0xffffffff,0xffffffff,0xffffffff);
      UpdateRaceMusic();
      UpdateRaceReverb();
      g_AudioFlag1 = -1;
    }
  }
  else if ((*(uint *)(g_CarTrackSegment * 4 + g_TrackSegmentData) & 4) == 0) {
    SsUtSetReverbDepth(0x1e,0x1e);
    SetDisplayParams(0xffffffff,0x19,0xffffffff,0xffffffff,0xffffffff);
    UpdateRaceMusic();
    UpdateRaceReverb();
    g_AudioFlag1 = 0;
  }
  return;
}


