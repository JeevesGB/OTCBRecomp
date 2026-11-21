/* Function: putchar */
/* Address: 800a0aa4 */

void putchar(char param_1)

{
  if (param_1 == '\t') {
    do {
      _putchar(0x20);
    } while ((DAT_800ca4dc & 7) != 0);
  }
  else {
    if (param_1 == '\n') {
      _putchar(0xd);
      DAT_800ca4dc = 0;
      PUTCHAR_OBJ_1D4();
      return;
    }
    if (((int)(char)(&DAT_800ca44d)[(byte)param_1] & 0x97U) != 0) {
      DAT_800ca4dc = DAT_800ca4dc + 1;
    }
    if (0x1f < DAT_800ca4e0) {
      write(1,&DAT_800d0b10,DAT_800ca4e0);
      DAT_800ca4e0 = 0;
    }
    (&DAT_800d0b10)[DAT_800ca4e0] = param_1;
    DAT_800ca4e0 = DAT_800ca4e0 + 1;
  }
  if (0 < DAT_800ca4e0) {
    write(1,&DAT_800d0b10,DAT_800ca4e0);
    DAT_800ca4e0 = 0;
  }
  return;
}


