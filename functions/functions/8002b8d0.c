/* Function: InitGameSystems */
/* Address: 8002b8d0 */

void InitGameSystems(void)

{
  g_ResetFlag = 0xffffffff;
  UnmuteAllSound();
  SsUtAllKeyOff(0);
  UnloadAllVABs();
  UnloadAllSEQs();
  SetDisplayParams(0x80,0,0x80,0x80,0x80);
  FadeAudioVolume(0);
  FUN_8002bbc4();
  return;
}


