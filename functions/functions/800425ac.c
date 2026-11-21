/* Function: FUN_800425ac */
/* Address: 800425ac */

undefined4 FUN_800425ac(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  for (piVar3 = param_1; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
    if ((*(ushort *)(piVar3 + 1) & 8) != 0) goto LAB_800425dc;
  }
  piVar3 = (int *)0x0;
LAB_800425dc:
  if (piVar3 == (int *)0x0) {
    iVar2 = (int)DAT_800cce2e - (int)DAT_800cce20;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if ((iVar2 < 0x32) && (0x50 < DAT_800cce22)) {
      return 5;
    }
    iVar2 = -0x7fffffff;
    piVar3 = (int *)0x0;
    for (; param_1 != (int *)0x0; param_1 = (int *)*param_1) {
      if (iVar2 < param_1[4]) {
        iVar2 = param_1[4];
        piVar3 = param_1;
      }
    }
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    DAT_800cce4c = (int)piVar3;
    if (DAT_800cce22 < 0x51) {
      uVar1 = 7;
      if (((int)*(short *)((int)piVar3 + 4) & 0x8000U) == 0) {
        return 8;
      }
    }
    else {
      uVar1 = 9;
    }
  }
  else {
    uVar1 = 5;
    if (((int)*(short *)((int)piVar3 + 4) & 0x8000U) == 0) {
      return 4;
    }
  }
  return uVar1;
}


