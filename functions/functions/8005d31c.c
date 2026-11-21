/* Function: MemFreeTemp */
/* Address: 8005d31c */

void MemFreeTemp(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + -8);
  puVar1 = &g_Heap2Used;
  puVar2 = g_Heap2Used;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    if (puVar2 == puVar3) break;
    puVar1 = puVar2;
    puVar2 = (undefined4 *)*puVar2;
  }
  *puVar1 = *puVar3;
  puVar1 = &g_Heap2Base;
  puVar2 = g_Heap2Base;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      g_Heap2Base = puVar3;
      *puVar3 = 0;
      return;
    }
    if (puVar3 < puVar2) break;
    puVar1 = puVar2;
    puVar2 = (undefined4 *)*puVar2;
  }
  if (puVar3 == (undefined4 *)((int)puVar1 + puVar1[1])) {
    puVar1[1] = puVar1[1] + *(int *)(param_1 + -4);
    puVar3 = puVar1;
  }
  else {
    *puVar1 = puVar3;
  }
  if (puVar2 == (undefined4 *)((int)puVar3 + puVar3[1])) {
    puVar3[1] = puVar3[1] + puVar2[1];
    *puVar3 = *puVar2;
    return;
  }
  *puVar3 = puVar2;
  return;
}


