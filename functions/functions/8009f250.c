/* Function: SYS_OBJ_2D24 */
/* Address: 8009f250 */

undefined4 SYS_OBJ_2D24(void)

{
  int iVar1;
  uint in_v0;
  undefined4 uVar2;
  uint in_v1;
  undefined4 *unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  
  while (((in_v0 & in_v1) != 0 || ((*(uint *)PTR_GPU_REG1_800ca274 & 0x4000000) == 0))) {
    iVar1 = SYS_OBJ_28E4();
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    in_v0 = *(uint *)PTR_DMA_GPU_CHCR_800ca280;
    in_v1 = 0x1000000;
  }
  DMACallback(2,_GPU_ResetCallback);
  uVar2 = 0xffffffff;
  if (*(short *)(unaff_s0 + 1) != 0) {
    if (*(short *)((int)unaff_s0 + 6) == 0) {
      uVar2 = SYS_OBJ_2DCC();
      return uVar2;
    }
    DAT_800ca210 = unaff_s1 << 0x10 | unaff_s2 & 0xffff;
    DAT_800ca20c = *unaff_s0;
    DAT_800ca214 = unaff_s0[1];
    (**(code **)(PTR_PTR_800ca164 + 0x18))(&DAT_800ca204);
    uVar2 = 0;
  }
  return uVar2;
}


