/* Function: LIBMCRD_OBJ_480 */
/* Address: 800a1f7c */

undefined4 LIBMCRD_OBJ_480(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(*param_1) {
  case 0:
    DAT_800d0b5c = 0;
    DAT_800d0b60 = 0;
    DAT_800d0b58 = 0;
    DAT_800d0b68 = 0;
    DAT_800d0b64 = 0;
    *param_1 = *param_1 + 1;
  case 1:
    UserFuncOpen(LIBMCRD_OBJ_118);
    uVar3 = LIBMCRD_OBJ_70C();
    return uVar3;
  default:
    goto code_r0x800a220c;
  case 10:
    if (DAT_800d0b84 != 1) {
      if (DAT_800d0b84 < 2) {
        if (DAT_800d0b84 != 0) {
          uVar3 = LIBMCRD_OBJ_714();
          return uVar3;
        }
        uVar3 = LIBMCRD_OBJ_70C();
        return uVar3;
      }
      if (DAT_800d0b84 == 3) {
        DAT_800d0b68 = 1;
        DAT_800d0b8c = DAT_800d0b8c | 1 << (DAT_800d0b90 & 0x1f);
        _clr_card_event();
        _card_clear(DAT_800d0b90);
        uVar3 = LIBMCRD_OBJ_70C();
        return uVar3;
      }
    }
LIBMCRD_OBJ_64C:
    uVar3 = LIBMCRD_OBJ_714();
    return uVar3;
  case 0x15:
    iVar1 = _chk_card_event_x();
    if (iVar1 == 0) {
      return 0;
    }
    _get_card_event_x();
    *param_1 = 0x1e;
  case 0x1e:
    _clr_card_event();
    _card_load(DAT_800d0b90);
    uVar3 = LIBMCRD_OBJ_70C();
    return uVar3;
  case 0x1f:
    iVar1 = _chk_card_event();
    if (iVar1 == 0) {
      return 0;
    }
    DAT_800d0b64 = _get_card_event();
    if (DAT_800d0b64 != 1) {
      if (1 < DAT_800d0b64) {
        if (DAT_800d0b64 == 2) {
          *param_1 = 1;
          uVar3 = LIBMCRD_OBJ_710();
          return uVar3;
        }
        if (DAT_800d0b64 != 4) {
          uVar3 = LIBMCRD_OBJ_6A0();
          return uVar3;
        }
        _clr_card_event();
        _card_info(DAT_800d0b90);
        uVar3 = LIBMCRD_OBJ_70C();
        return uVar3;
      }
      if (DAT_800d0b64 != 0) {
        uVar3 = LIBMCRD_OBJ_6A0();
        return uVar3;
      }
      DAT_800d0b84 = 0;
      if (DAT_800d0b68 != 0) {
        DAT_800d0b84 = 3;
      }
      DAT_800d0b64 = 0;
      goto LIBMCRD_OBJ_64C;
    }
    DAT_800d0b5c = DAT_800d0b5c + 1;
    iVar2 = 0x1e;
    iVar1 = 1;
    if (8 < DAT_800d0b5c) {
      DAT_800d0b84 = LIBMCRD_OBJ_1A3C(1);
      uVar3 = LIBMCRD_OBJ_714();
      return uVar3;
    }
    break;
  case 0x32:
    iVar1 = _chk_card_event();
    if (iVar1 == 0) {
      return 0;
    }
    DAT_800d0b64 = _get_card_event();
    iVar2 = 1;
    iVar1 = DAT_800d0b64;
    if (DAT_800d0b64 == 0) {
      DAT_800d0b84 = 4;
      uVar3 = LIBMCRD_OBJ_714();
      return uVar3;
    }
  }
  DAT_800d0b64 = iVar1;
  *param_1 = iVar2;
code_r0x800a220c:
  return 0;
}


