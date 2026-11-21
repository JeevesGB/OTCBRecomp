/* Function: FUN_8002dce0 */
/* Address: 8002dce0 */

void FUN_8002dce0(void)

{
  if (0x14 < g_AudioFlag3) {
    PlayCarSFX(0x15,2);
  }
  if (g_AudioFlag4 != 0) {
    g_AudioFlag4 = g_AudioFlag4 + -1;
  }
  if ((0x14 < g_AudioFlag2) && (g_AudioFlag4 == 0)) {
    if (0x80 < g_AudioFlag2) {
      g_AudioFlag2 = 0x80;
    }
    PlayCarSFX(0x14,7,(int)g_AudioFlag2);
    g_AudioFlag4 = 4;
  }
  g_AudioFlag2 = 0;
  g_AudioFlag3 = 0;
  return;
}


