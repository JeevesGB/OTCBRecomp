/* Function: COUNTER_OBJ_74 */
/* Address: 800a1740 */

undefined4 COUNTER_OBJ_74(void)

{
  int in_v0;
  ushort in_a3;
  int in_t0;
  
  if (in_v0 != 0) {
    in_a3 = in_a3 | 0x10;
  }
  *(ushort *)(PTR_TMR_DOTCLOCK_VAL_800ca510 + in_t0 * 0x10 + 4) = in_a3;
  return 1;
}


