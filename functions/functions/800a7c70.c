/* Function: CDREAD_OBJ_D4 */
/* Address: 800a7c70 */

void CDREAD_OBJ_D4(void)

{
  int iVar1;
  
  iVar1 = CdPosToInt((CdlLOC *)&stack0x00000010);
  if (iVar1 != DAT_800cb90c) {
    puts("CdRead: sector error\n");
    DAT_800cb900 = -1;
  }
  if ((DAT_800cb540 & 1) != 0) {
    CdGetSector2(DAT_800cb8f4,DAT_800cb8fc);
    CDREAD_OBJ_19C();
    return;
  }
  CdGetSector(DAT_800cb8f4,DAT_800cb8fc);
  DAT_800cb8f4 = (void *)((int)DAT_800cb8f4 + DAT_800cb8fc * 4);
  DAT_800cb900 = DAT_800cb900 + -1;
  DAT_800cb90c = DAT_800cb90c + 1;
  CDREAD_OBJ_19C();
  return;
}


