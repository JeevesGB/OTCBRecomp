/* Function: FUN_80049598 */
/* Address: 80049598 */

void FUN_80049598(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_8004ad24(param_2,(int)**(short **)(param_1 + 0x20c));
  if (*(short *)(param_1 + 500) != 0) {
    iVar2 = -iVar2;
  }
  iVar6 = 0;
  iVar3 = *(int *)(param_1 + 0x2e8);
  iVar4 = *(int *)(param_1 + 0x2ec);
  iVar5 = param_1;
  do {
    if (0 < *(short *)(param_1 + 0x204)) {
      iVar1 = iVar4;
      if (iVar6 < 2) {
        iVar1 = iVar3;
      }
      iVar1 = (iVar2 * (iVar1 >> 3)) / 0xe1;
      *(int *)(iVar5 + 0x2f0) = iVar1;
      *(int *)(iVar5 + 0x3a4) = iVar1 * 10;
    }
    iVar5 = iVar5 + 4;
    iVar6 = iVar6 + 1;
    param_1 = param_1 + 2;
  } while (iVar6 < 4);
  return;
}


