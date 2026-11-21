/* Function: InitSoundSystem */
/* Address: 8008f5ec */

/* Possible SSINIT_C.OBJ/SsInit */

void InitSoundSystem(void)

{
  ResetCallback();
  FUN_8009797c();
  SpuClearReverbWorkArea(7);
  _SsInit();
  return;
}


