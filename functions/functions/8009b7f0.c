/* Function: INTR_OBJ_624 */
/* Address: 8009b7f0 */

undefined4 INTR_OBJ_624(void)

{
  undefined4 uVar1;
  
  if (DAT_800c4664 == 0) {
    HookEntryInt(&DAT_800c469c);
    DAT_800c4664 = 1;
    *(undefined2 *)PTR_I_MASK_800c56f4 = DAT_800c4696;
    *(undefined4 *)PTR_DMA_DPCR_800c56f8 = DAT_800c4698;
    InitGPU_Post();
    uVar1 = INTR_OBJ_68C();
    return uVar1;
  }
  return 0;
}


