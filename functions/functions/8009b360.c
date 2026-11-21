/* Function: INTR_OBJ_194 */
/* Address: 8009b360 */

undefined2 * INTR_OBJ_194(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar2 = PTR_I_MASK_800c56f4;
  puVar1 = PTR_I_STAT_800c56f0;
  puVar3 = (undefined2 *)0x0;
  if (DAT_800c4664 == 0) {
    *(undefined2 *)PTR_I_MASK_800c56f4 = 0;
    *(undefined2 *)puVar1 = *(undefined2 *)puVar2;
    *(undefined4 *)PTR_DMA_DPCR_800c56f8 = 0x33333333;
    INTR_OBJ_69C(&DAT_800c4664,0x41a);
    iVar4 = setjmp(&DAT_800c469c);
    if (iVar4 != 0) {
      INTR_OBJ_26C();
    }
    DAT_800c46a0 = &DAT_800c567c;
    HookEntryInt(&DAT_800c469c);
    DAT_800c4664 = 1;
    uVar5 = startIntrVSync();
    *(undefined4 *)(PTR_PTR_800c56ec + 0x14) = uVar5;
    uVar5 = startIntrDMA();
    *(undefined4 *)(PTR_PTR_800c56ec + 4) = uVar5;
    FUN_800a15d4();
    puVar3 = &DAT_800c4664;
    InitGPU_Post();
  }
  return puVar3;
}


