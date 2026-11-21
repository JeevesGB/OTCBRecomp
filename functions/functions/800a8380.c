/* Function: CDREAD_OBJ_7E4 */
/* Address: 800a8380 */

bool CDREAD_OBJ_7E4(void)

{
  undefined4 in_v0;
  uint uVar1;
  int iVar2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  
  DAT_800cb8f8 = DAT_800cb8f8 | 0x20;
  DAT_800cb8ec = unaff_s4;
  DAT_800cb8f0 = unaff_s3;
  DAT_800cb8fc = in_v0;
  DAT_800cb914 = CdSyncCallback((CdlCB)0x0);
  DAT_800cb918 = CdReadyCallback((CdlCB)0x0);
  if ((DAT_800cb540 & 1) != 0) {
    DAT_800cb91c = CdDataCallback((func *)0x0);
  }
  DAT_800cb908 = VSync(-1);
  uVar1 = CdStatus();
  if ((uVar1 & 0xe0) != 0) {
    CdControlB('\t',(u_char *)0x0,(u_char *)0x0);
  }
  iVar2 = CDREAD_OBJ_378(0);
  return 0 < iVar2;
}


