/* Function: DrawSpriteFlipped */
/* Address: 8005db6c */

void DrawSpriteFlipped(undefined2 param_1,undefined2 param_2,byte *param_3,uint *param_4)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  uint *puVar3;
  u_short uVar4;
  
  puVar3 = g_VRAMRectPtr;
  puVar1 = (undefined1 *)((int)g_VRAMRectPtr + 3);
  g_VRAMRectPtr = g_VRAMRectPtr + 5;
  *puVar1 = 4;
                    /* Probable PsyQ macro: setSprt() */
  *(undefined1 *)((int)puVar3 + 7) = 100;
  *(undefined2 *)(puVar3 + 2) = param_1;
  *(undefined2 *)((int)puVar3 + 10) = param_2;
  *(byte *)(puVar3 + 3) = *param_3 & 0x3f;
  *(byte *)((int)puVar3 + 0xd) = param_3[2];
  *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(param_3 + 4);
  uVar2 = *(undefined2 *)(param_3 + 6);
  *(undefined2 *)((int)puVar3 + 0xe) = (undefined2)g_CLUTValue;
  *(byte *)((int)puVar3 + 7) = *(byte *)((int)puVar3 + 7) & 0xfe;
  *(undefined2 *)((int)puVar3 + 0x12) = uVar2;
  *(byte *)(puVar3 + 1) = param_3[0xc];
  *(byte *)((int)puVar3 + 5) = param_3[0xc];
  *(byte *)((int)puVar3 + 6) = param_3[0xc];
                    /* Probable PsyQ macro: addPrim(). */
  *puVar3 = *puVar3 & 0xff000000 | *param_4 & 0xffffff;
  *param_4 = *param_4 & 0xff000000 | (uint)puVar3 & 0xffffff;
  uVar4 = GetTPage(0,0,(int)*(short *)param_3,(int)*(short *)(param_3 + 2));
  AddTPagePrim(param_4,1,0,uVar4);
  return;
}


