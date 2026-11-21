/* Function: FUN_8005717c */
/* Address: 8005717c */

void FUN_8005717c(int param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1 + param_2 * 0x1c + 0xc;
  iVar2 = 0;
  iVar3 = *(int *)(iVar1 + 0x14);
  param_1 = param_1 + *(int *)(iVar1 + 0x10) + 0xc;
  if (0 < iVar3) {
    do {
      if ((*(ushort *)(param_1 + 2) & 0x400) != 0) {
        *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) | 0x200;
        *(ushort *)(param_1 + 10) = param_3 + (*(ushort *)(param_1 + 10) & 0xff9f);
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + (*(byte *)(param_1 + 1) + 1) * 4;
    } while (iVar2 < iVar3);
  }
  return;
}


