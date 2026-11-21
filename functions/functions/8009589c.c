/* Function: VM_NO1_OBJ_3B0 */
/* Address: 8009589c */

void VM_NO1_OBJ_3B0(undefined4 param_1,undefined4 param_2,ushort param_3,ushort param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint unaff_s3;
  
  cVar1 = DAT_800cefa4;
  (&DAT_800ce784)[(unaff_s3 & 0xff) * 0x1c] = 10;
  iVar3 = 0;
  if ('\0' < cVar1) {
    iVar2 = 0;
    do {
      if ((DAT_800c3b60 & 1 << (iVar2 >> 0x10 & 0x1fU)) == 0) {
        iVar2 = (iVar2 >> 0x10) * 0x38;
        (&DAT_800ce79d)[iVar2] = (&DAT_800ce79d)[iVar2] & 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar3 * 0x10000;
    } while (iVar3 * 0x10000 >> 0x10 < (int)DAT_800cefa4);
  }
  (&DAT_800ce79d)[(unaff_s3 & 0xff) * 0x38] = 2;
  DAT_800ce770 = DAT_800ce770 | param_4;
  DAT_800ce772 = DAT_800ce772 | param_3;
  DAT_800ceea8 = DAT_800ceea8 & ~DAT_800ce770;
  DAT_800ceeaa = DAT_800ceeaa & ~DAT_800ce772;
  if ((DAT_800cefc2 & 4) != 0) {
    DAT_800ce774 = DAT_800ce774 | param_4;
    DAT_800ce776 = DAT_800ce776 | param_3;
    VM_NO1_OBJ_53C();
    return;
  }
  DAT_800ce774 = DAT_800ce774 & ~param_4;
  DAT_800ce776 = DAT_800ce776 & ~param_3;
  DAT_800ce778 = param_4;
  DAT_800ce77a = param_3;
  return;
}


