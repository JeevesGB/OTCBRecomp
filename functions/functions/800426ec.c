/* Function: FUN_800426ec */
/* Address: 800426ec */

undefined4 FUN_800426ec(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  for (piVar2 = param_1; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
    if ((*(ushort *)(piVar2 + 1) & 8) != 0) goto LAB_8004271c;
  }
  piVar2 = (int *)0x0;
LAB_8004271c:
  if (piVar2 == (int *)0x0) {
    iVar3 = -0x7fffffff;
    piVar2 = (int *)0x0;
    for (; param_1 != (int *)0x0; param_1 = (int *)*param_1) {
      if (iVar3 < param_1[4]) {
        iVar3 = param_1[4];
        piVar2 = param_1;
      }
    }
    if (piVar2 != (int *)0x0) {
      DAT_800cce4c = (int)piVar2;
      uVar1 = 9;
      if (((int)*(short *)((int)piVar2 + 4) & 0x8000U) == 0) {
        iVar3 = *(int *)((int)piVar2 + 0xc);
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        if (iVar3 < 0x2d) {
          uVar1 = 2;
          if (iVar3 < 10) {
            return 8;
          }
        }
        else {
          uVar1 = 1;
        }
      }
      return uVar1;
    }
    return 0;
  }
  if (((int)*(short *)((int)piVar2 + 4) & 0x8000U) == 0) {
    return 4;
  }
  iVar3 = -0x7fffffff;
  piVar2 = (int *)0x0;
  for (; param_1 != (int *)0x0; param_1 = (int *)*param_1) {
    if (iVar3 < param_1[4]) {
      iVar3 = param_1[4];
      piVar2 = param_1;
    }
  }
  if ((piVar2 != (int *)0x0) && (((int)*(short *)((int)piVar2 + 4) & 0x8000U) == 0)) {
    DAT_800cce4c = (int)piVar2;
    return 8;
  }
  return 5;
}


