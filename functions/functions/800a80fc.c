/* Function: CdReadBreak */
/* Address: 800a80fc */

/* WARNING: Removing unreachable block (ram,0x800a81d8) */
/* WARNING: Removing unreachable block (ram,0x800a8204) */
/* WARNING: Removing unreachable block (ram,0x800a8210) */
/* WARNING: Removing unreachable block (ram,0x800a8244) */
/* WARNING: Removing unreachable block (ram,0x800a825c) */
/* WARNING: Removing unreachable block (ram,0x800a8260) */
/* WARNING: Removing unreachable block (ram,0x800a8168) */
/* WARNING: Removing unreachable block (ram,0x800a8278) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CdReadBreak(void)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_800cb540 & 1) != 0) {
    CdDataSync(0);
  }
  DAT_800cb900 = 0;
  if (DAT_800cb910 == 0) {
    CDREAD_OBJ_634();
    return;
  }
  iVar1 = VSync(-1);
  do {
    if (DAT_800cb910 == 0) {
      return;
    }
    iVar2 = VSync(-1);
  } while ((uint)(iVar2 - iVar1) < 0x79);
  CdSyncCallback(DAT_800cb914);
  DAT_800cb910 = 0;
  CDREAD_OBJ_634();
  return;
}


