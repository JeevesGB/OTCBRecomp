/* Function: SSTICK_OBJ_100 */
/* Address: 8009270c */

void SSTICK_OBJ_100(int param_1)

{
  if ((param_1 != 0) && (param_1 == 1)) {
    DAT_800cdee4 = 0x32;
    SSTICK_OBJ_138();
    return;
  }
  DAT_800cdee4 = 0x3c;
  SSTICK_OBJ_138();
  return;
}


