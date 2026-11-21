/* Function: InitCarAnimation */
/* Address: 8004112c */

void InitCarAnimation(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_8003fb08();
  FUN_8003fdac(param_1);
  iVar5 = 0;
  iVar4 = *(int *)(param_1 + 0x14);
  iVar3 = param_1;
  do {
    piVar1 = (int *)(iVar3 + 0x278);
    piVar2 = (int *)(iVar3 + 0x38c);
    iVar3 = iVar3 + 4;
    iVar5 = iVar5 + 1;
    *(short *)(iVar4 + 0x66) = (short)(*piVar1 + *piVar2 >> 0xc);
    iVar4 = iVar4 + 8;
  } while (iVar5 < 4);
  iVar4 = 0;
  *(short *)(*(int *)(param_1 + 0x14) + 0x5a) = (short)(*(int *)(param_1 + 0x3cc) >> 0xc);
  iVar3 = param_1;
  do {
    iVar5 = iVar4 * 2;
    iVar4 = iVar4 + 1;
    iVar5 = *(int *)(param_1 + 0x14) + iVar5;
    *(short *)(iVar5 + 0x5c) = *(short *)(iVar5 + 0x5c) - (short)(*(int *)(iVar3 + 0x2f0) / 0xd6);
    iVar3 = iVar3 + 4;
  } while (iVar4 < 4);
  return;
}


