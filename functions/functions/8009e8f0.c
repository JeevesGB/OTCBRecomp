/* Function: SYS_OBJ_23C4 */
/* Address: 8009e8f0 */

uint SYS_OBJ_23C4(void)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((*(uint *)PTR_DMA_GPU_CHCR_800ca280 & 0x1000000) == 0) {
    DAT_800ca2a0 = SetIntrMask(0);
    if (DAT_800ca294 != DAT_800ca298) {
      uVar1 = *(uint *)PTR_DMA_GPU_CHCR_800ca280;
      while ((uVar1 & 0x1000000) == 0) {
        if (((DAT_800ca298 + 1 & 0x3f) == DAT_800ca294) && (DAT_800ca178 == (code *)0x0)) {
          DMACallback(2,0);
        }
        uVar1 = *(uint *)PTR_GPU_REG1_800ca274;
        while ((uVar1 & 0x4000000) == 0) {
          uVar1 = *(uint *)PTR_GPU_REG1_800ca274;
        }
        (**(code **)(&DAT_800cf300 + DAT_800ca298 * 0x60))
                  (*(undefined4 *)(&DAT_800cf304 + DAT_800ca298 * 0x60),
                   *(undefined4 *)(&DAT_800cf308 + DAT_800ca298 * 0x60));
        DAT_800ca298 = DAT_800ca298 + 1 & 0x3f;
        if (DAT_800ca294 == DAT_800ca298) break;
        uVar1 = *(uint *)PTR_DMA_GPU_CHCR_800ca280;
      }
    }
    SetIntrMask(DAT_800ca2a0);
    if ((((DAT_800ca294 == DAT_800ca298) && ((*(uint *)PTR_DMA_GPU_CHCR_800ca280 & 0x1000000) == 0))
        && (DAT_800ca174 != 0)) && (DAT_800ca178 != (code *)0x0)) {
      DAT_800ca174 = 0;
      (*DAT_800ca178)();
    }
    uVar1 = DAT_800ca294 - DAT_800ca298 & 0x3f;
  }
  return uVar1;
}


