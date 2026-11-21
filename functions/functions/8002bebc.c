/* Function: UnloadAllVABs */
/* Address: 8002bebc */

void UnloadAllVABs(void)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_VabCount) {
    psVar2 = (short *)&g_VabSlots;
    do {
      iVar3 = iVar3 + 1;
      SsVabClose(*psVar2);
      iVar1 = g_VabCount;
      psVar2[0] = -1;
      psVar2[1] = -1;
      psVar2 = psVar2 + 2;
    } while (iVar3 < iVar1);
  }
  g_VabCount = 0;
  return;
}


