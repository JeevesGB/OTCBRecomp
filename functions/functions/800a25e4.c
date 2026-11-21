/* Function: MemCardWriteData */
/* Address: 800a25e4 */

long MemCardWriteData(ulong *adrs,long ofs,long bytes)

{
  long lVar1;
  
  if (DAT_800d0b94 < 0) {
    lVar1 = LIBMCRD_OBJ_B84("Access Denied. : file not open.\n");
    return lVar1;
  }
  if (0 < DAT_800d0b80) {
    lVar1 = LIBMCRD_OBJ_B84("Access Denied. : event multiple open\n");
    return lVar1;
  }
  if ((bytes & 0x7fU) != 0) {
    lVar1 = LIBMCRD_OBJ_B84("Access Denied. : invalid data size align\n");
    return lVar1;
  }
  if ((ofs & 0x7fU) == 0) {
    DAT_800d0b80 = 6;
    DAT_800d0b84 = 0;
    DAT_800d0b88 = 0;
    DAT_800d0b98 = ofs;
    DAT_800d0b9c = bytes;
    DAT_800d0ba0 = adrs;
    UserFuncOpen(LIBMCRD_OBJ_BA0);
    lVar1 = LIBMCRD_OBJ_B90();
    return lVar1;
  }
  printf("Access Denied. : invalid offset value align\n");
  return 0;
}


