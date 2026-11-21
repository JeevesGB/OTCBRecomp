/* Function: SYS_OBJ_2A28 */
/* Address: 8009ef54 */

undefined4 SYS_OBJ_2A28(uint param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)PTR_GPU_REG1_800ca274 = 0x10000007;
  if ((*(uint *)PTR_GPU_REG0_800ca270 & 0xffffff) != 2) {
    *(uint *)PTR_GPU_REG0_800ca270 = *(uint *)PTR_GPU_REG1_800ca274 & 0x3fff | 0xe1001000;
    uVar1 = SYS_OBJ_2AC0();
    return uVar1;
  }
  if ((param_1 & 8) != 0) {
    *(undefined4 *)PTR_GPU_REG1_800ca274 = 0x9000001;
    uVar1 = SYS_OBJ_2AC0();
    return uVar1;
  }
  return 1;
}


