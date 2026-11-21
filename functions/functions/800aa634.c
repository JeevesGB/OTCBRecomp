/* Function: PADMAIN_OBJ_BD8 */
/* Address: 800aa634 */

void PADMAIN_OBJ_BD8(uint param_1,uint param_2,short *param_3,uint *param_4)

{
  undefined *puVar1;
  int iVar2;
  uint in_v1;
  ushort *in_t0;
  ushort *in_t1;
  int in_t2;
  int unaff_s0;
  int unaff_s2;
  undefined1 unaff_s3;
  
  while( true ) {
    if ((*in_t0 & 0x200) == 0) {
      if (param_2 <= in_v1 - param_1 >> 3) {
        return;
      }
    }
    else if (param_2 <= in_v1 - param_1) {
      PADMAIN_OBJ_CF0();
      return;
    }
    if ((*param_4 & 0x80) != 0) break;
    in_v1 = (uint)*in_t1;
    if (in_v1 < param_1) {
      if (*param_3 != 0) {
        PADMAIN_OBJ_BD8();
        return;
      }
      in_v1 = in_v1 + in_t2;
    }
  }
  if ((*(char *)(unaff_s0 + 0xe8) != '\b') && (DAT_800cba48 == 2)) {
    setRC2wait(0x3c);
    do {
      iVar2 = chkRC2wait();
    } while (iVar2 == 0);
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


