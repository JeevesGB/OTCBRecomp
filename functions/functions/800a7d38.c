/* Function: CDREAD_OBJ_19C */
/* Address: 800a7d38 */

void CDREAD_OBJ_19C(void)

{
  int iVar1;
  undefined4 uVar2;
  
  DAT_800cb904 = VSync(-1);
  if (DAT_800cb900 < 0) {
    CDREAD_OBJ_378(1);
  }
  iVar1 = VSync(-1);
  if (DAT_800cb908 + 0x4b0 < iVar1) {
    DAT_800cb900 = -1;
  }
  if ((DAT_800cb900 == 0) || (iVar1 = VSync(-1), DAT_800cb908 + 0x4b0 < iVar1)) {
    CdReadyCallback(DAT_800cb918);
    if ((DAT_800cb540 & 1) != 0) {
      CdDataCallback(DAT_800cb91c);
    }
    CdSyncCallback(CDREAD_OBJ_0);
    CdControlF('\t',(u_char *)0x0);
    DAT_800cb910 = 1;
    if (DAT_800cb53c != (code *)0x0) {
      uVar2 = 5;
      if (DAT_800cb900 == 0) {
        uVar2 = 2;
      }
      (*DAT_800cb53c)(uVar2);
    }
  }
  return;
}


