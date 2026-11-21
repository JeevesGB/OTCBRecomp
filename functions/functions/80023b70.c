/* Function: AddRenderQueueItem */
/* Address: 80023b70 */

undefined4 * AddRenderQueueItem(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = malloc3(param_1 & 0xffff);
  puVar1 = g_RenderQueuePtr;
  if (puVar2 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uVar3 = *g_RenderQueuePtr;
    g_RenderQueueCount = g_RenderQueueCount + 1;
    g_RenderQueuePtr = puVar2;
    *puVar2 = uVar3;
    *puVar1 = puVar2;
    puVar2[1] = param_2;
    *(undefined2 *)(puVar2 + 2) = 0x8000;
    *(undefined2 *)((int)puVar2 + 10) = 0;
  }
  return puVar2;
}


