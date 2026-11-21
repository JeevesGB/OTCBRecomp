/* Function: UpdateChampionshipEnding */
/* Address: 8008c5c4 */

void UpdateChampionshipEnding(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = GetCarReplayData();
  puVar2 = (undefined1 *)GetReplayCarData(*(undefined1 *)(iVar1 + 0x11));
  FUN_8008c340(g_EndingFlag4 & 0xff,*puVar2,*(undefined4 *)(&DAT_800c3ae0 + g_EndingFlag1 * 8));
  g_EndingFlag2 = g_EndingFlag2 + 1;
  if (g_EndingFlag2 == *(int *)(&DAT_800c3ae4 + g_EndingFlag1 * 8)) {
    g_EndingFlag1 = g_EndingFlag1 + 1;
    g_EndingFlag2 = 0;
    if (*(int *)(&DAT_800c3ae4 + g_EndingFlag1 * 8) == -1) {
      g_EndingFlag1 = 0;
    }
  }
  g_EndingFlag5 = g_EndingFlag5 + -6;
  if (g_EndingFlag5 < 0x40) {
    g_EndingFlag5 = 0xa0;
  }
  g_EndingFlag4 = g_EndingFlag4 + 8;
  if (0xff < (int)g_EndingFlag4) {
    g_EndingFlag4 = 0xff;
  }
  if ((g_PadButtons & 0x60) != 0) {
    PlaySFX(0x10);
    g_GameState = 0x1b;
  }
  return;
}


