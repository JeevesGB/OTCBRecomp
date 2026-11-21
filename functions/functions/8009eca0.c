/* Function: SYS_OBJ_2774 */
/* Address: 8009eca0 */

uint SYS_OBJ_2774(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    SYS_OBJ_28B0();
    uVar1 = SYS_OBJ_27AC();
    return uVar1;
  }
  uVar1 = DAT_800ca294 - DAT_800ca298 & 0x3f;
  if (uVar1 != 0) {
    SYS_OBJ_23C4();
  }
  if ((((*(uint *)PTR_DMA_GPU_CHCR_800ca280 & 0x1000000) != 0) ||
      ((*(uint *)PTR_GPU_REG1_800ca274 & 0x4000000) == 0)) && (uVar1 == 0)) {
    uVar1 = 1;
  }
  return uVar1;
}


