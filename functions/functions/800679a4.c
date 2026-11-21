/* Function: FUN_800679a4 */
/* Address: 800679a4 */

int FUN_800679a4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == 1) {
    iVar1 = -0x7ff46d34;
  }
  else if (param_1 < 2) {
    if (param_1 == 0) {
      iVar1 = -0x7ff46d54;
    }
  }
  else if (param_1 == 2) {
    iVar1 = -0x7ff46d14;
  }
  else if (param_1 == 3) {
    iVar1 = -0x7ff46cf4;
  }
  if (param_2 == 1) {
    iVar1 = iVar1 + 8;
  }
  else if (param_2 < 2) {
    if (param_2 != 0) {
      return 0;
    }
  }
  else if (param_2 == 2) {
    iVar1 = iVar1 + 0x10;
  }
  else {
    if (param_2 != 3) {
      return 0;
    }
    iVar1 = iVar1 + 0x18;
  }
  return iVar1;
}


