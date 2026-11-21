/* Function: LIBMCRD_OBJ_1154 */
/* Address: 800a2c50 */

undefined4 LIBMCRD_OBJ_1154(void)

{
  int iVar1;
  undefined4 *unaff_s1;
  
  iVar1 = _chk_card_event_x();
  if (iVar1 != 0) {
    _get_card_event_x();
    *unaff_s1 = 0xb;
  }
  return 0;
}


