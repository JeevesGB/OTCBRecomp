/* Function: LIBMCRD_OBJ_1104 */
/* Address: 800a2c00 */

void LIBMCRD_OBJ_1104(void)

{
  if (DAT_800d0b84 == 3) {
    _clr_card_event();
    _card_clear(DAT_800d0b90);
    LIBMCRD_OBJ_1170();
    return;
  }
  close(DAT_800d0b94);
  DAT_800d0b94 = 0xffffffff;
  LIBMCRD_OBJ_1178();
  return;
}


