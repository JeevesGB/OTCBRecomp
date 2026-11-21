/* Function: INTR_OBJ_584 */
/* Address: 8009b750 */

undefined2 * INTR_OBJ_584(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)0x0;
  if (DAT_800c4664 != 0) {
    InitGPU_Pre();
    puVar2 = PTR_I_MASK_800c56f4;
    puVar1 = PTR_I_STAT_800c56f0;
    DAT_800c4696 = *(undefined2 *)PTR_I_MASK_800c56f4;
    DAT_800c4698 = *(undefined4 *)PTR_DMA_DPCR_800c56f8;
    *(undefined2 *)PTR_I_MASK_800c56f4 = 0;
    *(undefined2 *)puVar1 = *(undefined2 *)puVar2;
    *(uint *)PTR_DMA_DPCR_800c56f8 = *(uint *)PTR_DMA_DPCR_800c56f8 & 0x77777777;
    ResetEntryInt();
    DAT_800c4664 = 0;
    puVar3 = &DAT_800c4664;
  }
  return puVar3;
}


