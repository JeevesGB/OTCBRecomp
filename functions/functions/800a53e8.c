/* Function: LIBPRESS_OBJ_60C */
/* Address: 800a53e8 */

undefined4 LIBPRESS_OBJ_60C(undefined4 param_1)

{
  printf("%s timeout:\n",param_1);
  *(undefined4 *)PTR_MDEC_REG1_800ca6e0 = 0x80000000;
  *(undefined4 *)PTR_DMA_MDEC_IN_CHCR_800ca6b4 = 0;
  *(undefined4 *)PTR_DMA_MDEC_OUT_CHCR_800ca6c0 = 0;
  *(undefined4 *)PTR_MDEC_REG1_800ca6e0 = 0x60000000;
  return 0;
}


