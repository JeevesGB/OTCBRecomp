/* Function: FUN_8002c308 */
/* Address: 8002c308 */

void FUN_8002c308(void)

{
  undefined4 uVar1;
  
  g_ResetFlag = 2;
  UnmuteAllSound();
  SetDisplayParams(0x80,0,g_SavedVolume,g_SavedSFXVolume,0);
  FadeAudioVolume(0);
  uVar1 = LoadVAB((int)DAT_800ad6f0,0xffffffff,0);
  (&g_VabSlots)[g_VabCount] = uVar1;
  g_VabCount = g_VabCount + 1;
  FUN_8002bbc4();
  return;
}


