/* Function: SYS_OBJ_28E4 */
/* Address: 8009ee10 */

undefined4 SYS_OBJ_28E4(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = VSync(-1);
  iVar1 = DAT_800ca2ac;
  if ((iVar2 <= DAT_800ca2a8) && (DAT_800ca2ac = DAT_800ca2ac + 1, iVar1 < 0xf0001)) {
    return 0;
  }
  printf("GPU timeout:que=%d,stat=%08x,chcr=%08x,madr=%08x\n",DAT_800ca294 - DAT_800ca298 & 0x3f,
         *(undefined4 *)PTR_GPU_REG1_800ca274,*(undefined4 *)PTR_DMA_GPU_CHCR_800ca280,
         *(undefined4 *)PTR_DMA_GPU_MADR_800ca278);
  DAT_800ca2a4 = SetIntrMask(0);
  DAT_800ca298 = 0;
  DAT_800ca294 = 0;
  *(undefined4 *)PTR_DMA_GPU_CHCR_800ca280 = 0x401;
  *(uint *)PTR_DMA_DPCR_800ca290 = *(uint *)PTR_DMA_DPCR_800ca290 | 0x800;
  *(undefined4 *)PTR_GPU_REG1_800ca274 = 0x2000000;
  *(undefined4 *)PTR_GPU_REG1_800ca274 = 0x1000000;
  SetIntrMask(DAT_800ca2a4);
  uVar3 = SYS_OBJ_2A18();
  return uVar3;
}


