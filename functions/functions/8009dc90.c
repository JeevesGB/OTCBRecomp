/* Function: SYS_OBJ_1764 */
/* Address: 8009dc90 */

uint SYS_OBJ_1764(uint param_1,uint param_2)

{
  return (param_2 & 0x3ff) << 10 | param_1 & 0x3ff | 0xe4000000;
}


