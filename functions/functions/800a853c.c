/* Function: CdReadCallback */
/* Address: 800a853c */

CdlCB CdReadCallback(CdlCB func)

{
  CdlCB pCVar1;
  
  pCVar1 = DAT_800cb53c;
  DAT_800cb53c = func;
  return pCVar1;
}


