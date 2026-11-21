/* Function: HasCustomGearRatios */
/* Address: 8006b908 */

undefined4 HasCustomGearRatios(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar3 = 0;
  if (*(int *)(param_3 * 8 + param_2) != 0) {
    do {
      piVar4 = (int *)(param_3 * 8 + param_2);
      iVar2 = 0;
      if (*(char *)(param_1 + (uint)*(byte *)(piVar4[1] + iVar3) * 6) != '\0') {
        iVar2 = -1;
      }
      if (iVar2 == -1) {
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != *piVar4);
  }
  uVar1 = 0xffffffff;
  if (iVar5 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}


