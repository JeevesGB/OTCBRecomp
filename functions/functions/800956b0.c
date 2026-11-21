/* Function: VM_NO1_OBJ_1C4 */
/* Address: 800956b0 */

void VM_NO1_OBJ_1C4(void)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint unaff_s1;
  uint uVar7;
  int unaff_s2;
  uint uVar8;
  uint unaff_s3;
  
  if ((uint)(int)DAT_800cefbb < 0x40) {
    VM_NO1_OBJ_234();
    return;
  }
  if ((uint)(int)DAT_800cefb5 < 0x40) {
    VM_NO1_OBJ_2A4();
    return;
  }
  uVar8 = (((uint)(unaff_s2 * (0x7f - DAT_800cefbb)) / 0x3f) * (0x7f - DAT_800cefb5)) / 0x3f;
  uVar7 = unaff_s1;
  if ((DAT_800cef90 == 1) && (uVar7 = uVar8, uVar8 < unaff_s1)) {
    VM_NO1_OBJ_2CC();
    return;
  }
  if (DAT_800cefc4 != 0x21) {
    uVar8 = (uVar8 * uVar8) / 0x3fff;
    uVar7 = (uVar7 * uVar7) / 0x3fff;
  }
  SpuSetNoiseClock((int)DAT_800cefb2 - (int)DAT_800cefc0 & 0x3f);
  uVar6 = unaff_s3 & 0xff;
  (&DAT_800cece2)[uVar6 * 8] = (short)uVar7;
  bVar1 = (&DAT_800cecc0)[uVar6];
  (&DAT_800cece0)[uVar6 * 8] = (short)uVar8;
  (&DAT_800cecc0)[uVar6] = bVar1 | 3;
  cVar3 = DAT_800cefa4;
  if (0xf < uVar6) {
    (&DAT_800ce784)[(unaff_s3 & 0xff) * 0x1c] = 10;
    iVar5 = 0;
    if ('\0' < cVar3) {
      iVar4 = 0;
      do {
        if ((DAT_800c3b60 & 1 << (iVar4 >> 0x10 & 0x1fU)) == 0) {
          iVar4 = (iVar4 >> 0x10) * 0x38;
          (&DAT_800ce79d)[iVar4] = (&DAT_800ce79d)[iVar4] & 1;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar5 * 0x10000;
      } while (iVar5 * 0x10000 >> 0x10 < (int)DAT_800cefa4);
    }
    (&DAT_800ce79d)[(unaff_s3 & 0xff) * 0x38] = 2;
    uVar2 = (ushort)(1 << (uVar6 - 0x10 & 0x1f));
    DAT_800ce772 = DAT_800ce772 | uVar2;
    DAT_800ceea8 = DAT_800ceea8 & ~DAT_800ce770;
    DAT_800ceeaa = DAT_800ceeaa & ~DAT_800ce772;
    if ((DAT_800cefc2 & 4) == 0) {
      DAT_800ce776 = DAT_800ce776 & ~uVar2;
      DAT_800ce778 = 0;
      DAT_800ce77a = uVar2;
      return;
    }
    DAT_800ce776 = DAT_800ce776 | uVar2;
    VM_NO1_OBJ_53C();
    return;
  }
  VM_NO1_OBJ_3B0();
  return;
}


