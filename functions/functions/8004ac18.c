/* Function: FUN_8004ac18 */
/* Address: 8004ac18 */

int FUN_8004ac18(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2 >> 0x1f;
  iVar4 = param_2 / 500 + iVar3;
  iVar2 = iVar4 - iVar3;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (0x1a < iVar2) {
    iVar2 = 0x1a;
  }
  iVar1 = (*(short *)(iVar2 * 2 + param_1) * 0x116c) / 100;
  return iVar1 + (((*(short *)((iVar2 + 1) * 2 + param_1) * 0x116c) / 100 - iVar1) *
                 (param_2 + (iVar4 - iVar3) * -500)) / 500;
}


