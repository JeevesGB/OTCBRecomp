/* Function: PUTCHAR_OBJ_178 */
/* Address: 800a0ae4 */

void PUTCHAR_OBJ_178(void)

{
  do {
    _putchar(0x20);
  } while ((DAT_800ca4dc & 7) != 0);
  if (0 < DAT_800ca4e0) {
    write(1,&DAT_800d0b10,DAT_800ca4e0);
    DAT_800ca4e0 = 0;
  }
  return;
}


