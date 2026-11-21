/* Function: SYS_OBJ_196C */
/* Address: 8009de98 */

undefined4 SYS_OBJ_196C(void)

{
  ushort in_v0;
  undefined4 uVar1;
  uint uVar2;
  ushort uVar3;
  ushort *in_t0;
  uint in_t1;
  
  in_t0[2] = in_v0;
  if ((short)in_t0[3] < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = DAT_800ca172 - 1;
    if ((int)(short)in_t0[3] <= DAT_800ca172 + -1) {
      uVar1 = SYS_OBJ_19AC(in_t0[3]);
      return uVar1;
    }
  }
  in_t0[3] = uVar3;
  if (((*in_t0 & 0x3f) == 0) && ((in_t0[2] & 0x3f) == 0)) {
    DAT_800cf1b0 = 0x5ffffff;
    DAT_800cf1b4 = 0xe6000000;
    DAT_800cf1bc = in_t1 & 0xffffff | 0x2000000;
    DAT_800cf1b8 = *(uint *)PTR_GPU_REG1_800ca274 & 0x7ff | (in_t1 >> 0x1f) << 10 | 0xe1000000;
    DAT_800cf1c0 = *(undefined4 *)in_t0;
    DAT_800cf1c4 = *(uint *)(in_t0 + 2);
    SYS_OBJ_2078(&DAT_800cf1b0);
    return 0;
  }
  DAT_800cf1b0 = 0x80cf1d8;
  DAT_800cf1c8 = in_t1 & 0xffffff | 0x60000000;
  DAT_800cf1c0 = 0xe6000000;
  DAT_800cf1b4 = 0xe3000000;
  DAT_800cf1b8 = 0xe4ffffff;
  DAT_800cf1bc = 0xe5000000;
  DAT_800cf1c4 = *(uint *)PTR_GPU_REG1_800ca274 & 0x7ff | (in_t1 >> 0x1f) << 10 | 0xe1000000;
  DAT_800cf1cc = *(undefined4 *)in_t0;
  DAT_800cf1d0 = *(undefined4 *)(in_t0 + 2);
  DAT_800cf1d8 = 0x3ffffff;
  uVar2 = SYS_OBJ_20C0(3);
  DAT_800cf1dc = uVar2 | 0xe3000000;
  uVar2 = SYS_OBJ_20C0(4);
  DAT_800cf1e0 = uVar2 | 0xe4000000;
  uVar2 = SYS_OBJ_20C0(5);
  DAT_800cf1e4 = uVar2 | 0xe5000000;
  uVar1 = SYS_OBJ_1B1C();
  return uVar1;
}


