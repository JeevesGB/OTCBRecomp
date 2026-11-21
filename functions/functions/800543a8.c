/* Function: InitCD */
/* Address: 800543a8 */

void InitCD(void)

{
  int iVar1;
  
  do {
    iVar1 = CdInit();
  } while (iVar1 == 0);
  InitCD_Post();
  return;
}


