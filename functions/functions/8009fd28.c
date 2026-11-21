/* Function: BREAK_OBJ_1BC */
/* Address: 8009fd28 */

void BREAK_OBJ_1BC(void)

{
  undefined4 unaff_s0;
  
  *(undefined4 *)PTR_GPU_REG1_800ca43c = 0x4000002;
  *(undefined4 *)PTR_DMA_GPU_MADR_800ca42c = unaff_s0;
  *(undefined4 *)PTR_DMA_GPU_BCR_800ca430 = 0;
  *(undefined4 *)PTR_DMA_GPU_CHCR_800ca434 = 0x1000401;
  return;
}


