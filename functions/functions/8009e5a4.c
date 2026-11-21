/* Function: SYS_OBJ_2078 */
/* Address: 8009e5a4 */

void SYS_OBJ_2078(undefined4 param_1)

{
  *(undefined4 *)PTR_GPU_REG1_800ca274 = 0x4000002;
  *(undefined4 *)PTR_DMA_GPU_MADR_800ca278 = param_1;
  *(undefined4 *)PTR_DMA_GPU_BCR_800ca27c = 0;
  *(undefined4 *)PTR_DMA_GPU_CHCR_800ca280 = 0x1000401;
  return;
}


