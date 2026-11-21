/* Function: LIBMCRD_OBJ_104C */
/* Address: 800a2b48 */

undefined4 LIBMCRD_OBJ_104C(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(*param_1) {
  case 0:
    DAT_800ca55c = 0;
    UserFuncOpen(LIBMCRD_OBJ_118);
    uVar2 = LIBMCRD_OBJ_1170();
    return uVar2;
  case 10:
    uVar2 = 1;
    if (DAT_800d0b84 == 0) {
      DAT_800d0b94 = open(&DAT_800d0ba4,0x8001);
      if (DAT_800d0b94 < 0) {
        DAT_800d0b84 = 5;
        uVar2 = LIBMCRD_OBJ_1178();
        return uVar2;
      }
      goto LIBMCRD_OBJ_10E8;
    }
    break;
  case 0xb:
LIBMCRD_OBJ_10E8:
    *param_1 = 0x14;
    UserFuncOpen(LIBMCRD_OBJ_BA0);
    uVar2 = LIBMCRD_OBJ_1178();
    return uVar2;
  case 0x14:
    if (DAT_800d0b84 != 3) {
      close(DAT_800d0b94);
      DAT_800d0b94 = 0xffffffff;
      uVar2 = LIBMCRD_OBJ_1178();
      return uVar2;
    }
    _clr_card_event();
    _card_clear(DAT_800d0b90);
    uVar2 = LIBMCRD_OBJ_1170();
    return uVar2;
  case 0x16:
    iVar1 = _chk_card_event_x();
    if (iVar1 == 0) {
      return 0;
    }
    _get_card_event_x();
    *param_1 = 0xb;
  default:
    uVar2 = 0;
  }
  return uVar2;
}


