/* Function: FUN_80023c78 */
/* Address: 80023c78 */

void FUN_80023c78(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = g_RenderQueueHead; puVar1 != (void *)0x0; puVar1 = (undefined4 *)*puVar1) {
    free3(puVar1);
  }
  g_RenderQueueHead = (void *)0x0;
  g_RenderQueuePtr = &g_RenderQueueHead;
  g_RenderQueueCount = 0;
  return;
}


