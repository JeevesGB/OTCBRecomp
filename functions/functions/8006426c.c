/* Function: FUN_8006426c */
/* Address: 8006426c */

void FUN_8006426c(char *param_1,undefined2 *param_2,undefined1 *param_3,uint *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  uint *puVar4;
  
  puVar4 = g_VRAMRectPtr;
  puVar1 = (undefined1 *)((int)g_VRAMRectPtr + 3);
  g_VRAMRectPtr = g_VRAMRectPtr + 10;
  *puVar1 = 9;
                    /* Probable PsyQ macro: setPolyFT4() */
  *(undefined1 *)((int)puVar4 + 7) = 0x2c;
  *(undefined1 *)(puVar4 + 1) = *param_3;
  *(undefined1 *)((int)puVar4 + 5) = param_3[1];
  *(undefined1 *)((int)puVar4 + 6) = param_3[2];
  *(undefined2 *)(puVar4 + 2) = *param_2;
  *(undefined2 *)((int)puVar4 + 10) = param_2[1];
  *(undefined2 *)(puVar4 + 4) = param_2[2];
  *(undefined2 *)((int)puVar4 + 0x12) = param_2[3];
  *(undefined2 *)(puVar4 + 6) = param_2[4];
  *(undefined2 *)((int)puVar4 + 0x1a) = param_2[5];
  *(undefined2 *)(puVar4 + 8) = param_2[6];
  *(undefined2 *)((int)puVar4 + 0x22) = param_2[7];
  *(undefined2 *)((int)puVar4 + 0x16) = *(undefined2 *)(param_1 + 10);
                    /* Probable PsyQ macro: get/setClut(), with pattern: y << 6 | x >> 4 & 0x3f. */
  *(ushort *)((int)puVar4 + 0xe) =
       *(short *)(param_1 + 0x12) << 6 | *(ushort *)(param_1 + 0x10) >> 4 & 0x3f;
  *(char *)(puVar4 + 3) = *param_1;
  *(char *)((int)puVar4 + 0xd) = param_1[2];
  *(char *)(puVar4 + 5) = *param_1 + param_1[4] + -1;
  *(char *)((int)puVar4 + 0x15) = param_1[2];
  *(char *)(puVar4 + 7) = *param_1;
  *(char *)((int)puVar4 + 0x1d) = param_1[2] + param_1[6] + -1;
  *(char *)(puVar4 + 9) = *param_1 + param_1[4] + -1;
  cVar2 = param_1[2];
  cVar3 = param_1[6];
  *(byte *)((int)puVar4 + 7) = *(byte *)((int)puVar4 + 7) & 0xfd;
  *(char *)((int)puVar4 + 0x25) = cVar2 + cVar3 + -1;
  FUN_8009feec(puVar4,0);
                    /* Probable PsyQ macro: addPrim(). */
  *puVar4 = *puVar4 & 0xff000000 | *param_4 & 0xffffff;
  *param_4 = *param_4 & 0xff000000 | (uint)puVar4 & 0xffffff;
  return;
}


