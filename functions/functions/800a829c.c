/* Function: CdRead */
/* Address: 800a829c */

int CdRead(int sectors,u_long *buf,int mode)

{
  int iVar1;
  int iVar2;
  
  if (DAT_800cb910 != 0) {
    iVar1 = VSync(-1);
    while (DAT_800cb910 != 0) {
      iVar2 = VSync(-1);
      if (0x78 < (uint)(iVar2 - iVar1)) {
        CdSyncCallback(DAT_800cb914);
        DAT_800cb910 = 0;
        iVar1 = CDREAD_OBJ_77C();
        return iVar1;
      }
    }
  }
  DAT_800cb8f8 = mode;
  if ((mode & 0x30U) != 0) {
    if ((mode & 0x30U) != 0x20) {
      iVar1 = CDREAD_OBJ_7E4();
      return iVar1;
    }
    DAT_800cb8fc = 0x249;
    iVar1 = CDREAD_OBJ_7F0();
    return iVar1;
  }
  DAT_800cb8fc = 0x200;
  iVar1 = CDREAD_OBJ_7F0();
  return iVar1;
}


