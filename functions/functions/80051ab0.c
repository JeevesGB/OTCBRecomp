/* Function: RenderTrackObjects */
/* Address: 80051ab0 */

void RenderTrackObjects(uint *param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  uint *puVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  
  puVar2 = g_VRAMRectPtr;
  if (g_RacePositionFlag != 0) {
    if (DAT_800cd068 < 0x40) {
      DAT_800cd068 = DAT_800cd068 + 1;
    }
    iVar6 = DAT_800cd068 * 0x50;
    puVar1 = (undefined1 *)((int)g_VRAMRectPtr + 3);
    g_VRAMRectPtr = g_VRAMRectPtr + 6;
    *puVar1 = 5;
    *(undefined2 *)((int)puVar2 + 10) = 0xff88;
    *(undefined2 *)((int)puVar2 + 0xe) = 0xff88;
    sVar5 = (short)(iVar6 >> 7);
    sVar4 = sVar5 + -0x78;
                    /* Probable PsyQ macro: setPolyF4() */
    *(undefined1 *)((int)puVar2 + 7) = 0x28;
    *(undefined1 *)(puVar2 + 1) = 0;
    *(undefined1 *)((int)puVar2 + 5) = 0;
    *(undefined1 *)((int)puVar2 + 6) = 0;
    *(undefined2 *)(puVar2 + 2) = 0xff60;
    *(undefined2 *)(puVar2 + 3) = 0xa0;
    *(undefined2 *)(puVar2 + 4) = 0xff60;
    *(short *)((int)puVar2 + 0x12) = sVar4;
    *(undefined2 *)(puVar2 + 5) = 0xa0;
    *(short *)((int)puVar2 + 0x16) = sVar4;
                    /* Probable PsyQ macro: addPrim(). */
    *puVar2 = *puVar2 & 0xff000000 | *param_1 & 0xffffff;
    puVar3 = g_VRAMRectPtr;
    *param_1 = *param_1 & 0xff000000 | (uint)puVar2 & 0xffffff;
    sVar5 = 0x78 - sVar5;
    puVar1 = (undefined1 *)((int)g_VRAMRectPtr + 3);
    g_VRAMRectPtr = g_VRAMRectPtr + 6;
    *puVar1 = 5;
                    /* Probable PsyQ macro: setPolyF4() */
    *(undefined1 *)((int)puVar3 + 7) = 0x28;
    *(undefined1 *)(puVar3 + 1) = 0;
    *(undefined1 *)((int)puVar3 + 5) = 0;
    *(undefined1 *)((int)puVar3 + 6) = 0;
    *(undefined2 *)(puVar3 + 2) = 0xff60;
    *(short *)((int)puVar3 + 10) = sVar5;
    *(undefined2 *)(puVar3 + 3) = 0xa0;
    *(short *)((int)puVar3 + 0xe) = sVar5;
    *(undefined2 *)(puVar3 + 4) = 0xff60;
    *(undefined2 *)((int)puVar3 + 0x12) = 0x78;
    *(undefined2 *)(puVar3 + 5) = 0xa0;
    *(undefined2 *)((int)puVar3 + 0x16) = 0x78;
                    /* Probable PsyQ macro: addPrim(). */
    *puVar3 = *puVar3 & 0xff000000 | *param_1 & 0xffffff;
    *param_1 = *param_1 & 0xff000000 | (uint)puVar3 & 0xffffff;
  }
  return;
}


