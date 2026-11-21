/* Function: BIOS_OBJ_3A8 */
/* Address: 800a67e4 */

void BIOS_OBJ_3A8(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int unaff_s0;
  int unaff_s1;
  
  if ((unaff_s1 != 0) && (unaff_s0 == 1)) {
    unaff_s1 = 0;
  }
  DAT_800cb8b1 = 1;
  if (unaff_s1 != 0) {
    DAT_800cb8b1 = 5;
  }
  puVar2 = &DAT_800d0ff0;
  puVar4 = &stack0x00000018;
  iVar3 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != -1);
  *PTR_CDROM_REG0_800cb898 = 0;
  *PTR_CDROM_REG3_800cb8a4 = 0;
  BIOS_OBJ_548();
  return;
}


