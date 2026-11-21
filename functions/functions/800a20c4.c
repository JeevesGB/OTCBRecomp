/* Function: LIBMCRD_OBJ_5C8 */
/* Address: 800a20c4 */

undefined4 LIBMCRD_OBJ_5C8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_s0;
  
  iVar1 = _chk_card_event();
  if (iVar1 != 0) {
    DAT_800d0b64 = _get_card_event();
    if (DAT_800d0b64 != 1) {
      if (DAT_800d0b64 < 2) {
        if (DAT_800d0b64 != 0) {
          uVar2 = LIBMCRD_OBJ_6A0();
          return uVar2;
        }
        DAT_800d0b84 = 0;
        if (DAT_800d0b68 != 0) {
          DAT_800d0b84 = 3;
        }
        uVar2 = LIBMCRD_OBJ_714();
        return uVar2;
      }
      if (DAT_800d0b64 == 2) {
        *unaff_s0 = 1;
        uVar2 = LIBMCRD_OBJ_710();
        return uVar2;
      }
      if (DAT_800d0b64 != 4) {
        uVar2 = LIBMCRD_OBJ_6A0();
        return uVar2;
      }
      _clr_card_event();
      _card_info(DAT_800d0b90);
      uVar2 = LIBMCRD_OBJ_70C();
      return uVar2;
    }
    DAT_800d0b5c = DAT_800d0b5c + 1;
    if (8 < DAT_800d0b5c) {
      DAT_800d0b84 = LIBMCRD_OBJ_1A3C(1);
      uVar2 = LIBMCRD_OBJ_714();
      return uVar2;
    }
    *unaff_s0 = 0x1e;
  }
  return 0;
}


