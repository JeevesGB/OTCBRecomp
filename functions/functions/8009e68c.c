/* Function: SYS_OBJ_2160 */
/* Address: 8009e68c */

uint SYS_OBJ_2160(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *unaff_s0;
  int unaff_s1;
  undefined4 unaff_s2;
  code *unaff_s3;
  
  while ((DAT_800ca294 + 1 & 0x3f) == DAT_800ca298) {
    iVar5 = SYS_OBJ_28E4();
    if (iVar5 != 0) {
      return 0xffffffff;
    }
    SYS_OBJ_23C4();
  }
  DAT_800ca29c = SetIntrMask(0);
  DAT_800ca174 = 1;
  if ((DAT_800ca16d != '\0') &&
     (((DAT_800ca294 != DAT_800ca298 || ((*(uint *)PTR_DMA_GPU_CHCR_800ca280 & 0x1000000) != 0)) ||
      (DAT_800ca178 != 0)))) {
    DMACallback(2,SYS_OBJ_23C4);
    iVar5 = 0;
    if (unaff_s1 == 0) {
      *(undefined4 **)(&DAT_800cf304 + DAT_800ca294 * 0x60) = unaff_s0;
      *(undefined4 *)(&DAT_800cf308 + DAT_800ca294 * 0x60) = unaff_s2;
      *(code **)(&DAT_800cf300 + DAT_800ca294 * 0x60) = unaff_s3;
      DAT_800ca294 = DAT_800ca294 + 1 & 0x3f;
      SetIntrMask(DAT_800ca29c);
      SYS_OBJ_23C4();
      return DAT_800ca294 - DAT_800ca298 & 0x3f;
    }
    while( true ) {
      iVar2 = unaff_s1;
      if (unaff_s1 < 0) {
        iVar2 = unaff_s1 + 3;
      }
      iVar3 = iVar5 * 4;
      if (iVar2 >> 2 <= iVar5) break;
      uVar4 = *unaff_s0;
      unaff_s0 = unaff_s0 + 1;
      iVar5 = iVar5 + 1;
      *(undefined4 *)(&DAT_800cf30c + iVar3 + DAT_800ca294 * 0x60) = uVar4;
    }
    *(undefined **)(&DAT_800cf304 + DAT_800ca294 * 0x60) = &DAT_800cf30c + DAT_800ca294 * 0x60;
    uVar1 = SYS_OBJ_2318();
    return uVar1;
  }
  do {
  } while ((*(uint *)PTR_GPU_REG1_800ca274 & 0x4000000) == 0);
  (*unaff_s3)();
  SetIntrMask(DAT_800ca29c);
  uVar1 = SYS_OBJ_23A8();
  return uVar1;
}


