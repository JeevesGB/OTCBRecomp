/* Function: CdReadyCallback */
/* Address: 800a5e44 */

CdlCB CdReadyCallback(CdlCB func)

{
  CdlCB pCVar1;
  
  pCVar1 = DAT_800cb5d8;
  DAT_800cb5d8 = func;
  return pCVar1;
}


