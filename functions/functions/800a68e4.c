/* Function: BIOS_OBJ_4A8 */
/* Address: 800a68e4 */

void BIOS_OBJ_4A8(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar3 = &DAT_800d0fe8;
  DAT_800cb8b1 = 5;
  puVar4 = &stack0x00000018;
  DAT_800cb8b0 = 5;
  iVar2 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != -1);
  puVar3 = &DAT_800d0ff0;
  puVar4 = &stack0x00000018;
  iVar2 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != -1);
  BIOS_OBJ_548();
  return;
}


