/* Function: State_ReplayInit2 */
/* Address: 800622a8 */

void State_ReplayInit2(void)

{
  g_ReplayInitFlag1 = 1;
  g_ReplayInitFlag2 = 0xc;
  InitReplaySystem();
  g_GameState = 0x19;
  return;
}


