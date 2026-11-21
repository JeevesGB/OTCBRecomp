/* Function: DsSyncCallback */
/* Address: 800a86fc */

DslCB DsSyncCallback(DslCB func)

{
  DslCB pDVar1;
  
  pDVar1 = DAT_800d1020;
  DAT_800d1020 = func;
  return pDVar1;
}


