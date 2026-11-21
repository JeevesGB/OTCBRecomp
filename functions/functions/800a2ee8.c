/* Function: MemCardCallback */
/* Address: 800a2ee8 */

MemCB MemCardCallback(MemCB func)

{
  MemCB pMVar1;
  
  pMVar1 = DAT_800d0bc4;
  DAT_800d0bc4 = func;
  return pMVar1;
}


