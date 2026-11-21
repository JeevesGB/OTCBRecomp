/* Function: StoreImage2 */
/* Address: 8009f0e0 */

int StoreImage2(RECT *rect,u_long *p)

{
  int iVar1;
  
  SYS_OBJ_3E4("StoreImage",rect);
  iVar1 = VSync(-1);
  DAT_800ca2a8 = iVar1 + 0xf0;
  DAT_800ca2ac = 0;
  iVar1 = SYS_OBJ_2C30();
  return iVar1;
}


