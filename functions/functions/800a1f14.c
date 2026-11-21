/* Function: MemCardAccept */
/* Address: 800a1f14 */

long MemCardAccept(long chan)

{
  long lVar1;
  
  if (DAT_800d0b80 < 1) {
    DAT_800d0b80 = 2;
    DAT_800d0b84 = 0;
    DAT_800d0b88 = 0;
    DAT_800d0b90 = chan;
    UserFuncOpen(LIBMCRD_OBJ_480);
    lVar1 = LIBMCRD_OBJ_470();
    return lVar1;
  }
  printf("Access Denied. : event multiple open\n");
  return 0;
}


