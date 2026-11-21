/* Function: CdSyncCallback */
/* Address: 800a5e30 */

CdlCB CdSyncCallback(CdlCB func)

{
  CdlCB pCVar1;
  
  pCVar1 = DAT_800cb5d4;
  DAT_800cb5d4 = func;
  return pCVar1;
}


