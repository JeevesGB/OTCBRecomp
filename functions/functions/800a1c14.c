/* Function: LIBMCRD_OBJ_118 */
/* Address: 800a1c14 */

undefined4 LIBMCRD_OBJ_118(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 != 10) {
    if (10 < iVar2) {
      if (iVar2 == 0xb) {
        iVar2 = _chk_card_event();
        if (iVar2 != 0) {
          DAT_800d0b54 = _get_card_event();
          if (DAT_800d0b54 == 1) {
            iVar2 = DAT_800d0b50 + 1;
            if (DAT_800d0b50 + 1 < 9) goto LIBMCRD_OBJ_384;
          }
          else {
            if (DAT_800d0b54 < 2) {
              if (DAT_800d0b54 != 0) {
                uVar1 = LIBMCRD_OBJ_38C();
                return uVar1;
              }
              DAT_800d0b54 = 0;
              if ((DAT_800d0b8c & 1 << (DAT_800d0b90 & 0x1f)) == 0) {
                DAT_800d0b54 = 4;
              }
              DAT_800d0b84 = LIBMCRD_OBJ_1A3C(DAT_800d0b54);
              (&DAT_800d0bc8)[(int)DAT_800d0b90 >> 4] = 0;
              uVar1 = LIBMCRD_OBJ_404();
              return uVar1;
            }
            if (DAT_800d0b54 == 2) {
              if (3 < DAT_800d0b50 + 1) {
                DAT_800d0b50 = DAT_800d0b50 + 1;
                (&DAT_800d0bc8)[(int)DAT_800d0b90 >> 4] = 1;
                DAT_800d0b8c = DAT_800d0b8c & ~(1 << (DAT_800d0b90 & 0x1f));
                DAT_800d0b84 = LIBMCRD_OBJ_1A3C(2);
                uVar1 = LIBMCRD_OBJ_404();
                return uVar1;
              }
LIBMCRD_OBJ_384:
              DAT_800d0b50 = DAT_800d0b50 + 1;
              *param_1 = 10;
              uVar1 = LIBMCRD_OBJ_400();
              return uVar1;
            }
            iVar2 = DAT_800d0b50;
            if (((DAT_800d0b54 == 4) && ((&DAT_800d0bc8)[(int)DAT_800d0b90 >> 4] == 0)) &&
               (DAT_800ca54c < 0x80)) {
              (&DAT_800d0bc8)[(int)DAT_800d0b90 >> 4] = 0;
              _clr_card_event();
              _card_clear(DAT_800d0b90);
              *param_1 = 0x15;
              uVar1 = LIBMCRD_OBJ_400();
              return uVar1;
            }
          }
          DAT_800d0b50 = iVar2;
          DAT_800d0b84 = LIBMCRD_OBJ_1A3C(DAT_800d0b54);
          uVar1 = LIBMCRD_OBJ_404();
          return uVar1;
        }
      }
      else {
        if (iVar2 != 0x15) {
          uVar1 = LIBMCRD_OBJ_3F4();
          return uVar1;
        }
        iVar2 = _chk_card_event_x();
        if (iVar2 != 0) {
          _get_card_event_x();
          (&DAT_800d0bd0)[(int)DAT_800d0b90 >> 4] = 0;
          *param_1 = 0;
          uVar1 = LIBMCRD_OBJ_400();
          return uVar1;
        }
      }
      return 0;
    }
    if (iVar2 != 0) {
      uVar1 = LIBMCRD_OBJ_3F4();
      return uVar1;
    }
    DAT_800d0b54 = 0;
    DAT_800d0b50 = 0;
    *param_1 = 10;
  }
  DAT_800ca54c = (&DAT_800d0bd0)[(int)DAT_800d0b90 >> 4];
  (&DAT_800d0bd0)[(int)DAT_800d0b90 >> 4] = 0;
  _clr_card_event();
  _card_info(DAT_800d0b90);
  *param_1 = *param_1 + 1;
  uVar1 = LIBMCRD_OBJ_400();
  return uVar1;
}


