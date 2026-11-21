/* Function: SYS_OBJ_20C0 */
/* Address: 8009e5ec */

uint SYS_OBJ_20C0(uint param_1)

{
  *(uint *)PTR_GPU_REG1_800ca274 = param_1 | 0x10000000;
  return *(uint *)PTR_GPU_REG0_800ca270 & 0xffffff;
}


