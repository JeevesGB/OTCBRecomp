/* Function: VSYNC_OBJ_A4 */
/* Address: 8009b060 */

void VSYNC_OBJ_A4(void)

{
  uint uVar1;
  
  VSYNC_OBJ_178();
  uVar1 = *(uint *)PTR_GPU_REG1_800c45f4;
  VSYNC_OBJ_178(DAT_800c572c + 1,1);
  if (((uVar1 & 0x400000) != 0) && (-1 < (int)(uVar1 ^ *(uint *)PTR_GPU_REG1_800c45f4))) {
    do {
    } while (((uVar1 ^ *(uint *)PTR_GPU_REG1_800c45f4) & 0x80000000) == 0);
  }
  DAT_800c4600 = DAT_800c572c;
  do {
    DAT_800c45fc = *(int *)PTR_TMR_HRETRACE_VAL_800c45f8;
  } while (*(int *)PTR_TMR_HRETRACE_VAL_800c45f8 != *(int *)PTR_TMR_HRETRACE_VAL_800c45f8);
  return;
}


