/* Function: CD_getsector */
/* Address: 800a78cc */

undefined4 CD_getsector(undefined4 param_1,uint param_2)

{
  uint uVar1;
  
  *PTR_CDROM_REG0_800cb898 = 0;
  *PTR_CDROM_REG3_800cb8a4 = 0x80;
  *(undefined4 *)PTR_CDROM_DELAY_800cb8cc = 0x20943;
  *(undefined4 *)PTR_COMMON_DELAY_800cb8a8 = 0x1323;
  *(uint *)PTR_DMA_DPCR_800cb8d0 = *(uint *)PTR_DMA_DPCR_800cb8d0 | 0x8000;
  *(undefined4 *)PTR_DMA_CDROM_MADR_800cb8d4 = param_1;
  *(uint *)PTR_DMA_CDROM_BCR_800cb8d8 = param_2 | 0x10000;
  do {
  } while ((*PTR_CDROM_REG0_800cb898 & 0x40) == 0);
  *(undefined4 *)PTR_DMA_CDROM_CHCR_800cb8dc = 0x11000000;
  uVar1 = *(uint *)PTR_DMA_CDROM_CHCR_800cb8dc;
  while ((uVar1 & 0x1000000) != 0) {
    uVar1 = *(uint *)PTR_DMA_CDROM_CHCR_800cb8dc;
  }
  *(undefined4 *)PTR_COMMON_DELAY_800cb8a8 = 0x1325;
  return 0;
}


