/* Function: LoadAudioBank */
/* Address: 8002c144 */

void LoadAudioBank(void)

{
  undefined4 uVar1;
  
  UnmuteAllSound();
  SsUtAllKeyOff(0);
  if (g_ResetFlag == 1) {
    MemAlloc(0xb14c);
  }
  else {
    g_AudioBuffer = MemAlloc(0xb14c);
    g_VABDataPtr = g_AudioBuffer + 0x1008;
    g_AudioInitFlag = 0;
    UnloadAllVABs();
    UnloadAllSEQs();
    uVar1 = LoadVAB(0xf9,0xffffffff,g_AudioBuffer);
    (&g_VabSlots)[g_VabCount] = uVar1;
    g_VabCount = g_VabCount + 1;
  }
  g_ResetFlag = 1;
  SetDisplayParams(0x80,0,0,g_SavedSFXVolume,g_SavedVolume);
  FadeAudioVolume(0);
  FUN_8002bbc4();
  return;
}


