/* Function: CdGetToc */
/* Address: 800a590c */

int CdGetToc(CdlLOC *loc)

{
  int iVar1;
  
  iVar1 = CdGetToc2(1,loc);
  return iVar1;
}


