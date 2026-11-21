/* Function: FUN_8003eb50 */
/* Address: 8003eb50 */

undefined4 FUN_8003eb50(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar3 = (int *)(param_2 + param_3 * 0x1c + 0xc);
  piVar5 = (int *)(param_1 + param_2);
  piVar6 = (int *)(param_2 + piVar3[4] + 0xc);
  iVar4 = piVar3[5];
  if (piVar3 <= piVar5) {
    if (piVar5 < piVar6) {
      return 0;
    }
    if ((int *)(param_2 + *piVar3 + 0xc) <= piVar5) {
      uVar2 = 1;
      if ((int *)(param_2 + piVar3[2] + 0xc) <= piVar5) {
        uVar2 = 2;
      }
      return uVar2;
    }
    piVar3 = (int *)0x0;
    while (piVar1 = piVar6, -1 < iVar4) {
      iVar4 = iVar4 + -1;
      if (piVar5 < piVar1) goto LAB_8003ebfc;
      piVar6 = piVar1 + *(byte *)((int)piVar1 + 1) + 1;
      piVar3 = piVar1;
    }
    piVar3 = (int *)0x0;
LAB_8003ebfc:
    if (piVar3 != (int *)0x0) {
      if ((*piVar3 & 0x4000000) == 0) {
        return 3;
      }
      if (((*piVar3 & 0x8000000) == 0) || (piVar5 != piVar3 + 4)) {
        if (piVar5 == (int *)((int)piVar3 + 6U)) {
          return 4;
        }
        if (piVar5 == (int *)((int)piVar3 + 10U)) {
          return 5;
        }
        if (((piVar5 != piVar3 + 1) && (piVar5 != piVar3 + 2)) && (piVar5 != piVar3 + 3)) {
          return 3;
        }
      }
      return 6;
    }
  }
  return 0xffffffff;
}


