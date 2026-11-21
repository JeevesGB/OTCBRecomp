/* Function: FUN_80042454 */
/* Address: 80042454 */

void FUN_80042454(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (DAT_800cce1c == 0) {
    iVar6 = 800;
    iVar5 = 5;
  }
  else {
    iVar6 = 0x14;
    if (DAT_800cce1c == 1) {
      iVar6 = 100;
      iVar5 = 10;
    }
    else {
      iVar5 = 10;
    }
  }
  iVar1 = (int)DAT_800cce2e;
  for (; param_1 != (int *)0x0; param_1 = (int *)*param_1) {
    iVar2 = param_1[3];
    iVar4 = 0;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 0x59) {
      if (iVar2 < 0x2d) {
        if (0x14 < iVar2) {
          iVar4 = -500;
        }
      }
      else {
        iVar4 = -1000;
      }
    }
    else {
      iVar4 = -10000;
      *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) | 0x8000;
    }
    iVar3 = (int)*(short *)((int)param_1 + 10) - (int)*(short *)(param_1 + 2);
    iVar2 = iVar3;
    if (800 < iVar3) {
      iVar2 = 800;
    }
    iVar2 = iVar2 * iVar5;
    if (iVar3 < 200) {
      iVar2 = 0;
    }
    iVar4 = iVar4 + iVar2;
    if (((int)*(short *)(param_1 + 2) < (int)DAT_800cce20) &&
       ((int)DAT_800cce20 < (int)*(short *)((int)param_1 + 10))) {
      iVar4 = iVar4 + 200;
    }
    if (((int)*(short *)(param_1 + 2) < iVar1 + -0x50) &&
       (iVar1 + 0x50 < (int)*(short *)((int)param_1 + 10))) {
      iVar4 = iVar4 + iVar6;
      *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) | 8;
    }
    param_1[4] = iVar4;
  }
  return;
}


