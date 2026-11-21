/* Function: SYS_OBJ_2318 */
/* Address: 8009e844 */

uint SYS_OBJ_2318(void)

{
  undefined4 unaff_s2;
  undefined4 unaff_s3;
  
  *(undefined4 *)(&DAT_800cf308 + DAT_800ca294 * 0x60) = unaff_s2;
  *(undefined4 *)(&DAT_800cf300 + DAT_800ca294 * 0x60) = unaff_s3;
  DAT_800ca294 = DAT_800ca294 + 1 & 0x3f;
  SetIntrMask(DAT_800ca29c);
  SYS_OBJ_23C4();
  return DAT_800ca294 - DAT_800ca298 & 0x3f;
}


