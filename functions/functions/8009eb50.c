/* Function: SYS_OBJ_2624 */
/* Address: 8009eb50 */

undefined4 SYS_OBJ_2624(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  DAT_800ca2a4 = SetIntrMask(0);
  DAT_800ca298 = 0;
  DAT_800ca294 = 0;
  uVar2 = param_1 & 7;
  if (uVar2 != 1) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        uVar1 = SYS_OBJ_2740();
        return uVar1;
      }
SYS_OBJ_2694:
      *(undefined4 *)PTR_DMA_GPU_CHCR_800ca280 = 0x401;
      *(uint *)PTR_DMA_DPCR_800ca290 = *(uint *)PTR_DMA_DPCR_800ca290 | 0x800;
      *(undefined4 *)PTR_GPU_REG1_800ca274 = 0;
      SYS_OBJ_2F08(&DAT_800cf1f8,0,0x100);
      SYS_OBJ_2F08(&DAT_800cf300,0,0x1800);
      uVar1 = SYS_OBJ_2740();
      return uVar1;
    }
    if (uVar2 != 3) {
      if (uVar2 == 5) goto SYS_OBJ_2694;
      goto code_r0x8009ec6c;
    }
  }
  *(undefined4 *)PTR_DMA_GPU_CHCR_800ca280 = 0x401;
  *(uint *)PTR_DMA_DPCR_800ca290 = *(uint *)PTR_DMA_DPCR_800ca290 | 0x800;
  *(undefined4 *)PTR_GPU_REG1_800ca274 = 0x2000000;
  *(undefined4 *)PTR_GPU_REG1_800ca274 = 0x1000000;
code_r0x8009ec6c:
  SetIntrMask(DAT_800ca2a4);
  uVar1 = 0;
  if ((param_1 & 7) == 0) {
    uVar1 = SYS_OBJ_2A28(param_1);
  }
  return uVar1;
}


