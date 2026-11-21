/* Function: DrawMenuBackground */
/* Address: 8002af88 */

void DrawMenuBackground(undefined1 *param_1,undefined2 *param_2,uint *param_3)

{
  undefined1 *puVar1;
  uint *puVar2;
  
  puVar2 = g_VRAMRectPtr;
  puVar1 = (undefined1 *)((int)g_VRAMRectPtr + 7);
  g_VRAMRectPtr = g_VRAMRectPtr + 4;
  *puVar1 = 0x61;
  *(undefined1 *)((int)puVar2 + 3) = 3;
  *(undefined1 *)(puVar2 + 1) = *param_1;
  *(undefined1 *)((int)puVar2 + 5) = param_1[1];
  *(undefined1 *)((int)puVar2 + 6) = param_1[2];
  *(undefined2 *)(puVar2 + 2) = *param_2;
  *(undefined2 *)((int)puVar2 + 10) = param_2[1];
  *(undefined2 *)(puVar2 + 3) = param_2[2];
  *(undefined2 *)((int)puVar2 + 0xe) = param_2[3];
                    /* Probable PsyQ macro: addPrim(). */
  *puVar2 = *puVar2 & 0xff000000 | *param_3 & 0xffffff;
  *param_3 = *param_3 & 0xff000000 | (uint)puVar2 & 0xffffff;
  return;
}


