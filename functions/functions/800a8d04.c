/* Function: C_011_OBJ_258 */
/* Address: 800a8d04 */

void C_011_OBJ_258(void)

{
  uint *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  short *psVar5;
  uint in_stack_00000028;
  
  psVar5 = DAT_800d1048;
  puVar2 = PTR_CDROM_DELAY_800cb9bc;
  uVar3 = *(uint *)PTR_DMA_CDROM_CHCR_800cb9dc;
  while ((uVar3 & 0x1000000) != 0) {
    uVar3 = *(uint *)PTR_DMA_CDROM_CHCR_800cb9dc;
  }
  uVar3 = (int)DAT_800d1048 + 0x1fU & 3;
  puVar1 = (uint *)(((int)DAT_800d1048 + 0x1fU) - uVar3);
  *puVar1 = *puVar1 & -1 << (uVar3 + 1) * 8 | in_stack_00000028 >> (3 - uVar3) * 8;
  uVar3 = (uint)(psVar5 + 0xe) & 3;
  puVar1 = (uint *)((int)(psVar5 + 0xe) - uVar3);
  *puVar1 = *puVar1 & 0xffffffffU >> (4 - uVar3) * 8 | in_stack_00000028 << uVar3 * 8;
  *(undefined4 *)puVar2 = 0x20843;
  *(undefined4 *)PTR_COMMON_DELAY_800cb9c0 = 0x1325;
  if ((DAT_800d0fd8 == 1) && (DAT_800d0fb4 != 0)) {
    if (DAT_800d0fb4 != (ushort)DAT_800d1048[4]) {
      *DAT_800d1048 = 0;
      if (DAT_800d0fd0 == 0) {
        return;
      }
      DAT_800d0fc0 = DAT_800d0fc0 + 1;
      C_011_OBJ_90C();
      return;
    }
    DAT_800d0fd8 = 0;
  }
  if ((*DAT_800d1048 != 0x160) || (((ushort)DAT_800d1048[1] >> 10 & 0x1f) != DAT_800d0fb8)) {
    if (DAT_800d0fd0 == 0) {
      DAT_800cb9f4 = 5;
      *DAT_800d1048 = 0;
      C_011_OBJ_90C();
      return;
    }
    DAT_800d0fc0 = 0;
    C_011_OBJ_3AC();
    return;
  }
  if (((int)DAT_800d0fa4 != (uint)(ushort)DAT_800d1048[2]) ||
     ((DAT_800d0fa0 != 0 && (DAT_800d0fa0 != (ushort)DAT_800d1048[4])))) {
    DAT_800d0fa0 = 0;
    DAT_800d0fa4 = 0;
    init_ring_status(DAT_800d0fc8,DAT_800d0fc4 - DAT_800d0fc8);
    DAT_800d0fc4 = DAT_800d0fc8;
    *DAT_800d1048 = 0;
    if (DAT_800d0fd0 != 0) {
      DAT_800d0fc0 = DAT_800d0fc0 + 1;
    }
    DAT_800cb9f4 = 6;
    C_011_OBJ_90C();
    return;
  }
  if (DAT_800d1048[2] == 0) {
    DAT_800d0fa0 = (uint)(ushort)DAT_800d1048[4];
    DAT_800d0fa4 = 0;
    if ((DAT_800d0fd4 != 0) && (DAT_800d0fd4 <= DAT_800d0fa0)) {
      DAT_800d0fa0 = 0;
      DAT_800d0fa4 = 0;
      init_ring_status(DAT_800d0fc8,DAT_800d0fc4 - DAT_800d0fc8);
      DAT_800d0fc4 = DAT_800d0fc8;
      *DAT_800d1048 = 0;
      DAT_800d0fd8 = 1;
      if (DAT_800d1044 != (code *)0x0) {
        (*DAT_800d1044)();
      }
      if (DAT_800d0fd0 != 0) {
        DAT_800d0fc0 = DAT_800d0fc0 + 1;
      }
      DAT_800cb9f4 = 7;
      C_011_OBJ_90C();
      return;
    }
    if ((DAT_800d0fe4 - DAT_800d0fc4) - 1U < (uint)(ushort)DAT_800d1048[3]) {
      if (DAT_800d0fd4 == 0) {
        *DAT_800d1048 = 1;
        DAT_800d0fd8 = 1;
        if (DAT_800d1044 != (code *)0x0) {
          (*DAT_800d1044)();
        }
        if (DAT_800d0fd0 != 0) {
          DAT_800d0fc0 = DAT_800d0fc0 + 1;
        }
        DAT_800cb9f4 = 8;
        C_011_OBJ_90C();
        return;
      }
      if (*DAT_800d0fe0 != 0) {
        *DAT_800d1048 = 0;
        if (DAT_800d0fd0 != 0) {
          DAT_800d0fc0 = DAT_800d0fc0 + 1;
        }
        DAT_800cb9f4 = 9;
        C_011_OBJ_90C();
        return;
      }
      *DAT_800d1048 = 1;
      uVar3 = 0;
      DAT_800d0fc4 = 0;
      psVar5 = DAT_800d0fe0;
      do {
        uVar4 = *(undefined4 *)DAT_800d1048;
        DAT_800d1048 = DAT_800d1048 + 2;
        uVar3 = uVar3 + 1;
        *(undefined4 *)psVar5 = uVar4;
        psVar5 = psVar5 + 2;
      } while (uVar3 < 8);
      DAT_800d1048 = DAT_800d0fe0;
    }
    DAT_800d0fc8 = DAT_800d0fc4;
  }
  DAT_800cb9f4 = 10;
  DAT_800d0fa4 = DAT_800d0fa4 + 1;
  DAT_800d0fdc = DAT_800d0fe0 + DAT_800d0fe4 * 0x10 + DAT_800d0fc4 * 0x3f0;
  if (DAT_800d0fa8 != 0) {
    *(undefined4 *)PTR_CDROM_DELAY_800cb9bc = 0x20943;
    *(undefined4 *)PTR_COMMON_DELAY_800cb9c0 = 0x1323;
    C_011_OBJ_778();
    return;
  }
  *(undefined4 *)PTR_CDROM_DELAY_800cb9bc = 0x21020843;
  if ((ushort)DAT_800d1048[3] - 1 != (uint)(ushort)DAT_800d1048[2]) {
    if (DAT_800d0fd0 == 0) {
      C_011_OBJ_948(3,DAT_800d0fdc,0,0x1f8);
      *(undefined4 *)PTR_COMMON_DELAY_800cb9c0 = 0x1325;
      *DAT_800d1048 = 3;
      DAT_800d0fc4 = DAT_800d0fc4 + 1;
      if ((DAT_800d0fd0 != 0) && (DAT_800d0fbc != 0)) {
        data_ready_callback();
      }
      return;
    }
    C_011_OBJ_91C(DAT_800d0fdc,DAT_800d0fd0 + DAT_800d0fc0 * 0x800 + 0x20,0x1f8,0);
    DAT_800d0fc0 = DAT_800d0fc0 + 1;
    C_011_OBJ_8B0();
    return;
  }
  DAT_800d0fbc = 1;
  if (DAT_800d0fd0 == 0) {
    C_011_OBJ_948(3,DAT_800d0fdc,0,0x1f8);
    DAT_800d0fa4 = 0;
    DAT_800d0fa0 = 0;
    DAT_800d0fb8 = DAT_800d0fb0;
    C_011_OBJ_8B0();
    return;
  }
  C_011_OBJ_91C(DAT_800d0fdc,DAT_800d0fd0 + DAT_800d0fc0 * 0x800 + 0x20,0x1f8,1);
  DAT_800d0fc0 = DAT_800d0fc0 + 1;
  C_011_OBJ_814();
  return;
}


