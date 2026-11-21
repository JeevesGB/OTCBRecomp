/* Function: ResetRCnt */
/* Address: 800a1804 */

long ResetRCnt(ulong param_1)

{
  long lVar1;
  
  if ((param_1 & 0xffff) < 3) {
    *(undefined2 *)(PTR_TMR_DOTCLOCK_VAL_800ca510 + (param_1 & 0xffff) * 0x10) = 0;
    lVar1 = COUNTER_OBJ_164();
    return lVar1;
  }
  return 0;
}


