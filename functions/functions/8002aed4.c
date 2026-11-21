/* Function: FUN_8002aed4 */
/* Address: 8002aed4 */

void FUN_8002aed4(void)

{
  if ((g_PadButtons & 0x800) != 0) {
    g_GameState = 0xb;
  }
  return;
}


