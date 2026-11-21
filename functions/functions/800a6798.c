/* Function: BIOS_OBJ_35C */
/* Address: 800a6798 */

void BIOS_OBJ_35C(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int unaff_s1;
  
  DAT_800cb8b0 = 2;
  if (unaff_s1 != 0) {
    DAT_800cb8b0 = 5;
  }
  puVar2 = &DAT_800d0fe8;
  puVar4 = &stack0x00000018;
  iVar3 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != -1);
  BIOS_OBJ_548();
  return;
}


