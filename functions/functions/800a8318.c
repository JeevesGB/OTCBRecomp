/* Function: CDREAD_OBJ_77C */
/* Address: 800a8318 */

void CDREAD_OBJ_77C(void)

{
  uint unaff_s2;
  
  DAT_800cb8f8 = unaff_s2;
  if ((unaff_s2 & 0x30) == 0) {
    DAT_800cb8fc = 0x200;
    CDREAD_OBJ_7F0();
    return;
  }
  if ((unaff_s2 & 0x30) != 0x20) {
    CDREAD_OBJ_7E4();
    return;
  }
  DAT_800cb8fc = 0x249;
  CDREAD_OBJ_7F0();
  return;
}


