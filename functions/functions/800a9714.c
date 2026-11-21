/* Function: PadInfoMode */
/* Address: 800a9714 */

int PadInfoMode(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (*DAT_800cba18)();
  if (param_2 == 3) {
    iVar1 = PADENTRY_OBJ_25C();
    return iVar1;
  }
  if (3 < param_2) {
    if (param_2 != 4) {
      if (param_2 != 100) {
        iVar1 = PADENTRY_OBJ_25C();
        return iVar1;
      }
      iVar1 = PADENTRY_OBJ_25C();
      return iVar1;
    }
    if (param_3 < 0) {
      iVar1 = PADENTRY_OBJ_25C();
      return iVar1;
    }
    if (param_3 < (int)(uint)*(byte *)(iVar1 + 0xe3)) {
      iVar1 = PADENTRY_OBJ_25C();
      return iVar1;
    }
    return 0;
  }
  if (param_2 == 1) {
    iVar1 = PADENTRY_OBJ_25C();
    return iVar1;
  }
  if (param_2 != 2) {
    iVar1 = PADENTRY_OBJ_25C();
    return iVar1;
  }
  iVar1 = PADENTRY_OBJ_25C();
  return iVar1;
}


