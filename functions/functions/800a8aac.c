/* Function: StCdInterrupt */
/* Address: 800a8aac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void StCdInterrupt(void)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  short *psVar7;
  uint local_18 [2];
  byte local_10 [8];
  
  if (DAT_800d0fbc != 1) {
    if ((DAT_800d0fa8 != 0) && ((*(uint *)PTR_DMA_MDEC_OUT_CHCR_800cb9cc & 0x1000000) != 0)) {
      DAT_800d0fac = 1;
      if (DAT_800d0fd0 != 0) {
        DAT_800d0fc0 = DAT_800d0fc0 + 1;
      }
      DAT_800cb9f4 = 1;
      C_011_OBJ_90C();
      return;
    }
    iVar3 = CdReady(1,local_10);
    if (iVar3 != 5) {
      if ((local_10[0] & 4) != 0) {
        DAT_800cb9f4 = 3;
        C_011_OBJ_90C();
        return;
      }
      DAT_800d1048 = DAT_800d0fe0 + DAT_800d0fc4 * 0x10;
      if (*DAT_800d1048 != 0) {
        if (DAT_800d0fd0 != 0) {
          DAT_800d0fc0 = DAT_800d0fc0 + 1;
        }
        DAT_800cb9f4 = 4;
        C_011_OBJ_90C();
        return;
      }
      *PTR_CDROM_REG0_800cb9ac = 0;
      *PTR_CDROM_REG3_800cb9b8 = 0;
      *PTR_CDROM_REG0_800cb9ac = 0;
      *PTR_CDROM_REG3_800cb9b8 = 0x80;
      *(undefined4 *)PTR_CDROM_DELAY_800cb9bc = 0x20943;
      *(undefined4 *)PTR_COMMON_DELAY_800cb9c0 = 0x1323;
      uVar6 = 0;
      if (DAT_800d1018 == 0) {
        do {
          puVar5 = (undefined1 *)((int)local_18 + uVar6);
          uVar6 = uVar6 + 1;
          *puVar5 = *PTR_CDROM_REG2_800cb9b4;
        } while (uVar6 < 4);
        uVar6 = 0;
        do {
          uVar6 = uVar6 + 1;
        } while (uVar6 < 8);
      }
      if (DAT_800d0fd0 != 0) {
        C_011_OBJ_91C(DAT_800d1048,DAT_800d0fd0 + DAT_800d0fc0 * 0x800,8,0);
        C_011_OBJ_258();
        return;
      }
      C_011_OBJ_948(3,DAT_800d1048,0,8,0x11000000,0,0);
      psVar7 = DAT_800d1048;
      puVar2 = PTR_CDROM_DELAY_800cb9bc;
      uVar6 = *(uint *)PTR_DMA_CDROM_CHCR_800cb9dc;
      while ((uVar6 & 0x1000000) != 0) {
        uVar6 = *(uint *)PTR_DMA_CDROM_CHCR_800cb9dc;
      }
      uVar6 = (int)DAT_800d1048 + 0x1fU & 3;
      puVar1 = (uint *)(((int)DAT_800d1048 + 0x1fU) - uVar6);
      *puVar1 = *puVar1 & -1 << (uVar6 + 1) * 8 | local_18[0] >> (3 - uVar6) * 8;
      uVar6 = (uint)(psVar7 + 0xe) & 3;
      puVar1 = (uint *)((int)(psVar7 + 0xe) - uVar6);
      *puVar1 = *puVar1 & 0xffffffffU >> (4 - uVar6) * 8 | local_18[0] << uVar6 * 8;
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
        if (DAT_800d0fd0 != 0) {
          DAT_800d0fc0 = 0;
          C_011_OBJ_3AC();
          return;
        }
        DAT_800cb9f4 = 5;
        *DAT_800d1048 = 0;
        C_011_OBJ_90C();
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
          uVar6 = 0;
          DAT_800d0fc4 = 0;
          psVar7 = DAT_800d0fe0;
          do {
            uVar4 = *(undefined4 *)DAT_800d1048;
            DAT_800d1048 = DAT_800d1048 + 2;
            uVar6 = uVar6 + 1;
            *(undefined4 *)psVar7 = uVar4;
            psVar7 = psVar7 + 2;
          } while (uVar6 < 8);
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
      if ((ushort)DAT_800d1048[3] - 1 == (uint)(ushort)DAT_800d1048[2]) {
        DAT_800d0fbc = 1;
        if (DAT_800d0fd0 != 0) {
          C_011_OBJ_91C(DAT_800d0fdc,DAT_800d0fd0 + DAT_800d0fc0 * 0x800 + 0x20,0x1f8,1);
          DAT_800d0fc0 = DAT_800d0fc0 + 1;
          C_011_OBJ_814();
          return;
        }
        C_011_OBJ_948(3,DAT_800d0fdc,0,0x1f8,0x11400100,1,0);
        DAT_800d0fa4 = 0;
        DAT_800d0fa0 = 0;
        DAT_800d0fb8 = DAT_800d0fb0;
        C_011_OBJ_8B0();
        return;
      }
      if (DAT_800d0fd0 != 0) {
        C_011_OBJ_91C(DAT_800d0fdc,DAT_800d0fd0 + DAT_800d0fc0 * 0x800 + 0x20,0x1f8,0);
        DAT_800d0fc0 = DAT_800d0fc0 + 1;
        C_011_OBJ_8B0();
        return;
      }
      C_011_OBJ_948(3,DAT_800d0fdc,0,0x1f8,0x11400100,0,0);
      *(undefined4 *)PTR_COMMON_DELAY_800cb9c0 = 0x1325;
      *DAT_800d1048 = 3;
      DAT_800d0fc4 = DAT_800d0fc4 + 1;
      if ((DAT_800d0fd0 != 0) && (DAT_800d0fbc != 0)) {
        data_ready_callback();
      }
    }
  }
  return;
}


