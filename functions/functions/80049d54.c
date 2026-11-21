/* Function: FUN_80049d54 */
/* Address: 80049d54 */

void FUN_80049d54(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar3 = param_1;
  iVar4 = param_1;
  iVar5 = 0;
  do {
    iVar2 = *(int *)(iVar3 + 0x84) - *(int *)(iVar3 + 0xcc);
    iVar1 = FUN_800541e0(*(int *)(iVar3 + 0x80) - *(int *)(iVar3 + 200),iVar2,
                         *(int *)(iVar3 + 0x88) - *(int *)(iVar3 + 0xd0));
    if (iVar2 < 0) {
      iVar1 = -iVar1;
    }
    iVar6 = iVar6 + iVar1;
    iVar3 = iVar3 + 0xc;
    iVar2 = iVar5 + 1;
    iVar1 = iVar1 + *(int *)(iVar4 + 0x1d4);
    (&DAT_1f800064)[iVar5] = iVar1 - *(int *)(iVar4 + 0x288);
    *(int *)(iVar4 + 0x288) = iVar1;
    iVar4 = iVar4 + 4;
    iVar5 = iVar2;
  } while (iVar2 < 4);
  iVar6 = iVar6 >> 0xe;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  *(short *)(param_1 + 0x170) = *(short *)(*(int *)(param_1 + 0x10) + 0x20) + (short)iVar6;
  return;
}


