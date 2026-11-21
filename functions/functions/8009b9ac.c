/* Function: startIntrDMA */
/* Address: 8009b9ac */

code * startIntrDMA(void)

{
  INTR_DMA_OBJ_278(&DAT_800c5740,8);
  *(undefined4 *)PTR_DMA_DICR_800c573c = 0;
  InterruptCallback(3,INTR_DMA_OBJ_4C);
  return INTR_DMA_OBJ_1CC;
}


