/* Function: LoadMusicTrack */
/* Address: 8002c274 */

void LoadMusicTrack(int param_1)

{
  undefined4 uVar1;
  
  UnmuteAllSound();
  SsUtAllKeyOff(0);
  if (g_AudioInitFlag != param_1) {
    if (g_AudioInitFlag != 0) {
      UnloadMusicTrack(param_1);
    }
    uVar1 = LoadSEQ(param_1,0xffffffff,g_VABDataPtr);
    (&g_VabSlots)[g_VabCount] = uVar1;
    g_VabCount = g_VabCount + 1;
  }
  g_AudioInitFlag = param_1;
  FUN_8002bbc4();
  return;
}


