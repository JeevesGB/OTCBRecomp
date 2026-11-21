/* Function: State_Intro2 */
/* Address: 8002c3c0 */

/* WARNING: This function may have set the stack pointer */

void State_Intro2(void)

{
  undefined1 auStack_18 [16];
  
  DAT_1f8003fc = auStack_18;
  PlayIntroAndInit(&g_Intro2MovieConfig);
  g_GameState = 0xb;
  return;
}


