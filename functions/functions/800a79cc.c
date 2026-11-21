/* Function: CD_getsector2 */
/* Address: 800a79cc */

undefined4 CD_getsector2(undefined4 param_1,uint param_2)

{
  byte bVar1;
  
  *PTR_CDROM_REG0_800cb898 = 0;
  *PTR_CDROM_REG3_800cb8a4 = 0x80;
  *(undefined4 *)PTR_CDROM_DELAY_800cb8cc = 0x21020843;
  *(undefined4 *)PTR_COMMON_DELAY_800cb8a8 = 0x1325;
  *(uint *)PTR_DMA_DPCR_800cb8d0 = *(uint *)PTR_DMA_DPCR_800cb8d0 | 0x8000;
  *(undefined4 *)PTR_DMA_CDROM_MADR_800cb8d4 = param_1;
  *(uint *)PTR_DMA_CDROM_BCR_800cb8d8 = param_2 | 0x10000;
  bVar1 = *PTR_CDROM_REG0_800cb898;
  while ((bVar1 & 0x40) == 0) {
    bVar1 = *PTR_CDROM_REG0_800cb898;
  }
  *(undefined4 *)PTR_DMA_CDROM_CHCR_800cb8dc = 0x11400100;
  return 0;
}


