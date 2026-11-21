/* Function: SPU_OBJ_78C */
/* Address: 80098288 */

undefined4 SPU_OBJ_78C(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint *unaff_s0;
  
  DAT_800c3da4 = unaff_s0[-1];
  DAT_800c3da8 = (*unaff_s0 >> 6) + (uint)((*unaff_s0 & 0x3f) != 0);
  *(uint *)PTR_DMA_SPU_MADR_800c3d54 = DAT_800c3da4;
  *(uint *)PTR_DMA_SPU_BCR_800c3d58 = DAT_800c3da8 << 0x10 | 0x10;
  param_3 = param_3 | 0x201;
  if (DAT_800c3da0 == 1) {
    param_3 = 0x1000200;
  }
  *(uint *)PTR_DMA_SPU_CHCR_800c3d5c = param_3;
  return 0;
}


