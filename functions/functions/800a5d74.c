/* Function: CdSetDebug */
/* Address: 800a5d74 */

int CdSetDebug(int level)

{
  int iVar1;
  
  iVar1 = DAT_800cb5dc;
  DAT_800cb5dc = level;
  return iVar1;
}


