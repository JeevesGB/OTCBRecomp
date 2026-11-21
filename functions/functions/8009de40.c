/* Function: SYS_OBJ_1914 */
/* Address: 8009de40 */

undefined4 SYS_OBJ_1914(ushort *param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((short)param_1[2] < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = DAT_800ca170 - 1;
    if ((int)(short)param_1[2] <= DAT_800ca170 + -1) {
      uVar2 = SYS_OBJ_196C(param_1[2]);
      return uVar2;
    }
  }
  param_1[2] = uVar1;
  if ((short)param_1[3] < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = DAT_800ca172 - 1;
    if ((int)(short)param_1[3] <= DAT_800ca172 + -1) {
      uVar2 = SYS_OBJ_19AC(param_1[3]);
      return uVar2;
    }
  }
  param_1[3] = uVar1;
  if (((*param_1 & 0x3f) == 0) && ((param_1[2] & 0x3f) == 0)) {
    DAT_800cf1b0 = 0x5ffffff;
    DAT_800cf1b4 = 0xe6000000;
    DAT_800cf1bc = param_2 & 0xffffff | 0x2000000;
    DAT_800cf1b8 = *(uint *)PTR_GPU_REG1_800ca274 & 0x7ff | (param_2 >> 0x1f) << 10 | 0xe1000000;
    DAT_800cf1c0 = *(undefined4 *)param_1;
    DAT_800cf1c4 = *(uint *)(param_1 + 2);
    SYS_OBJ_2078(&DAT_800cf1b0);
    return 0;
  }
  DAT_800cf1b0 = 0x80cf1d8;
  DAT_800cf1c8 = param_2 & 0xffffff | 0x60000000;
  DAT_800cf1c0 = 0xe6000000;
  DAT_800cf1b4 = 0xe3000000;
  DAT_800cf1b8 = 0xe4ffffff;
  DAT_800cf1bc = 0xe5000000;
  DAT_800cf1c4 = *(uint *)PTR_GPU_REG1_800ca274 & 0x7ff | (param_2 >> 0x1f) << 10 | 0xe1000000;
  DAT_800cf1cc = *(undefined4 *)param_1;
  DAT_800cf1d0 = *(undefined4 *)(param_1 + 2);
  DAT_800cf1d8 = 0x3ffffff;
  uVar3 = SYS_OBJ_20C0(3);
  DAT_800cf1dc = uVar3 | 0xe3000000;
  uVar3 = SYS_OBJ_20C0(4);
  DAT_800cf1e0 = uVar3 | 0xe4000000;
  uVar3 = SYS_OBJ_20C0(5);
  DAT_800cf1e4 = uVar3 | 0xe5000000;
  uVar2 = SYS_OBJ_1B1C();
  return uVar2;
}


