/* Function: FUN_800281f8 */
/* Address: 800281f8 */

void FUN_800281f8(void)

{
  if ((g_PadButtons & 0x2000) != 0) {
    g_ReplayFlag2 = 1;
    g_ReplayFlag3 = 0;
    DAT_800cbbbc = g_MenuSelection;
    g_MenuSelection = g_MenuSelection + 1;
    PlaySFX(0xf);
    if (0xb < g_MenuSelection) {
      g_MenuSelection = 0;
    }
  }
  if (((int)(short)g_PadButtons & 0x8000U) != 0) {
    g_ReplayFlag2 = 1;
    g_ReplayFlag3 = 0;
    DAT_800cbbbc = g_MenuSelection;
    g_MenuSelection = g_MenuSelection + -1;
    PlaySFX(0xf);
    if (g_MenuSelection < 0) {
      g_MenuSelection = 0xb;
    }
  }
  if ((g_PadButtons & 0xf0) != 0) {
    g_GameState = 0xb;
    PlaySFX(0x11);
  }
  return;
}


