/* Function: LIBPRESS_OBJ_560 */
/* Address: 800a533c */

undefined4 LIBPRESS_OBJ_560(void)

{
  uint uVar1;
  undefined4 uVar2;
  int local_10;
  
  local_10 = 0x100000;
  uVar1 = *(uint *)PTR_DMA_MDEC_OUT_CHCR_800ca6c0;
  while( true ) {
    if ((uVar1 & 0x1000000) == 0) {
      return 0;
    }
    local_10 = local_10 + -1;
    if (local_10 == -1) break;
    uVar1 = *(uint *)PTR_DMA_MDEC_OUT_CHCR_800ca6c0;
  }
  LIBPRESS_OBJ_60C("MDEC_out_sync");
  uVar2 = LIBPRESS_OBJ_5E4();
  return uVar2;
}


