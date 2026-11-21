/* Function: C_011_OBJ_778 */
/* Address: 800a9224 */

void C_011_OBJ_778(void)

{
  if ((ushort)DAT_800d1048[3] - 1 != (uint)(ushort)DAT_800d1048[2]) {
    if (DAT_800d0fd0 != 0) {
      C_011_OBJ_91C(DAT_800d0fdc,DAT_800d0fd0 + DAT_800d0fc0 * 0x800 + 0x20,0x1f8,0);
      DAT_800d0fc0 = DAT_800d0fc0 + 1;
      C_011_OBJ_8B0();
      return;
    }
    C_011_OBJ_948(3,DAT_800d0fdc,0,0x1f8);
    *(undefined4 *)PTR_COMMON_DELAY_800cb9c0 = 0x1325;
    *DAT_800d1048 = 3;
    DAT_800d0fc4 = DAT_800d0fc4 + 1;
    if ((DAT_800d0fd0 != 0) && (DAT_800d0fbc != 0)) {
      data_ready_callback();
    }
    return;
  }
  DAT_800d0fbc = 1;
  if (DAT_800d0fd0 != 0) {
    C_011_OBJ_91C(DAT_800d0fdc,DAT_800d0fd0 + DAT_800d0fc0 * 0x800 + 0x20,0x1f8,1);
    DAT_800d0fc0 = DAT_800d0fc0 + 1;
    C_011_OBJ_814();
    return;
  }
  C_011_OBJ_948(3,DAT_800d0fdc,0,0x1f8);
  DAT_800d0fa4 = 0;
  DAT_800d0fa0 = 0;
  DAT_800d0fb8 = DAT_800d0fb0;
  C_011_OBJ_8B0();
  return;
}


