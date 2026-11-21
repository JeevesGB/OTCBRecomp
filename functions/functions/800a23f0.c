/* Function: MemCardReadData */
/* Address: 800a23f0 */

long MemCardReadData(ulong *adrs,long ofs,long bytes)

{
  long lVar1;
  
  if (DAT_800d0b94 < 0) {
    lVar1 = LIBMCRD_OBJ_990("Access Denied. : file not open.\n");
    return lVar1;
  }
  if (0 < DAT_800d0b80) {
    lVar1 = LIBMCRD_OBJ_990("Access Denied. : event multiple open\n");
    return lVar1;
  }
  if ((bytes & 0x7fU) != 0) {
    lVar1 = LIBMCRD_OBJ_990("Access Denied. : invalid data size align\n");
    return lVar1;
  }
  if ((ofs & 0x7fU) == 0) {
    DAT_800d0b80 = 5;
    DAT_800d0b84 = 0;
    DAT_800d0b88 = 0;
    DAT_800d0b98 = ofs;
    DAT_800d0b9c = bytes;
    DAT_800d0ba0 = adrs;
    UserFuncOpen(LIBMCRD_OBJ_9AC);
    lVar1 = LIBMCRD_OBJ_99C();
    return lVar1;
  }
  printf("Access Denied. : invalid offset value align\n");
  return 0;
}


