/* Function: SYS_OBJ_28B0 */
/* Address: 8009eddc */

void SYS_OBJ_28B0(void)

{
  int iVar1;
  
  iVar1 = VSync(-1);
  DAT_800ca2a8 = iVar1 + 0xf0;
  DAT_800ca2ac = 0;
  return;
}


