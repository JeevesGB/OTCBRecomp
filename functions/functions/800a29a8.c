/* Function: LIBMCRD_OBJ_EAC */
/* Address: 800a29a8 */

void LIBMCRD_OBJ_EAC(void)

{
  if (DAT_800d0b84 == 3) {
    _clr_card_event();
    _card_clear(DAT_800d0b90);
    LIBMCRD_OBJ_F18();
    return;
  }
  close(DAT_800d0b94);
  DAT_800d0b94 = 0xffffffff;
  LIBMCRD_OBJ_F20();
  return;
}


