/* Function: FUN_8003f214 */
/* Address: 8003f214 */

void FUN_8003f214(int param_1,int param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  
  if (param_2 != 0) {
    psVar2 = (short *)(param_2 + *(int *)(param_2 + param_3 * 4 + 4));
    iVar4 = (int)*psVar2;
    while (iVar4 = iVar4 + -1, iVar4 != -1) {
      psVar3 = psVar2 + 1;
      psVar2 = psVar2 + 2;
      sVar1 = *(short *)(param_1 + *psVar3);
      *(short *)(param_1 + *psVar3) = *psVar2;
      *psVar2 = sVar1;
    }
  }
  return;
}


