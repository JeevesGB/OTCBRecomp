/* Function: ContinueDraw */
/* Address: 8009fc60 */

void ContinueDraw(u_long *insaddr,u_long *contaddr)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  _GPU_ResetCallback();
  if (insaddr == (u_long *)0x0) {
    insaddr = contaddr;
    if (contaddr == (u_long *)0x0) {
      return;
    }
  }
  else if (contaddr != (u_long *)0x0) {
                    /* Probable PsyQ macro: nextPrim(), with pattern: *pPrim & 0xffffff |
                       0x80000000. */
    uVar3 = *(uint *)(*insaddr & 0xffffff | 0x80000000);
    puVar2 = insaddr;
    while (puVar1 = insaddr, (uVar3 & 0xffffff) != 0xffffff) {
                    /* Probable PsyQ macro: nextPrim(), with pattern: *pPrim & 0xffffff |
                       0x80000000. */
      insaddr = (u_long *)(*puVar1 & 0xffffff | 0x80000000);
                    /* Probable PsyQ macro: nextPrim(), with pattern: *pPrim & 0xffffff |
                       0x80000000. */
      uVar3 = *(uint *)(*insaddr & 0xffffff | 0x80000000);
      puVar2 = puVar1;
    }
    *puVar2 = *puVar2 & 0xff000000 | (uint)contaddr & 0xffffff;
    BREAK_OBJ_1BC();
    return;
  }
  *(undefined4 *)PTR_GPU_REG1_800ca43c = 0x4000002;
  *(u_long **)PTR_DMA_GPU_MADR_800ca42c = insaddr;
  *(undefined4 *)PTR_DMA_GPU_BCR_800ca430 = 0;
  *(undefined4 *)PTR_DMA_GPU_CHCR_800ca434 = 0x1000401;
  return;
}


