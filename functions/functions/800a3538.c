/* Function: LIBMCRD_OBJ_1A3C */
/* Address: 800a3538 */

uint LIBMCRD_OBJ_1A3C(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 == 1) {
    uVar1 = 2;
  }
  else if ((int)param_1 < 2) {
    if (param_1 != 0) {
      uVar1 = LIBMCRD_OBJ_1A88();
      return uVar1;
    }
  }
  else {
    uVar1 = 1;
    if ((param_1 != 2) && (uVar1 = param_1 | 0x8000, param_1 == 4)) {
      uVar1 = LIBMCRD_OBJ_1A88();
      return uVar1;
    }
  }
  return uVar1;
}


