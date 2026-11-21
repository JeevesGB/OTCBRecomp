/* Function: UpdateAI */
/* Address: 8004e930 */

void UpdateAI(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  g_AIFlag = 0;
  iVar2 = 0x23;
  puVar1 = &g_AIStateArray;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  return;
}


