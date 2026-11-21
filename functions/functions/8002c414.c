/* Function: State_Intro3 */
/* Address: 8002c414 */

/* WARNING: This function may have set the stack pointer */

void State_Intro3(void)

{
  int iVar1;
  undefined1 auStack_18 [16];
  
  DAT_1f8003fc = auStack_18;
  PlayIntroAndInit(&g_Intro3MovieConfig);
  iVar1 = GetCarData();
  if (*(char *)(iVar1 + 6) == '\x02') {
    g_GameState = 3;
  }
  else {
    g_GameState = 0xb;
  }
  return;
}


