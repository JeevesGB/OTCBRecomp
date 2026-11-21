/* Function: LIBMCRD_OBJ_584 */
/* Address: 800a2080 */

undefined4 LIBMCRD_OBJ_584(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_s0;
  
  iVar1 = _chk_card_event_x();
  if (iVar1 != 0) {
    _get_card_event_x();
    *unaff_s0 = 0x1e;
    _clr_card_event();
    _card_load(DAT_800d0b90);
    uVar2 = LIBMCRD_OBJ_70C();
    return uVar2;
  }
  return 0;
}


