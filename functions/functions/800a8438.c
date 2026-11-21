/* Function: CdReadSync */
/* Address: 800a8438 */

int CdReadSync(int mode,u_char *result)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar1 = VSync(-1);
    iVar2 = -1;
    if ((iVar1 <= DAT_800cb908 + 0x4b0) &&
       ((DAT_800cb900 < 0 || (iVar1 = VSync(-1), iVar2 = DAT_800cb900, DAT_800cb904 + 0x3c < iVar1))
       )) {
      CDREAD_OBJ_378(1);
      iVar2 = CDREAD_OBJ_934();
      return iVar2;
    }
  } while ((mode == 0) && (((DAT_800cb910 != 0 && (iVar2 == 0)) || (0 < iVar2))));
  CdReady(1,result);
  if ((DAT_800cb910 != 0) && (iVar2 == 0)) {
    iVar2 = 1;
  }
  return iVar2;
}


