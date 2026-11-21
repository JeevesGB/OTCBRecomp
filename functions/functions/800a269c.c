/* Function: LIBMCRD_OBJ_BA0 */
/* Address: 800a269c */

undefined4 LIBMCRD_OBJ_BA0(int *param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 == 10) {
    do {
      lVar2 = lseek(DAT_800d0b94,DAT_800d0b98,0);
    } while (lVar2 != DAT_800d0b98);
    _clr_card_event();
    do {
      lVar2 = write(DAT_800d0b94,DAT_800d0ba0,DAT_800d0b9c);
    } while (lVar2 != 0);
    *param_1 = 0x1e;
  }
  else {
    if (iVar3 < 0xb) {
      if (iVar3 == 0) {
        DAT_800ca554 = 0;
        *param_1 = 10;
        uVar1 = LIBMCRD_OBJ_CC4();
        return uVar1;
      }
      uVar1 = LIBMCRD_OBJ_CC8();
      return uVar1;
    }
    if (iVar3 != 0x1e) {
      uVar1 = LIBMCRD_OBJ_CC8();
      return uVar1;
    }
    iVar3 = _chk_card_event();
    if (iVar3 != 0) {
      iVar3 = _get_card_event();
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        DAT_800ca554 = DAT_800ca554 + 1;
        if (DAT_800ca554 < 4) {
          *param_1 = 10;
          uVar1 = LIBMCRD_OBJ_CC4();
          return uVar1;
        }
      }
      DAT_800d0b84 = LIBMCRD_OBJ_1A3C(iVar3);
      uVar1 = LIBMCRD_OBJ_CC8();
      return uVar1;
    }
  }
  return 0;
}


