/* Function: _putchar */
/* Address: 800a096c */

void _putchar(byte param_1)

{
  if (param_1 == 9) {
    do {
      _putchar(0x20);
    } while ((DAT_800ca4dc & 7) != 0);
  }
  else {
    if (param_1 == 10) {
      _putchar(0xd);
      DAT_800ca4dc = 0;
      PUTCHAR_OBJ_9C();
      return;
    }
    if (((int)(char)(&DAT_800ca44d)[param_1] & 0x97U) != 0) {
      DAT_800ca4dc = DAT_800ca4dc + 1;
    }
    if (0x1f < DAT_800ca4e0) {
      write(1,&DAT_800d0b10,DAT_800ca4e0);
      DAT_800ca4e0 = 0;
    }
    (&DAT_800d0b10)[DAT_800ca4e0] = param_1;
    DAT_800ca4e0 = DAT_800ca4e0 + 1;
  }
  return;
}


