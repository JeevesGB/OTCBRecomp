/* Function: CD_init */
/* Address: 800a7584 */

undefined4 CD_init(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  puts("CD_init:");
  printf("addr=%08x\n",&PTR_DAT_800cb8b4);
  DAT_800cb5f1 = 0;
  DAT_800cb5f0 = 0;
  DAT_800cb5d8 = 0;
  DAT_800cb5d4 = 0;
  DAT_800cb5e4 = 0;
  DAT_800cb5e0 = 0;
  ResetCallback();
  InterruptCallback(2,BIOS_OBJ_1688);
  *PTR_CDROM_REG0_800cb898 = 1;
  bVar1 = *PTR_CDROM_REG3_800cb8a4;
  while ((bVar1 & 7) != 0) {
    *PTR_CDROM_REG0_800cb898 = 1;
    *PTR_CDROM_REG3_800cb8a4 = 7;
    *PTR_CDROM_REG2_800cb8a0 = 7;
    bVar1 = *PTR_CDROM_REG3_800cb8a4;
  }
  DAT_800cb8b2 = 0;
  DAT_800cb8b1 = 0;
  DAT_800cb8b0 = 2;
  *PTR_CDROM_REG0_800cb898 = 0;
  *PTR_CDROM_REG3_800cb8a4 = 0;
  *(undefined4 *)PTR_COMMON_DELAY_800cb8a8 = 0x1325;
  CD_cw(1,0,0,0);
  if ((DAT_800cb5e0 & 0x10) != 0) {
    CD_cw(1,0,0,0);
  }
  iVar2 = CD_cw(10,0,0,0);
  if (((iVar2 == 0) && (iVar2 = CD_cw(0xc,0,0,0), iVar2 == 0)) && (iVar2 = CD_sync(0,0), iVar2 == 2)
     ) {
    uVar3 = BIOS_OBJ_1318();
    return uVar3;
  }
  return 0xffffffff;
}


