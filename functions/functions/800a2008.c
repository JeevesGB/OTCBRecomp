/* Function: LIBMCRD_OBJ_50C */
/* Address: 800a2008 */

void LIBMCRD_OBJ_50C(void)

{
  if (DAT_800d0b84 != 1) {
    if (DAT_800d0b84 < 2) {
      if (DAT_800d0b84 != 0) {
        LIBMCRD_OBJ_714();
        return;
      }
      LIBMCRD_OBJ_70C();
      return;
    }
    if (DAT_800d0b84 == 3) {
      DAT_800d0b68 = 1;
      DAT_800d0b8c = DAT_800d0b8c | 1 << (DAT_800d0b90 & 0x1f);
      _clr_card_event();
      _card_clear(DAT_800d0b90);
      LIBMCRD_OBJ_70C();
      return;
    }
  }
  LIBMCRD_OBJ_714();
  return;
}


