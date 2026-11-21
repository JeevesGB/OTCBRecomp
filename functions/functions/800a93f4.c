/* Function: C_011_OBJ_948 */
/* Address: 800a93f4 */

void C_011_OBJ_948(uint param_1,dword param_2,int param_3,uint param_4,dword param_5,char param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = (&DMA_MDEC_IN_CHCR)[param_1 * 4];
  while ((uVar2 & 0x1000000) != 0) {
    if (iVar3 == 0x10000) {
      printf("DMA STATUS ERROR %x\n",(&DMA_MDEC_IN_CHCR)[param_1 * 4]);
      C_011_OBJ_9C4();
      return;
    }
    iVar3 = iVar3 + 1;
    uVar2 = (&DMA_MDEC_IN_CHCR)[param_1 * 4];
  }
  if (param_6 != '\x01') {
    PTR_DMA_DICR_800cb9c8[2] = PTR_DMA_DICR_800cb9c8[2] & ~(byte)(1 << (param_1 & 0x1f));
    *(uint *)PTR_DMA_DPCR_800cb9c4 = *(uint *)PTR_DMA_DPCR_800cb9c4 | 1 << (param_1 * 4 + 3 & 0x1f);
    (&DMA_MDEC_IN_MADR)[param_1 * 4] = param_2;
    (&DMA_MDEC_IN_BCR)[param_1 * 4] = param_3 << 0x10 | param_4;
    bVar1 = *PTR_CDROM_REG0_800cb9ac;
    while ((bVar1 & 0x40) == 0) {
      bVar1 = *PTR_CDROM_REG0_800cb9ac;
    }
    (&DMA_MDEC_IN_CHCR)[param_1 * 4] = param_5;
    return;
  }
  C_011_OBJ_A20(PTR_DMA_DICR_800cb9c8[2]);
  return;
}


