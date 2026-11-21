/* Function: FUN_80052d6c */
/* Address: 80052d6c */

void FUN_80052d6c(undefined2 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)MemAlloc(0x54);
  puVar1[1] = 0;
  *(undefined2 *)(puVar1 + 0xc) = param_1;
  *(undefined2 *)((int)puVar1 + 0x46) = 0;
  *(undefined2 *)(puVar1 + 0x12) = 0;
  *puVar1 = g_SoundEmitterList;
  g_SoundEmitterList = puVar1;
  return;
}


