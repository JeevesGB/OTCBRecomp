/* Function: UpdateRaceReverb */
/* Address: 8002ba7c */

void UpdateRaceReverb(void)

{
  SetAudioVolumes(*(short *)(g_DisplayParams + 2) * 0xfe00 >> 0x10,
                  *(short *)(g_DisplayParams + 6) * 0xfe00 >> 0x10,
                  *(short *)(g_DisplayParams + 10) * 0xfe00 >> 0x10);
  return;
}


