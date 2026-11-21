/* Function: MemCardDeleteFile */
/* Address: 800a3214 */

long MemCardDeleteFile(long chan,char *file)

{
  long lVar1;
  int iVar2;
  char acStack_40 [32];
  int local_20;
  
  iVar2 = 0;
  if (DAT_800d0b80 != 0) {
    printf("Access Denied. : system busy\n");
    lVar1 = LIBMCRD_OBJ_18B0();
    return lVar1;
  }
  LIBMCRD_OBJ_1B3C(chan,acStack_40);
  strcat(acStack_40,file);
  DAT_800d0b8c = DAT_800d0b8c | 1 << (DAT_800d0b90 & 0x1f);
  do {
    local_20 = erase(acStack_40);
    if (local_20 != 0) {
      return 0;
    }
    DAT_800d0bd8 = MemCardCallback((MemCB)0x0);
    if (0 < DAT_800d0b80) {
      printf("Access Denied. : event multiple open\n");
      lVar1 = LIBMCRD_OBJ_17F8();
      return lVar1;
    }
    DAT_800d0b80 = 2;
    DAT_800d0b84 = 0;
    DAT_800d0b88 = 0;
    DAT_800d0b90 = chan;
    UserFuncOpen(LIBMCRD_OBJ_480);
    if ((DAT_800d0b80 != 0) || (DAT_800d0b88 != 0)) {
      if (DAT_800d0b88 == 0) {
        do {
        } while( true );
      }
      DAT_800d0b88 = 0;
      local_20 = DAT_800d0b74;
    }
    MemCardCallback(DAT_800d0bd8);
  } while ((local_20 == 3) || ((local_20 == 2 && (iVar2 = iVar2 + 1, iVar2 < 4))));
  if (local_20 == 0) {
    local_20 = 5;
  }
  lVar1 = LIBMCRD_OBJ_18B0();
  return lVar1;
}


