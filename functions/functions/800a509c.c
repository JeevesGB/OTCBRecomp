/* Function: LIBPRESS_OBJ_2C0 */
/* Address: 800a509c */

void LIBPRESS_OBJ_2C0(int param_1)

{
  if (param_1 == 0) {
    *(undefined4 *)PTR_MDEC_REG1_800ca6e0 = 0x80000000;
    *(undefined4 *)PTR_DMA_MDEC_IN_CHCR_800ca6b4 = 0;
    *(undefined4 *)PTR_DMA_MDEC_OUT_CHCR_800ca6c0 = 0;
    *(undefined4 *)PTR_MDEC_REG1_800ca6e0 = 0x60000000;
    LIBPRESS_OBJ_3B0(&DAT_800ca59c,0x20);
    LIBPRESS_OBJ_3B0(&DAT_800ca620,0x20);
    LIBPRESS_OBJ_3A0();
    return;
  }
  if (param_1 != 1) {
    LIBPRESS_OBJ_394();
    return;
  }
  *(undefined4 *)PTR_MDEC_REG1_800ca6e0 = 0x80000000;
  *(undefined4 *)PTR_DMA_MDEC_IN_CHCR_800ca6b4 = 0;
  *(undefined4 *)PTR_DMA_MDEC_OUT_CHCR_800ca6c0 = 0;
  *(undefined4 *)PTR_MDEC_REG1_800ca6e0 = 0x60000000;
  LIBPRESS_OBJ_3A0();
  return;
}


