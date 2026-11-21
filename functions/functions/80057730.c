/* Function: DrawSpriteEx */
/* Address: 80057730 */

uint * DrawSpriteEx(undefined1 *param_1,undefined2 param_2,undefined2 param_3,uint *param_4,
                   short param_5,int param_6,int param_7)

{
  undefined1 *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 uVar4;
  
  puVar2 = g_VRAMRectPtr;
                    /* Probable PsyQ macro: setSprt() + setShadeTex(sprt, 1) */
  puVar1 = (undefined1 *)((int)g_VRAMRectPtr + 7);
  g_VRAMRectPtr = g_VRAMRectPtr + 5;
  *puVar1 = 0x65;
  *(undefined1 *)((int)puVar2 + 3) = 4;
                    /* Probable PsyQ macro: get/setClut(), with pattern: y << 6 | x >> 4 & 0x3f. */
  *(ushort *)((int)puVar2 + 0xe) =
       (*(short *)(param_1 + 0x12) + param_5) * 0x40 | *(ushort *)(param_1 + 0x10) >> 4 & 0x3f;
  *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)((int)puVar2 + 0x12) = *(undefined2 *)(param_1 + 6);
  *(undefined1 *)(puVar2 + 3) = *param_1;
  uVar4 = param_1[2];
  *(undefined2 *)(puVar2 + 2) = param_2;
  *(undefined2 *)((int)puVar2 + 10) = param_3;
  *(undefined1 *)((int)puVar2 + 0xd) = uVar4;
  uVar3 = (uint)*(ushort *)(param_1 + 10);
  if (-1 < param_6) {
    uVar3 = uVar3 | param_6 << 5;
    *(byte *)((int)puVar2 + 7) = *(byte *)((int)puVar2 + 7) | 2;
  }
  if (-1 < param_7) {
    uVar4 = (undefined1)param_7;
    *(undefined1 *)((int)puVar2 + 6) = uVar4;
    *(undefined1 *)((int)puVar2 + 5) = uVar4;
    *(undefined1 *)(puVar2 + 1) = uVar4;
    *(byte *)((int)puVar2 + 7) = *(byte *)((int)puVar2 + 7) & 0xfe;
  }
                    /* Probable PsyQ macro: addPrim(). */
  *puVar2 = *puVar2 & 0xff000000 | *param_4 & 0xffffff;
  *param_4 = *param_4 & 0xff000000 | (uint)puVar2 & 0xffffff;
  AddTPagePrim(param_4,1,0,uVar3);
  return puVar2;
}


