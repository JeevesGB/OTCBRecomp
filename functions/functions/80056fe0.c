/* Function: FUN_80056fe0 */
/* Address: 80056fe0 */

void FUN_80056fe0(int param_1,short param_2,short param_3,short param_4,short param_5)

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
        iVar1 = (uint)*(ushort *)(param_1 + 6) << 0x10;
        if ((iVar1 >> 0x12 & 0xfU) + (iVar1 >> 0x1a & 0x10U) == (int)param_3) {
          *(short *)(param_1 + 6) =
               (short)((int)((int)param_4 + (iVar1 >> 0x10 & 0x3fU) * 0x10) >> 4) +
               (param_5 + ((short)*(ushort *)(param_1 + 6) >> 6)) * 0x40;
        }
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + (*(byte *)(param_1 + 1) + 1) * 4;
    } while (iVar2 < iVar3);
  }
  return;
}


