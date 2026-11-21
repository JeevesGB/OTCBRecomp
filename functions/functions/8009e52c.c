/* Function: SYS_OBJ_2000 */
/* Address: 8009e52c */

void SYS_OBJ_2000(uint param_1)

{
  *(uint *)PTR_GPU_REG1_800ca274 = param_1;
  (&DAT_800cf1f8)[param_1 >> 0x18] = (char)param_1;
  return;
}


