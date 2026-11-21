/* Function: MemCardWriteFile */
/* Address: 800a2a30 */

long MemCardWriteFile(long chan,char *file,ulong *adrs,long ofs,long bytes)

{
  long lVar1;
  
  if (0 < DAT_800d0b80) {
    lVar1 = LIBMCRD_OBJ_1018("Access Denied. : system busy\n");
    return lVar1;
  }
  if (-1 < DAT_800d0b94) {
    lVar1 = LIBMCRD_OBJ_1018("Access Denied. : file already open.\n");
    return lVar1;
  }
  if ((bytes & 0x7fU) != 0) {
    lVar1 = LIBMCRD_OBJ_1018("Access Denied. : invalid data size align\n");
    return lVar1;
  }
  if ((ofs & 0x7fU) == 0) {
    LIBMCRD_OBJ_1B3C(chan,&DAT_800d0ba4);
    strcat(&DAT_800d0ba4,file);
    DAT_800d0b80 = 4;
    DAT_800d0b84 = 0;
    DAT_800d0b88 = 0;
    DAT_800d0b9c = bytes;
    DAT_800d0b90 = chan;
    DAT_800d0b98 = ofs;
    DAT_800d0ba0 = adrs;
    UserFuncOpen(LIBMCRD_OBJ_104C);
    lVar1 = LIBMCRD_OBJ_1024();
    return lVar1;
  }
  printf("Access Denied. : invalid offset value align\n");
  return 0;
}


