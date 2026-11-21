/* Function: CDREAD_OBJ_634 */
/* Address: 800a81d0 */

void CDREAD_OBJ_634(void)

{
  int in_v0;
  int iVar1;
  int iVar2;
  
  if (in_v0 != 0) {
    CdReadyCallback(DAT_800cb918);
    if ((DAT_800cb540 & 1) != 0) {
      CdDataCallback(DAT_800cb91c);
    }
    CdSyncCallback(CDREAD_OBJ_0);
    CdControlF('\t',(u_char *)0x0);
    DAT_800cb910 = 1;
    iVar1 = VSync(-1);
    while (DAT_800cb910 != 0) {
      iVar2 = VSync(-1);
      if (0x78 < (uint)(iVar2 - iVar1)) {
        CdSyncCallback(DAT_800cb914);
        DAT_800cb910 = 0;
        CDREAD_OBJ_6EC();
        return;
      }
    }
  }
  return;
}


