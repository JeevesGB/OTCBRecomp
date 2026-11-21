/* Function: main */
/* Address: 80023a8c */

void main(void)

{
  __main();
  SetVideoMode(0);
  ResetCallback();
  InitGPU_Pre();
  VSyncCallback((f *)&LAB_80023b40);
  DrawSyncCallback((func *)&LAB_80023b48);
  InitGPU_Post();
  InitCD();
  InitMemCard();
  InitControllers();
  InitAudioAndDisplay();
  InitGTE();
  g_GameState = 4;
  do {
    (*(code *)(&PTR_State_MainMenu_800ac63c)[g_GameState])();
  } while( true );
}


