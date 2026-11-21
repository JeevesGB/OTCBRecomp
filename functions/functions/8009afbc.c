/* Function: VSync */
/* Address: 8009afbc */

int VSync(int mode)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  do {
  } while (*(int *)PTR_TMR_HRETRACE_VAL_800c45f8 != *(int *)PTR_TMR_HRETRACE_VAL_800c45f8);
  uVar1 = *(int *)PTR_TMR_HRETRACE_VAL_800c45f8 - DAT_800c45fc;
  if (mode < 0) {
    iVar2 = VSYNC_OBJ_164();
    return iVar2;
  }
  if (mode != 1) {
    if (0 < mode) {
      iVar2 = VSYNC_OBJ_A4();
      return iVar2;
    }
    iVar2 = 0;
    if (0 < mode) {
      iVar2 = mode + -1;
    }
    VSYNC_OBJ_178(DAT_800c4600,iVar2);
    uVar3 = *(uint *)PTR_GPU_REG1_800c45f4;
    VSYNC_OBJ_178(DAT_800c572c + 1,1);
    if (((uVar3 & 0x400000) != 0) && (-1 < (int)(uVar3 ^ *(uint *)PTR_GPU_REG1_800c45f4))) {
      do {
      } while (((uVar3 ^ *(uint *)PTR_GPU_REG1_800c45f4) & 0x80000000) == 0);
    }
    DAT_800c4600 = DAT_800c572c;
    do {
      DAT_800c45fc = *(int *)PTR_TMR_HRETRACE_VAL_800c45f8;
    } while (DAT_800c45fc != *(int *)PTR_TMR_HRETRACE_VAL_800c45f8);
  }
  return uVar1 & 0xffff;
}


