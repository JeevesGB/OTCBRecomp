/* Function: LIBMCRD_OBJ_9AC */
/* Address: 800a24a8 */

undefined4 LIBMCRD_OBJ_9AC(int *param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 != 10) {
    if (10 < iVar3) {
      if (iVar3 != 0x1e) {
        uVar1 = LIBMCRD_OBJ_AD4();
        return uVar1;
      }
      iVar3 = _chk_card_event();
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = _get_card_event();
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        DAT_800ca550 = DAT_800ca550 + 1;
        if (DAT_800ca550 < 4) {
          *param_1 = 10;
          uVar1 = LIBMCRD_OBJ_AD0();
          return uVar1;
        }
      }
      DAT_800d0b84 = LIBMCRD_OBJ_1A3C(iVar3);
      uVar1 = LIBMCRD_OBJ_AD4();
      return uVar1;
    }
    if (iVar3 != 0) {
      uVar1 = LIBMCRD_OBJ_AD4();
      return uVar1;
    }
    DAT_800ca550 = 0;
    *param_1 = 10;
  }
  do {
    lVar2 = lseek(DAT_800d0b94,DAT_800d0b98,0);
  } while (lVar2 != DAT_800d0b98);
  _clr_card_event();
  do {
    lVar2 = read(DAT_800d0b94,DAT_800d0ba0,DAT_800d0b9c);
  } while (lVar2 != 0);
  *param_1 = 0x1e;
  uVar1 = LIBMCRD_OBJ_AD0();
  return uVar1;
}


