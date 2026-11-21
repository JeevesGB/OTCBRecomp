/* Function: FUN_80050e5c */
/* Address: 80050e5c */

void FUN_80050e5c(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  sVar1 = *(short *)(param_1 + 0x242);
  iVar7 = (int)*(short *)(param_1 + 0x5c);
  if (iVar7 < 0x15) {
    if (iVar7 < 10) {
      iVar7 = 10;
    }
  }
  else {
    iVar7 = 0x14;
  }
  iVar6 = 0;
  sVar2 = *(short *)(param_1 + 0x360);
  iVar3 = (((int)sVar1 * (int)*(short *)(param_1 + 0x238) >> 8) * iVar7) / 0x14;
  iVar4 = param_1;
  iVar5 = param_1;
  do {
    if (*(short *)(iVar5 + 0x364) == 0) {
      iVar8 = iVar3 * *(short *)(iVar5 + 0x246) * (-(int)sVar2 + 8);
    }
    else {
      iVar8 = iVar3 * *(short *)(iVar5 + 0x246) * (-(int)sVar2 + 0xc);
    }
    *(int *)(iVar4 + 0x250) = *(int *)(iVar4 + 0x250) + (iVar8 >> 3);
    iVar4 = iVar4 + 4;
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 2;
  } while (iVar6 < 4);
  if (*(short *)(param_1 + 0x23e) != 0) {
    iVar7 = ((sVar1 * iVar7) / 0x14) * 0xdac;
    *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + iVar7;
    *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + iVar7;
  }
  return;
}


