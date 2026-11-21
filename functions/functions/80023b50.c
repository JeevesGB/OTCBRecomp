/* Function: InitRenderQueue */
/* Address: 80023b50 */

void InitRenderQueue(void)

{
  g_RenderQueueHead = 0;
  g_RenderQueuePtr = &g_RenderQueueHead;
  g_RenderQueueCount = 0;
  return;
}


