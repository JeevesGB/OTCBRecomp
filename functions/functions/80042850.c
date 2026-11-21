/* Function: FUN_80042850 */
/* Address: 80042850 */

undefined4 FUN_80042850(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = -0x7fffffff;
  piVar4 = (int *)0x0;
  for (piVar2 = param_1; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
    if (iVar5 < piVar2[4]) {
      piVar4 = piVar2;
      iVar5 = piVar2[4];
    }
  }
  if (piVar4 != (int *)0x0) {
    iVar5 = *(int *)((int)piVar4 + 0xc);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (0x42 < iVar5) {
      iVar3 = -0x7fffffff;
      DAT_800cce4c = (int *)0x0;
      for (; param_1 != (int *)0x0; param_1 = (int *)*param_1) {
        iVar1 = param_1[4];
        if ((iVar1 < *(int *)((int)piVar4 + 0x10)) && (iVar1 < iVar3)) {
          iVar3 = iVar1;
          DAT_800cce4c = param_1;
        }
      }
      if (DAT_800cce4c != (int *)0x0) {
        iVar3 = *(int *)((int)DAT_800cce4c + 0xc);
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (iVar3 <= iVar5) {
          return 2;
        }
      }
      DAT_800cce4c = piVar4;
      return 1;
    }
    DAT_800cce4c = piVar4;
    if ((*(short *)((int)piVar4 + 8) <= DAT_800cce20) &&
       (DAT_800cce20 <= *(short *)((int)piVar4 + 10))) {
      return 3;
    }
    return 2;
  }
  return 0;
}


