/* Function: FUN_8003e908 */
/* Address: 8003e908 */

void FUN_8003e908(int param_1)

{
  ushort *puVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 2;
  iVar2 = param_1 + *(int *)(param_1 + 4);
  iVar5 = *(short *)(iVar2 + 2) * 0x10 + 2;
  if (2 < iVar5) {
    puVar3 = (ushort *)(iVar2 + 4);
    puVar1 = (ushort *)(param_1 + *(int *)(param_1 + 8) + 4);
    do {
      if ((*puVar3 & 0x7fff) == (*puVar1 & 0x7fff)) {
        *puVar1 = 0;
        *puVar3 = 0;
      }
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar4 < iVar5);
  }
  return;
}


