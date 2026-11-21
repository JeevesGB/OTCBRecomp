/* Function: MemCardExist */
/* Address: 800a1bac */

long MemCardExist(long chan)

{
  long lVar1;
  
  if (DAT_800d0b80 < 1) {
    DAT_800d0b80 = 1;
    DAT_800d0b84 = 0;
    DAT_800d0b88 = 0;
    DAT_800d0b90 = chan;
    UserFuncOpen(LIBMCRD_OBJ_118);
    lVar1 = LIBMCRD_OBJ_108();
    return lVar1;
  }
  printf("Access Denied. : event multiple open\n");
  return 0;
}


