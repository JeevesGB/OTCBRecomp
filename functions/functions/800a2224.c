/* Function: MemCardOpen */
/* Address: 800a2224 */

long MemCardOpen(long chan,char *file,long flag)

{
  long lVar1;
  int iVar2;
  long alStack_28 [2];
  
  iVar2 = 0;
  if (-1 < DAT_800d0b94) {
    printf("Access Denied. : file already open.\n");
    lVar1 = LIBMCRD_OBJ_88C();
    return lVar1;
  }
  LIBMCRD_OBJ_1B3C(chan,&DAT_800d0ba4);
  strcat(&DAT_800d0ba4,file);
  DAT_800d0b90 = chan;
  while( true ) {
    lVar1 = open(&DAT_800d0ba4,1);
    if (-1 < lVar1) {
      close(lVar1);
      _clr_card_event();
      DAT_800d0b94 = open(&DAT_800d0ba4,flag | 0x8000);
      return 0;
    }
    DAT_800d0bd8 = MemCardCallback((MemCB)0x0);
    if (0 < DAT_800d0b80) break;
    DAT_800d0b80 = 2;
    DAT_800d0b84 = 0;
    DAT_800d0b88 = 0;
    DAT_800d0b90 = chan;
    UserFuncOpen(LIBMCRD_OBJ_480);
    MemCardSync(0,(long *)0x0,alStack_28);
    MemCardCallback(DAT_800d0bd8);
    if ((alStack_28[0] != 3) && ((alStack_28[0] != 2 || (iVar2 = iVar2 + 1, 4 < iVar2)))) {
      if (alStack_28[0] == 0) {
        alStack_28[0] = 5;
      }
      lVar1 = LIBMCRD_OBJ_88C();
      return lVar1;
    }
  }
  printf("Access Denied. : event multiple open\n");
  lVar1 = LIBMCRD_OBJ_80C(0);
  return lVar1;
}


