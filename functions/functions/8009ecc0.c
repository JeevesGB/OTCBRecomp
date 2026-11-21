/* Function: SYS_OBJ_2794 */
/* Address: 8009ecc0 */

undefined4 SYS_OBJ_2794(void)

{
  int iVar1;
  undefined4 uVar2;
  
  SYS_OBJ_23C4();
  iVar1 = SYS_OBJ_28E4();
  if (iVar1 == 0) {
    if (DAT_800ca294 != DAT_800ca298) {
      uVar2 = SYS_OBJ_2794();
      return uVar2;
    }
    do {
      if (((*(uint *)PTR_DMA_GPU_CHCR_800ca280 & 0x1000000) == 0) &&
         ((*(uint *)PTR_GPU_REG1_800ca274 & 0x4000000) != 0)) {
        uVar2 = SYS_OBJ_28A0();
        return uVar2;
      }
      iVar1 = SYS_OBJ_28E4();
    } while (iVar1 == 0);
  }
  return 0xffffffff;
}


