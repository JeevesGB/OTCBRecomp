/* Function: MemCardSync */
/* Address: 800a2efc */

long MemCardSync(long mode,long *cmds,long *rslt)

{
  int iVar1;
  long lVar2;
  
  iVar1 = DAT_800d0b80;
  if ((DAT_800d0b80 != 0) || (lVar2 = -1, DAT_800d0b88 != 0)) {
    if (mode == 0) {
      if (DAT_800d0b88 == 0) {
        do {
        } while( true );
      }
      if (rslt != (long *)0x0) {
        *rslt = DAT_800d0b74;
      }
      if (cmds != (long *)0x0) {
        *cmds = DAT_800d0b70;
      }
      DAT_800d0b88 = 0;
      lVar2 = LIBMCRD_OBJ_1514();
      return lVar2;
    }
    if (DAT_800d0b88 == 0) {
      if (rslt != (long *)0x0) {
        *rslt = DAT_800d0b84;
      }
      lVar2 = 0;
      if (cmds != (long *)0x0) {
        *cmds = iVar1;
        lVar2 = LIBMCRD_OBJ_1514();
        return lVar2;
      }
    }
    else {
      if (rslt != (long *)0x0) {
        *rslt = DAT_800d0b74;
      }
      if (cmds != (long *)0x0) {
        *cmds = DAT_800d0b70;
      }
      DAT_800d0b88 = 0;
      lVar2 = 1;
    }
  }
  return lVar2;
}


