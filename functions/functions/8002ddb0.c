/* Function: UpdateRaceAudio */
/* Address: 8002ddb0 */

void UpdateRaceAudio(void)

{
  undefined1 uVar1;
  
  g_AudioFlag1 = 0;
  g_AudioFlag2 = 0;
  g_AudioFlag3 = 0;
  InitSoundTest();
  UpdateEngineSound();
  SsUtSetReverbDepth(0x1e,0x1e);
  SetDisplayParams(0xffffffff,0x19,0xffffffff,0xffffffff,0xffffffff);
  UpdateRaceMusic();
  UpdateRaceReverb();
  uVar1 = g_SavedVolume;
  if (g_RaceComplete != 0) {
    uVar1 = 0;
  }
  SetDisplayParams(0xffffffff,0xffffffff,uVar1,0xffffffff,0xffffffff);
  g_AudioFlag4 = 0;
  return;
}


