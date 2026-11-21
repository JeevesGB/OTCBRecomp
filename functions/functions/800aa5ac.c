/* Function: PADMAIN_OBJ_B50 */
/* Address: 800aa5ac */

void PADMAIN_OBJ_B50(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int unaff_s0;
  int unaff_s2;
  undefined1 unaff_s3;
  
  uVar2 = *(uint *)PTR_I_STAT_800cba64;
  do {
    if ((uVar2 & 0x80) != 0) {
      if ((*(char *)(unaff_s0 + 0xe8) != '\b') && (DAT_800cba48 == 2)) {
        setRC2wait(0x3c);
        do {
          iVar3 = chkRC2wait();
        } while (iVar3 == 0);
      }
      *PTR_JOY_MCD_DATA_800cba68 = unaff_s3;
      puVar1 = PTR_JOY_MCD_DATA_800cba68;
      if ((DAT_800cba48 == 3) && (unaff_s2 == 0x80)) {
        *(undefined4 *)PTR_I_STAT_800cba64 = 0xffffff7f;
        *(ushort *)(puVar1 + 10) = *(ushort *)(puVar1 + 10) | 0x10;
      }
      *(char *)(unaff_s0 + 0x45) = *(char *)(unaff_s0 + 0x45) + '\x01';
      if (*(char *)(unaff_s0 + 0x44) != -1) {
        *(char *)(*(int *)(unaff_s0 + 0x3c) + (uint)*(byte *)(unaff_s0 + 0x44)) = (char)unaff_s2;
      }
      *(char *)(unaff_s0 + 0x44) = *(char *)(unaff_s0 + 0x44) + '\x01';
      return;
    }
    uVar2 = (uint)(ushort)TMR_SYSCLOCK_VAL;
    if (uVar2 < DAT_800d12f8) {
      if ((short)TMR_SYSCLOCK_MAX != 0) {
        PADMAIN_OBJ_BD8();
        return;
      }
      uVar2 = uVar2 + 0x10000;
    }
    if (((ushort)TMR_SYSCLOCK_MODE & 0x200) == 0) {
      if (DAT_800d12fc <= uVar2 - DAT_800d12f8 >> 3) {
        return;
      }
    }
    else if (DAT_800d12fc <= uVar2 - DAT_800d12f8) {
      PADMAIN_OBJ_CF0();
      return;
    }
    uVar2 = *(uint *)PTR_I_STAT_800cba64;
  } while( true );
}


