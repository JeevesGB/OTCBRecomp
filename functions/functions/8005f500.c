/* Function: State_MemoryCard */
/* Address: 8005f500 */

void State_MemoryCard(void)

{
  int iVar1;
  uint uVar2;
  
  InitMemoryCardOp();
  while (g_MemCardOpActive != 0) {
    UpdateMemoryCardOp();
    iVar1 = *(int *)(&g_MemCardStateTable + g_MemCardOpState * 0xc);
    (*(code *)(&g_MemCardHandlerTable)[g_MemCardOpState * 3])();
    uVar2 = *(uint *)(&g_MemCardFlagTable + g_MemCardOpState * 0xc);
    ProcessRenderQueue();
    (*(code *)(&g_MemCardDisplayHandlerTable)[iVar1])();
    RenderMemoryCard();
    VsyncWait();
    if (((uVar2 & 1) == 0) && ((g_PadButtons & 0x90) != 0)) {
      g_MemCardSFX = 0x11;
      g_MemCardOpState = 0x20;
    }
    if (-1 < g_MemCardSFX) {
      PlaySFX();
      g_MemCardSFX = -1;
    }
    g_DisplayActive = 0;
  }
  MemCardSync(0,(long *)0x0,(long *)0x0);
  MemCardStop();
  g_GameState = 6;
  if (g_MemCardReturnFlag == 0) {
    g_GameState = 0xb;
  }
  else {
    g_MemCardReturnFlag = 0;
  }
  return;
}


