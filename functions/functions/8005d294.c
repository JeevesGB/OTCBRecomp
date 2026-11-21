/* Function: MemAllocTemp */
/* Address: 8005d294 */

undefined4 * MemAllocTemp(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar5 = param_1 + 0xbU & 0xfffffffc;
  puVar2 = &g_Heap2Base;
  puVar1 = g_Heap2Base;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    uVar4 = puVar1[1] - uVar5;
    if (-1 < (int)uVar4) break;
    puVar2 = puVar1;
    puVar1 = (undefined4 *)*puVar1;
  }
  puVar6 = (undefined4 *)((int)puVar1 + uVar5);
  if (uVar4 < 0xc) {
    puVar6 = (undefined4 *)*puVar1;
  }
  else {
    uVar3 = *puVar1;
    puVar6[1] = uVar4;
    *puVar6 = uVar3;
    puVar1[1] = uVar5;
  }
  *puVar2 = puVar6;
  puVar2 = puVar1;
  *puVar1 = g_Heap2Used;
  g_Heap2Used = puVar2;
  return puVar1 + 2;
}


