/* Function: LIBPRESS_OBJ_3B0 */
/* Address: 800a518c */

void LIBPRESS_OBJ_3B0(undefined4 *param_1,uint param_2)

{
  LIBPRESS_OBJ_4CC();
  *(uint *)PTR_DMA_DPCR_800ca6e4 = *(uint *)PTR_DMA_DPCR_800ca6e4 | 0x88;
  *(undefined4 **)PTR_DMA_MDEC_IN_MADR_800ca6ac = param_1 + 1;
  *(uint *)PTR_DMA_MDEC_IN_BCR_800ca6b0 = (param_2 >> 5) << 0x10 | 0x20;
  *(undefined4 *)PTR_MDEC_REG0_800ca6dc = *param_1;
  *(undefined4 *)PTR_DMA_MDEC_IN_CHCR_800ca6b4 = 0x1000201;
  return;
}


