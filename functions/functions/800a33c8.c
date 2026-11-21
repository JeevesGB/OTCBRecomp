/* Function: MemCardFormat */
/* Address: 800a33c8 */

long MemCardFormat(long chan)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  
  if (DAT_800d0b80 != 0) {
    printf("Access Denied. : system busy\n");
    lVar1 = LIBMCRD_OBJ_1978();
    return lVar1;
  }
  while( true ) {
    _clr_card_event();
    lVar1 = _card_format(chan);
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
  lVar1 = LIBMCRD_OBJ_1A3C(uVar2);
  return lVar1;
}


