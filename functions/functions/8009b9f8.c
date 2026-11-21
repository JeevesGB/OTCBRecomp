/* Function: INTR_DMA_OBJ_4C */
/* Address: 8009b9f8 */

void INTR_DMA_OBJ_4C(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = *(uint *)PTR_DMA_DICR_800c573c >> 0x18 & 0x7f;
  if (uVar3 != 0) {
    do {
      puVar4 = &DAT_800c5740;
      for (iVar1 = 0; (uVar3 != 0 && (iVar1 < 7)); iVar1 = iVar1 + 1) {
        if ((uVar3 & 1) != 0) {
          *(uint *)PTR_DMA_DICR_800c573c =
               *(uint *)PTR_DMA_DICR_800c573c & (1 << (iVar1 + 0x18U & 0x1f) | 0xffffffU);
          if ((code *)*puVar4 != (code *)0x0) {
            (*(code *)*puVar4)();
          }
        }
        puVar4 = puVar4 + 1;
        uVar3 = uVar3 >> 1;
      }
      uVar3 = *(uint *)PTR_DMA_DICR_800c573c >> 0x18 & 0x7f;
    } while (uVar3 != 0);
  }
  if (((*(uint *)PTR_DMA_DICR_800c573c & 0xff000000) == 0x80000000) ||
     ((*(uint *)PTR_DMA_DICR_800c573c & 0x8000) != 0)) {
    printf("DMA bus error: code=%08x\n",*(undefined4 *)PTR_DMA_DICR_800c573c);
    iVar1 = 0;
    do {
      iVar2 = iVar1 + 1;
      printf("MADR[%d]=%08x\n",iVar1,*(undefined4 *)(PTR_DMA_MDEC_IN_MADR_800c5760 + iVar1 * 0x10));
      iVar1 = iVar2;
    } while (iVar2 < 7);
  }
  return;
}


