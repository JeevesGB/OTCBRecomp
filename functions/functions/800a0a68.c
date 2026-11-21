/* Function: _putchar_flash */
/* Address: 800a0a68 */

void _putchar_flash(void)

{
  if (0 < DAT_800ca4e0) {
    write(1,&DAT_800d0b10,DAT_800ca4e0);
    DAT_800ca4e0 = 0;
  }
  return;
}


