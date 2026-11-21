/* Function: BIOS_OBJ_1688 */
/* Address: 800a7ac4 */

void BIOS_OBJ_1688(void)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *PTR_CDROM_REG0_800cb898;
  while( true ) {
    uVar2 = BIOS_OBJ_0();
    if (uVar2 == 0) break;
    if (((uVar2 & 4) != 0) && (DAT_800cb5d8 != (code *)0x0)) {
      (*DAT_800cb5d8)(DAT_800cb8b1,&DAT_800d0ff0);
    }
    if (((uVar2 & 2) != 0) && (DAT_800cb5d4 != (code *)0x0)) {
      (*DAT_800cb5d4)(DAT_800cb8b0,&DAT_800d0fe8);
    }
  }
  *PTR_CDROM_REG0_800cb898 = bVar1 & 3;
  return;
}


