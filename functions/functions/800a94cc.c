/* Function: C_011_OBJ_A20 */
/* Address: 800a94cc */

void C_011_OBJ_A20(void)

{
  byte bVar1;
  undefined1 in_v0;
  int in_v1;
  int unaff_s0;
  dword unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  dword in_stack_00000040;
  
  *(undefined1 *)(in_v1 + 2) = in_v0;
  *(uint *)PTR_DMA_DPCR_800cb9c4 = *(uint *)PTR_DMA_DPCR_800cb9c4 | 1 << (unaff_s0 * 4 + 3U & 0x1f);
  (&DMA_MDEC_IN_MADR)[unaff_s0 * 4] = unaff_s2;
  (&DMA_MDEC_IN_BCR)[unaff_s0 * 4] = unaff_s3 << 0x10 | unaff_s4;
  bVar1 = *PTR_CDROM_REG0_800cb9ac;
  while ((bVar1 & 0x40) == 0) {
    bVar1 = *PTR_CDROM_REG0_800cb9ac;
  }
  (&DMA_MDEC_IN_CHCR)[unaff_s0 * 4] = in_stack_00000040;
  return;
}


