/* Function: ProcessRenderQueue */
/* Address: 80023bdc */

void ProcessRenderQueue(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = &g_RenderQueueHead;
  puVar1 = g_RenderQueueHead;
  while (puVar1 != (undefined4 *)0x0) {
    if (*(short *)(puVar1 + 2) < 0) {
      (*(code *)puVar1[1])();
      puVar2 = puVar1;
    }
    else {
      *puVar2 = *puVar1;
      free3(puVar1);
      g_RenderQueueCount = g_RenderQueueCount + -1;
    }
    puVar1 = (undefined4 *)*puVar2;
  }
  g_RenderQueuePtr = puVar2;
  return;
}


