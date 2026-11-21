/* Function: CdGetSector */
/* Address: 800a6234 */

int CdGetSector(void *madr,int size)

{
  int iVar1;
  
  iVar1 = CD_getsector();
  return (uint)(iVar1 == 0);
}


