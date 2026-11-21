/* Function: PADMAIN_OBJ_98 */
/* Address: 800a9af4 */

void PADMAIN_OBJ_98(void)

{
  uint unaff_s0;
  
  if ((unaff_s0 & 2) != 0) {
    DAT_800cba58 = 1;
    if (0x95 < DAT_800d106c) {
      (*DAT_800cba08)(DAT_800cba38 + 0xf0);
    }
    DAT_800d106c = 0;
    PADMAIN_OBJ_F0();
    return;
  }
  DAT_800cba58 = 0;
  DAT_800cba3c = 1;
  return;
}


