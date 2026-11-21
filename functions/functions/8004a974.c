/* Function: FUN_8004a974 */
/* Address: 8004a974 */

void FUN_8004a974(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(short *)(param_1 + 500) == 0) {
    sVar1 = *(short *)(*(short *)(param_1 + 0x1f8) * 2 + *(int *)(param_1 + 0x20c));
  }
  else {
    sVar1 = -**(short **)(param_1 + 0x20c);
  }
  *(short *)(param_1 + 0x202) = sVar1;
  if (*(short *)(param_1 + 0x1f0) == 0) {
    if ((*(short *)(param_1 + 0x5c) < 0x1e) && (*(short *)(param_1 + 0x238) != 0)) {
      *(undefined2 *)(param_1 + 0x1f0) = 0xffff;
    }
    *(undefined2 *)(param_1 + 0x1ee) = 0;
    FUN_8004a61c(param_1);
    FUN_8004a790(param_1);
  }
  else {
    iVar5 = (int)*(short *)(param_1 + 0x214);
    iVar4 = *(short *)(param_1 + 0x210) * 0x271 >> 4;
    iVar2 = FUN_8004ac18(*(undefined4 *)(param_1 + 0x30),iVar5);
    iVar3 = (iVar4 - iVar5) / 3;
    if (iVar5 < iVar4) {
      if (iVar2 / 100 < iVar3) {
        iVar3 = iVar2 / 100;
      }
      if (iVar3 < 0x14) {
        iVar3 = 0x14;
      }
      else if (400 < iVar3) {
        iVar3 = 400;
      }
    }
    else if (iVar3 < -0x13) {
      if (iVar3 < -400) {
        iVar3 = -400;
      }
    }
    else {
      iVar3 = -0x14;
    }
    iVar5 = iVar5 + iVar3;
    if (iVar5 < 0x34bd) {
      if (iVar5 < 500) {
        iVar5 = 500;
      }
    }
    else {
      iVar5 = 0x34bc;
    }
    *(short *)(param_1 + 0x214) = (short)iVar5;
    *(short *)(param_1 + 0x216) = (short)iVar5;
    if ((*(short *)(param_1 + 0x1ee) != 0) ||
       ((*(short *)(param_1 + 0x178) == 0 && (*(short *)(param_1 + 0x238) == 0)))) {
      iVar3 = (int)*(short *)(param_1 + 0x214);
      *(undefined2 *)(param_1 + 0x1ee) = 0;
      *(undefined2 *)(param_1 + 0x1f0) = 0;
      if (iVar3 < 1000) {
        iVar3 = 0;
      }
      FUN_80049598(param_1,iVar3);
    }
  }
  return;
}


