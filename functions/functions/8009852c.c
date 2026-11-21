/* Function: _spu_FsetPCR */
/* Address: 8009852c */

void _spu_FsetPCR(int param_1)

{
  *(uint *)PTR_DMA_DPCR_800c3d60 = *(uint *)PTR_DMA_DPCR_800c3d60 & 0xfff8ffff;
  if (param_1 != 0) {
    SPU_OBJ_A7C(0x30000);
    return;
  }
  *(uint *)PTR_DMA_DPCR_800c3d60 = *(uint *)PTR_DMA_DPCR_800c3d60 | 0x50000;
  return;
}


