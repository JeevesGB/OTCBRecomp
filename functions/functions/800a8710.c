/* Function: DsReadyCallback */
/* Address: 800a8710 */

DslCB DsReadyCallback(DslCB func)

{
  DslCB pDVar1;
  
  pDVar1 = DAT_800d1024;
  DAT_800d1024 = func;
  return pDVar1;
}


