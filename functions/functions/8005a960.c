/* Function: CleanupRace */
/* Address: 8005a960 */

void CleanupRace(void)

{
  int iVar1;
  
  do {
    iVar1 = CdReadSync(0,&DAT_800cd590);
  } while (0 < iVar1);
  CdReset(0);
  DAT_800cd578 = 0;
  return;
}


