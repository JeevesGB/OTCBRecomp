/* Function: SSTICK_OBJ_84 */
/* Address: 80092690 */

void SSTICK_OBJ_84(int param_1)

{
  DAT_800cdee4 = 0x32;
  if (param_1 != 1) {
    DAT_800c3b90 = 0x32;
    SSTICK_OBJ_138();
    return;
  }
  DAT_800c3b90 = 5;
  SSTICK_OBJ_138();
  return;
}


