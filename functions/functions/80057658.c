/* Function: DrawSprite */
/* Address: 80057658 */

uint * DrawSprite(undefined1 *param_1,undefined2 param_2,undefined2 param_3,uint *param_4)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  uint *puVar3;
  
  puVar3 = g_VRAMRectPtr;
                    /* Probable PsyQ macro: setSprt() + setShadeTex(sprt, 1) */
  puVar1 = (undefined1 *)((int)g_VRAMRectPtr + 7);
  g_VRAMRectPtr = g_VRAMRectPtr + 5;
  *puVar1 = 0x65;
  *(undefined1 *)((int)puVar3 + 3) = 4;
                    /* Probable PsyQ macro: get/setClut(), with pattern: y << 6 | x >> 4 & 0x3f. */
  *(ushort *)((int)puVar3 + 0xe) =
       *(short *)(param_1 + 0x12) << 6 | *(ushort *)(param_1 + 0x10) >> 4 & 0x3f;
  *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)((int)puVar3 + 0x12) = *(undefined2 *)(param_1 + 6);
  *(undefined1 *)(puVar3 + 3) = *param_1;
  *(undefined1 *)((int)puVar3 + 0xd) = param_1[2];
  uVar2 = *(undefined2 *)(param_1 + 10);
  *(undefined2 *)(puVar3 + 2) = param_2;
  *(undefined2 *)((int)puVar3 + 10) = param_3;
  *puVar3 = *puVar3 & 0xff000000 | *param_4 & 0xffffff;
  *param_4 = *param_4 & 0xff000000 | (uint)puVar3 & 0xffffff;
  AddTPagePrim(param_4,1,0,uVar2);
  return puVar3;
}


