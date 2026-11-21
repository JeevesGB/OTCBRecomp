/* Function: StGetBackloc */
/* Address: 800a87e8 */

int StGetBackloc(CdlLOC *loc)

{
  int iVar1;
  
  if (DAT_800d1018 == 0) {
    iVar1 = CdPosToInt((CdlLOC *)&DAT_800d1030);
    CdIntToPos(iVar1 + 1,loc);
    iVar1 = C_004_OBJ_D4();
    return iVar1;
  }
  return -1;
}


