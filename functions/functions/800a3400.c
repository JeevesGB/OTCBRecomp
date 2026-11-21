/* Function: LIBMCRD_OBJ_1904 */
/* Address: 800a3400 */

void LIBMCRD_OBJ_1904(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long unaff_s0;
  
  while( true ) {
    _clr_card_event();
    lVar1 = _card_format(unaff_s0);
    if (lVar1 != 0) break;
    uVar2 = _get_card_event_x();
    if ((uVar2 & 4) == 0) goto LIBMCRD_OBJ_1970;
  }
  _clr_card_event();
  _card_load(DAT_800d0b90);
  do {
    iVar3 = _chk_card_event();
  } while (iVar3 == 0);
  uVar2 = _get_card_event();
LIBMCRD_OBJ_1970:
  LIBMCRD_OBJ_1A3C(uVar2);
  return;
}


