/* Function: InitRaceCars */
/* Address: 8002d4a4 */

void InitRaceCars(void)

{
  if (g_RaceMode == 4) {
    DAT_800add30 = 0x40000;
  }
  else {
    DAT_800add30 = 0x30000;
  }
  InitRenderer(&DAT_800add18);
  ActivateDisplay();
  g_PlayerCarPtr = MemAlloc(21000);
  FUN_8002cbcc();
  FUN_800522f0();
  FUN_8005171c();
  FUN_8003ad60();
  *(ushort *)(*(int *)(g_DisplayConfig + 0x1c) + 6) =
       *(ushort *)(*(int *)(g_DisplayConfig + 0x1c) + 6) & 0xfffb;
  return;
}


