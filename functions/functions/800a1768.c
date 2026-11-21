/* Function: GetRCnt */
/* Address: 800a1768 */

long GetRCnt(ulong param_1)

{
  long lVar1;
  
  if ((param_1 & 0xffff) < 3) {
    lVar1 = COUNTER_OBJ_CC();
    return lVar1;
  }
  return 0;
}


