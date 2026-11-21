/* Function: SYS_OBJ_2E74 */
/* Address: 8009f3a0 */

undefined4 SYS_OBJ_2E74(void)

{
  int iVar1;
  uint in_v0;
  uint in_v1;
  
  while (((in_v0 & in_v1) != 0 || ((*(uint *)PTR_GPU_REG1_800ca274 & 0x4000000) == 0))) {
    iVar1 = SYS_OBJ_28E4();
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    in_v0 = *(uint *)PTR_DMA_GPU_CHCR_800ca280;
    in_v1 = 0x1000000;
  }
  DMACallback(2,_GPU_ResetCallback);
  (**(code **)(PTR_PTR_800ca164 + 0x18))();
  return 0;
}


