/* Function: PUTCHAR_OBJ_9C */
/* Address: 800a0a08 */

void PUTCHAR_OBJ_9C(void)

{
  undefined1 unaff_s0;
  
  if (0x1f < DAT_800ca4e0) {
    write(1,&DAT_800d0b10,DAT_800ca4e0);
    DAT_800ca4e0 = 0;
  }
  (&DAT_800d0b10)[DAT_800ca4e0] = unaff_s0;
  DAT_800ca4e0 = DAT_800ca4e0 + 1;
  return;
}


