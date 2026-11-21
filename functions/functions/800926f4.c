/* Function: SSTICK_OBJ_E8 */
/* Address: 800926f4 */

void SSTICK_OBJ_E8(int param_1)

{
  if (param_1 == 0) {
    DAT_800cdee4 = 0x3c;
    SSTICK_OBJ_138();
    return;
  }
  if (param_1 != 1) {
    SSTICK_OBJ_124();
    return;
  }
  DAT_800cdee4 = 0x32;
  SSTICK_OBJ_138();
  return;
}


