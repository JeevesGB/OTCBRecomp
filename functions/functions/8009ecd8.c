/* Function: SYS_OBJ_27AC */
/* Address: 8009ecd8 */

undefined4 SYS_OBJ_27AC(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_800ca294 != DAT_800ca298) {
    uVar1 = SYS_OBJ_2794();
    return uVar1;
  }
  while (((*(uint *)PTR_DMA_GPU_CHCR_800ca280 & 0x1000000) != 0 ||
         ((*(uint *)PTR_GPU_REG1_800ca274 & 0x4000000) == 0))) {
    iVar2 = SYS_OBJ_28E4();
    if (iVar2 != 0) {
      return 0xffffffff;
    }
  }
  uVar1 = SYS_OBJ_28A0();
  return uVar1;
}


