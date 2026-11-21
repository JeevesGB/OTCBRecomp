/* Function: SSTICK_OBJ_A8 */
/* Address: 800926b4 */

void SSTICK_OBJ_A8(int param_1)

{
  DAT_800c3b90 = 0x3c;
  DAT_800cdee4 = 0x3c;
  if (param_1 == 0) {
    DAT_800c3b90 = 5;
  }
  SSTICK_OBJ_138();
  return;
}


