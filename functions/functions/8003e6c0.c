/* Function: FUN_8003e6c0 */
/* Address: 8003e6c0 */

void FUN_8003e6c0(ushort *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_2 + -1;
  if (param_2 != 0) {
    do {
      uVar2 = 0;
      if (0 < param_5) {
        uVar1 = 0;
        do {
          if ((*param_1 & 0x7fff) == (*(ushort *)(uVar1 * 2 + param_3) & 0x7fff)) {
            *param_1 = (*param_1 & 0x8000) + (*(ushort *)(uVar1 * 2 + param_4) & 0x7fff);
            break;
          }
          uVar2 = uVar2 + 1;
          uVar1 = uVar2 & 0xffff;
        } while ((int)(uVar2 & 0xffff) < param_5);
      }
      iVar3 = iVar3 + -1;
      param_1 = param_1 + 1;
    } while (iVar3 != -1);
  }
  return;
}


