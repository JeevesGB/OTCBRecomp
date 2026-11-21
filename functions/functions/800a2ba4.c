/* Function: LIBMCRD_OBJ_10A8 */
/* Address: 800a2ba4 */

undefined4 LIBMCRD_OBJ_10A8(void)

{
  undefined4 uVar1;
  undefined4 *unaff_s1;
  
  if (DAT_800d0b84 != 0) {
    return 1;
  }
  DAT_800d0b94 = open(&DAT_800d0ba4,0x8001);
  if (DAT_800d0b94 < 0) {
    DAT_800d0b84 = 5;
    uVar1 = LIBMCRD_OBJ_1178();
    return uVar1;
  }
  *unaff_s1 = 0x14;
  UserFuncOpen(LIBMCRD_OBJ_BA0);
  uVar1 = LIBMCRD_OBJ_1178();
  return uVar1;
}


