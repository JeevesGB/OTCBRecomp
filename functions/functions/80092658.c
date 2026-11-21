/* Function: SSTICK_OBJ_4C */
/* Address: 80092658 */

void SSTICK_OBJ_4C(int param_1)

{
  if (5 < DAT_800c3b90) {
    DAT_800cdee4 = DAT_800c3b90;
    return;
  }
  switch(DAT_800c3b90) {
  case 0:
    if ((param_1 != 0) && (param_1 == 1)) {
SSTICK_OBJ_110:
      DAT_800cdee4 = 0x32;
      SSTICK_OBJ_138();
      return;
    }
    break;
  case 1:
    DAT_800c3b90 = 0x3c;
    DAT_800cdee4 = 0x3c;
    if (param_1 == 0) {
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
    if (param_1 != 1) {
      DAT_800c3b90 = 0x32;
      SSTICK_OBJ_138();
      return;
    }
SSTICK_OBJ_BC:
    SSTICK_OBJ_138();
    return;
  case 5:
    if (param_1 != 0) {
      if (param_1 != 1) {
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


