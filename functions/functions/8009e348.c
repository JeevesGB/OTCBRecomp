/* Function: SYS_OBJ_1E1C */
/* Address: 8009e348 */

undefined4 SYS_OBJ_1E1C(short param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *unaff_s1;
  undefined4 *unaff_s2;
  
  *(short *)((int)unaff_s1 + 6) = param_1;
  iVar4 = (int)*(short *)(unaff_s1 + 1) * (int)param_1 + 1;
  iVar5 = iVar4 - (iVar4 >> 0x1f) >> 5;
  if (iVar4 / 2 < 1) {
    uVar1 = SYS_OBJ_1FE0();
    return uVar1;
  }
  iVar4 = iVar4 / 2 + iVar5 * -0x10;
  uVar2 = *(uint *)PTR_GPU_REG1_800ca274;
  while ((uVar2 & 0x4000000) == 0) {
    iVar3 = SYS_OBJ_28E4();
    if (iVar3 != 0) {
      return 0xffffffff;
    }
    uVar2 = *(uint *)PTR_GPU_REG1_800ca274;
  }
  *(undefined4 *)PTR_GPU_REG1_800ca274 = 0x4000000;
  *(undefined4 *)PTR_GPU_REG0_800ca270 = 0x1000000;
  *(undefined4 *)PTR_GPU_REG0_800ca270 = 0xc0000000;
  *(undefined4 *)PTR_GPU_REG0_800ca270 = *unaff_s1;
  *(undefined4 *)PTR_GPU_REG0_800ca270 = unaff_s1[1];
  uVar2 = *(uint *)PTR_GPU_REG1_800ca274;
  while( true ) {
    if ((uVar2 & 0x8000000) != 0) {
      while (iVar4 = iVar4 + -1, iVar4 != -1) {
        *unaff_s2 = *(undefined4 *)PTR_GPU_REG0_800ca270;
        unaff_s2 = unaff_s2 + 1;
      }
      if (iVar5 != 0) {
        *(undefined4 *)PTR_GPU_REG1_800ca274 = 0x4000003;
        *(undefined4 **)PTR_DMA_GPU_MADR_800ca278 = unaff_s2;
        *(uint *)PTR_DMA_GPU_BCR_800ca27c = iVar5 << 0x10 | 0x10;
        *(undefined4 *)PTR_DMA_GPU_CHCR_800ca280 = 0x1000200;
      }
      return 0;
    }
    iVar3 = SYS_OBJ_28E4();
    if (iVar3 != 0) break;
    uVar2 = *(uint *)PTR_GPU_REG1_800ca274;
  }
  return 0xffffffff;
}


