/* Function: SYS_OBJ_1834 */
/* Address: 8009dd60 */

int SYS_OBJ_1834(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  *(uint *)PTR_DMA_DPCR_800ca290 = *(uint *)PTR_DMA_DPCR_800ca290 | 0x8000000;
  *(undefined4 *)PTR_DMA_OTC_CHCR_800ca28c = 0;
  *(int *)PTR_DMA_OTC_MADR_800ca284 = param_1 + param_2 * 4 + -4;
  *(int *)PTR_DMA_OTC_BCR_800ca288 = param_2;
  *(undefined4 *)PTR_DMA_OTC_CHCR_800ca28c = 0x11000002;
  SYS_OBJ_28B0();
  uVar1 = *(uint *)PTR_DMA_OTC_CHCR_800ca28c;
  while( true ) {
    if ((uVar1 & 0x1000000) == 0) {
      return param_2;
    }
    iVar2 = SYS_OBJ_28E4();
    if (iVar2 != 0) break;
    uVar1 = *(uint *)PTR_DMA_OTC_CHCR_800ca28c;
  }
  return -1;
}


