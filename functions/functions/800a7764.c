/* Function: CD_datasync */
/* Address: 800a7764 */

undefined4 CD_datasync(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = VSync(-1);
  DAT_800d1000 = iVar2 + 0x3c0;
  DAT_800d1004 = 0;
  DAT_800d1008 = "CD_datasync";
  while (iVar2 = VSync(-1), iVar2 <= DAT_800d1000) {
    iVar2 = DAT_800d1004 + 1;
    bVar1 = 0x3c0000 < DAT_800d1004;
    DAT_800d1004 = iVar2;
    if (bVar1) break;
    uVar3 = 0;
    if (((*(uint *)PTR_DMA_CDROM_CHCR_800cb8dc & 0x1000000) == 0) || (uVar3 = 1, param_1 != 0)) {
      return uVar3;
    }
  }
  puts("CD timeout: ");
  printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_800d1008,(&PTR_s_CdlSync_800cb5f8)[DAT_800cb5f1],
         (&PTR_s_NoIntr_800cb678)[DAT_800cb8b0],(&PTR_s_NoIntr_800cb678)[DAT_800cb8b1]);
  CD_flush();
  uVar3 = BIOS_OBJ_1440();
  return uVar3;
}


