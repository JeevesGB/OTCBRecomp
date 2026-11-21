/* Function: LIBMCRD_OBJ_12F4 */
/* Address: 800a2df0 */

void LIBMCRD_OBJ_12F4(long param_1)

{
  MemCardSync(param_1,(long *)0x0,(long *)&stack0x00000058);
  MemCardCallback(DAT_800d0bd8);
  LIBMCRD_OBJ_13BC();
  return;
}


