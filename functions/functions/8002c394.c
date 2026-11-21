/* Function: State_Init */
/* Address: 8002c394 */

void State_Init(void)

{
  PlayIntroAndInit(&g_IntroMovieConfig);
  g_GameState = 5;
  return;
}


