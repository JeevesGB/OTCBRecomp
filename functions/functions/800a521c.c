/* Function: LIBPRESS_OBJ_440 */
/* Address: 800a521c */

void LIBPRESS_OBJ_440(undefined4 param_1,uint param_2)

{
  LIBPRESS_OBJ_560();
  *(uint *)PTR_DMA_DPCR_800ca6e4 = *(uint *)PTR_DMA_DPCR_800ca6e4 | 0x88;
  *(undefined4 *)PTR_DMA_MDEC_OUT_CHCR_800ca6c0 = 0;
  *(undefined4 *)PTR_DMA_MDEC_OUT_MADR_800ca6b8 = param_1;
  *(uint *)PTR_DMA_MDEC_OUT_BCR_800ca6bc = (param_2 >> 5) << 0x10 | 0x20;
  *(undefined4 *)PTR_DMA_MDEC_OUT_CHCR_800ca6c0 = 0x1000200;
  return;
}


