/* Function: SYS_OBJ_2740 */
/* Address: 8009ec6c */

undefined4 SYS_OBJ_2740(void)

{
  undefined4 uVar1;
  uint unaff_s0;
  
  SetIntrMask(DAT_800ca2a4);
  uVar1 = 0;
  if ((unaff_s0 & 7) == 0) {
    uVar1 = SYS_OBJ_2A28();
  }
  return uVar1;
}


