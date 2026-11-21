/* Function: FUN_8002b02c */
/* Address: 8002b02c */

void FUN_8002b02c(undefined1 *param_1,short *param_2,uint *param_3)

{
  undefined1 *puVar1;
  uint *puVar2;
  
  puVar2 = g_VRAMRectPtr;
                    /* Probable PsyQ macro: setPolyG4() */
  puVar1 = (undefined1 *)((int)g_VRAMRectPtr + 7);
  g_VRAMRectPtr = g_VRAMRectPtr + 9;
  *puVar1 = 0x38;
  *(undefined1 *)((int)puVar2 + 3) = 8;
  *(undefined1 *)(puVar2 + 1) = *param_1;
  *(undefined1 *)((int)puVar2 + 5) = param_1[1];
  *(undefined1 *)((int)puVar2 + 6) = param_1[2];
  *(undefined1 *)(puVar2 + 3) = param_1[4];
  *(undefined1 *)((int)puVar2 + 0xd) = param_1[5];
  *(undefined1 *)((int)puVar2 + 0xe) = param_1[6];
  *(undefined1 *)(puVar2 + 5) = param_1[8];
  *(undefined1 *)((int)puVar2 + 0x15) = param_1[9];
  *(undefined1 *)((int)puVar2 + 0x16) = param_1[10];
  *(undefined1 *)(puVar2 + 7) = param_1[0xc];
  *(undefined1 *)((int)puVar2 + 0x1d) = param_1[0xd];
  *(undefined1 *)((int)puVar2 + 0x1e) = param_1[0xe];
  *(short *)(puVar2 + 2) = *param_2;
  *(short *)((int)puVar2 + 10) = param_2[1];
  *(short *)(puVar2 + 4) = *param_2 + param_2[2];
  *(short *)((int)puVar2 + 0x12) = param_2[1];
  *(short *)(puVar2 + 6) = *param_2;
  *(short *)((int)puVar2 + 0x1a) = param_2[1] + param_2[3];
  *(short *)(puVar2 + 8) = *param_2 + param_2[2];
  *(short *)((int)puVar2 + 0x22) = param_2[1] + param_2[3];
                    /* Probable PsyQ macro: addPrim(). */
  *puVar2 = *puVar2 & 0xff000000 | *param_3 & 0xffffff;
  *param_3 = *param_3 & 0xff000000 | (uint)puVar2 & 0xffffff;
  return;
}


