/* Function: InitCarDisplay */
/* Address: 80069f30 */

void InitCarDisplay(void)

{
  int iVar1;
  uchar *puVar2;
  
  puVar2 = &g_CarDisplayObjects;
  iVar1 = 0;
  do {
    bzero(puVar2,0xb0);
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0xb0;
  } while (iVar1 != 0x18);
  return;
}


