/* Function: BreakDraw */
/* Address: 8009fb6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

u_long * BreakDraw(void)

{
  u_long *puVar1;
  
  puVar1 = (u_long *)0x0;
  if (((*(uint *)PTR_DMA_GPU_CHCR_800ca434 & 0x1000000) != 0) &&
     (puVar1 = (u_long *)0xffffffff, (*(uint *)PTR_DMA_GPU_CHCR_800ca434 & 0x700) == 0x400)) {
    *(uint *)PTR_DMA_GPU_CHCR_800ca434 = *(uint *)PTR_DMA_GPU_CHCR_800ca434 & 0xfeffffff;
    puVar1 = (u_long *)0x0;
    if (((uint)*(u_long **)PTR_DMA_GPU_MADR_800ca42c & 0xffffff) != 0xffffff) {
      puVar1 = *(u_long **)PTR_DMA_GPU_MADR_800ca42c;
    }
  }
  return puVar1;
}


