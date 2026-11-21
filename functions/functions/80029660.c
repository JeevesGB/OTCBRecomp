/* Function: FUN_80029660 */
/* Address: 80029660 */

void FUN_80029660(void)

{
  if ((g_PadButtons & 0x2000) != 0) {
    g_ReplayTrackFlag = 0;
    g_MenuSelection = g_MenuSelection + 1;
    PlaySFX(0xf);
    if (3 < g_MenuSelection) {
      g_MenuSelection = 0;
    }
  }
  if (((int)(short)g_PadButtons & 0x8000U) != 0) {
    g_ReplayTrackFlag = 0;
    g_MenuSelection = g_MenuSelection + -1;
    PlaySFX(0xf);
    if (g_MenuSelection < 0) {
      g_MenuSelection = 3;
    }
  }
  if ((g_PadButtons & 0xf0) != 0) {
    g_GameState = 0x12;
    PlaySFX(0x10);
  }
  return;
}


