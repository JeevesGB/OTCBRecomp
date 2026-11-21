/* Function: PRNT_OBJ_180 */
/* Address: 800a038c */

void PRNT_OBJ_180(void)

{
  byte bVar1;
  byte *unaff_s7;
  int iStack00000044;
  
  iStack00000044 = 0;
  do {
    bVar1 = *unaff_s7;
    unaff_s7 = unaff_s7 + 1;
    iStack00000044 = iStack00000044 * 10 + -0x30 + (uint)bVar1;
    if (0x7f < *unaff_s7) break;
  } while (((&DAT_800ca44d)[*unaff_s7] & 4) != 0);
  PRNT_OBJ_7C();
  return;
}


