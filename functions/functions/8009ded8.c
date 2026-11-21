/* Function: SYS_OBJ_19AC */
/* Address: 8009ded8 */

undefined4 SYS_OBJ_19AC(void)

{
  uint uVar1;
  undefined4 uVar2;
  ushort in_v1;
  ushort *in_t0;
  uint in_t1;
  
  in_t0[3] = in_v1;
  if (((*in_t0 & 0x3f) == 0) && ((in_t0[2] & 0x3f) == 0)) {
    DAT_800cf1b0 = 0x5ffffff;
    DAT_800cf1b4 = 0xe6000000;
    DAT_800cf1bc = in_t1 & 0xffffff | 0x2000000;
                    /* Probable PsyQ macro: setDrawTPage() if setlen(p, 1), setDrawMode() if
                       setlen(p, 2). */
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
                    /* Probable PsyQ macro: setDrawTPage() if setlen(p, 1), setDrawMode() if
                       setlen(p, 2). */
  DAT_800cf1c4 = *(uint *)PTR_GPU_REG1_800ca274 & 0x7ff | (in_t1 >> 0x1f) << 10 | 0xe1000000;
  DAT_800cf1cc = *(undefined4 *)in_t0;
  DAT_800cf1d0 = *(undefined4 *)(in_t0 + 2);
  DAT_800cf1d8 = 0x3ffffff;
  uVar1 = SYS_OBJ_20C0(3);
  DAT_800cf1dc = uVar1 | 0xe3000000;
  uVar1 = SYS_OBJ_20C0(4);
  DAT_800cf1e0 = uVar1 | 0xe4000000;
  uVar1 = SYS_OBJ_20C0(5);
  DAT_800cf1e4 = uVar1 | 0xe5000000;
  uVar2 = SYS_OBJ_1B1C();
  return uVar2;
}


