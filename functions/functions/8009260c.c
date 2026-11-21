/* Function: SsSetTickMode */
/* Address: 8009260c */

void SsSetTickMode(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_8009bc60();
  if ((param_1 & 0x1000U) != 0) {
    DAT_800c3b94 = 1;
    DAT_800c3b90 = param_1 & 0xfff;
    SSTICK_OBJ_4C();
    return;
  }
  DAT_800c3b94 = 0;
  DAT_800c3b90 = param_1;
  if (5 < param_1) {
    DAT_800cdee4 = param_1;
    return;
  }
  switch(param_1) {
  case 0:
    if ((iVar1 != 0) && (iVar1 == 1)) {
SSTICK_OBJ_110:
      DAT_800cdee4 = 0x32;
      SSTICK_OBJ_138();
      return;
    }
    break;
  case 1:
    DAT_800c3b90 = 0x3c;
    DAT_800cdee4 = 0x3c;
    if (iVar1 == 0) {
      DAT_800c3b90 = 5;
    }
    goto SSTICK_OBJ_BC;
  case 2:
    DAT_800cdee4 = 0xf0;
    SSTICK_OBJ_138();
    return;
  case 3:
    DAT_800cdee4 = 0x78;
    SSTICK_OBJ_138();
    return;
  case 4:
    DAT_800cdee4 = 0x32;
    DAT_800c3b90 = 5;
    if (iVar1 != 1) {
      DAT_800c3b90 = 0x32;
      SSTICK_OBJ_138();
      return;
    }
SSTICK_OBJ_BC:
    SSTICK_OBJ_138();
    return;
  case 5:
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        SSTICK_OBJ_124();
        return;
      }
      goto SSTICK_OBJ_110;
    }
  }
  DAT_800cdee4 = 0x3c;
  SSTICK_OBJ_138();
  return;
}


