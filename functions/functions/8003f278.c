/* Function: FUN_8003f278 */
/* Address: 8003f278 */

uint FUN_8003f278(short *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  sVar1 = *param_1;
  uVar2 = 0;
  if (0 < sVar1) {
    do {
      iVar3 = iVar3 + 1;
      uVar2 = uVar2 | (int)*(short *)(&DAT_800ae9cc + param_1[1] * 2);
      param_1 = param_1 + 1;
    } while (iVar3 < sVar1);
  }
  return uVar2;
}


