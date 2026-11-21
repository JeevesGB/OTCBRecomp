/* Function: _spu_t */
/* Address: 800980a0 */

undefined4 _spu_t(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort uVar4;
  
  if (param_1 == 1) {
    DAT_800c3da0 = 0;
    if (*(short *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1a6) != DAT_800c3d68) {
      uVar3 = 1;
      do {
        if (0xf00 < uVar3) {
          DAT_800c3da0 = 0;
          return 0xfffffffe;
        }
        uVar3 = uVar3 + 1;
      } while (*(short *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1a6) != DAT_800c3d68);
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa) & 0xffcf | 0x20;
    uVar2 = SPU_OBJ_814();
    return uVar2;
  }
  if (param_1 < 2) {
    if (param_1 != 0) {
      uVar2 = SPU_OBJ_814();
      return uVar2;
    }
    DAT_800c3da0 = 1;
    if (*(short *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1a6) != DAT_800c3d68) {
      uVar3 = 1;
      do {
        if (0xf00 < uVar3) {
          DAT_800c3da0 = 1;
          return 0xfffffffe;
        }
        uVar3 = uVar3 + 1;
      } while (*(short *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1a6) != DAT_800c3d68);
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa) | 0x30;
    uVar2 = SPU_OBJ_814();
    return uVar2;
  }
  if (param_1 == 2) {
    DAT_800c3d68 = (short)(param_2 >> (DAT_800c3d78 & 0x1f));
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1a6) = DAT_800c3d68;
    uVar2 = SPU_OBJ_814();
    return uVar2;
  }
  if (param_1 == 3) {
    uVar4 = 0x20;
    if (DAT_800c3da0 == 1) {
      uVar4 = 0x30;
    }
    uVar3 = 1;
    uVar1 = *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa);
    while ((uVar1 & 0x30) != uVar4) {
      if (0xf00 < uVar3) {
        return 0xfffffffe;
      }
      uVar3 = uVar3 + 1;
      uVar1 = *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa);
    }
    if (DAT_800c3da0 != 1) {
      SPU_OBJ_A88();
      DAT_800c3da8 = (param_3 >> 6) + (uint)((param_3 & 0x3f) != 0);
      DAT_800c3da4 = param_2;
      *(uint *)PTR_DMA_SPU_MADR_800c3d54 = param_2;
      *(uint *)PTR_DMA_SPU_BCR_800c3d58 = DAT_800c3da8 << 0x10 | 0x10;
      uVar2 = 0x1000201;
      if (DAT_800c3da0 == 1) {
        uVar2 = 0x1000200;
      }
      *(undefined4 *)PTR_DMA_SPU_CHCR_800c3d5c = uVar2;
      return 0;
    }
    SPU_OBJ_AB0();
    uVar2 = SPU_OBJ_78C();
    return uVar2;
  }
  uVar2 = SPU_OBJ_814();
  return uVar2;
}


