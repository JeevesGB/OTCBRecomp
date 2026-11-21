/* Function: LIBMCRD_OBJ_6C8 */
/* Address: 800a21c4 */

undefined4 LIBMCRD_OBJ_6C8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_s0;
  
  iVar1 = _chk_card_event();
  if (iVar1 != 0) {
    DAT_800d0b64 = _get_card_event();
    if (DAT_800d0b64 == 0) {
      DAT_800d0b84 = 4;
      uVar2 = LIBMCRD_OBJ_714();
      return uVar2;
    }
    *unaff_s0 = 1;
  }
  return 0;
}


