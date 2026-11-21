/* Function: ConfirmCarSelect */
/* Address: 80069c10 */

void ConfirmCarSelect(void)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &g_CarDisplayObject0;
  do {
    *(undefined2 *)(puVar1 + 0x19a) = 0x1f;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0xb0;
  } while (iVar2 != 0x18);
  return;
}


