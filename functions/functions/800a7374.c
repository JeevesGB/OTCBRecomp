/* Function: CD_flush */
/* Address: 800a7374 */

void CD_flush(void)

{
  byte bVar1;
  
  *PTR_CDROM_REG0_800cb898 = 1;
  bVar1 = *PTR_CDROM_REG3_800cb8a4;
  while ((bVar1 & 7) != 0) {
    *PTR_CDROM_REG0_800cb898 = 1;
    *PTR_CDROM_REG3_800cb8a4 = 7;
    *PTR_CDROM_REG2_800cb8a0 = 7;
    bVar1 = *PTR_CDROM_REG3_800cb8a4;
  }
  DAT_800cb8b2 = 0;
  DAT_800cb8b1 = 0;
  DAT_800cb8b0 = 2;
  *PTR_CDROM_REG0_800cb898 = 0;
  *PTR_CDROM_REG3_800cb8a4 = 0;
  *(undefined4 *)PTR_COMMON_DELAY_800cb8a8 = 0x1325;
  return;
}


