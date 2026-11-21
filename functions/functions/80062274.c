/* Function: State_ReplayInit */
/* Address: 80062274 */

void State_ReplayInit(void)

{
  g_ReplayInitFlag1 = 0;
  g_ReplayInitFlag2 = 0;
  InitReplaySystem();
  g_GameState = 0xd;
  return;
}


