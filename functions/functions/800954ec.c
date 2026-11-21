/* Function: vmNoiseOn */
/* Address: 800954ec */

void vmNoiseOn(uint param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = (uint)(((int)((int)DAT_800cefb4 * (uint)*(byte *)(DAT_800cef9c + 0x18) * 0x3fff) / 0x3f01)
                 * (int)DAT_800cefba * (int)DAT_800cefbd) / 0x3f01;
  iVar5 = (&DAT_800cdee8)[DAT_800cefc4 & 0xff] +
          ((int)((int)(short)DAT_800cefc4 & 0xff00U) >> 8) * 0xb0;
  uVar7 = uVar6;
  if ((int)(short)DAT_800cefc4 != 0x21) {
    uVar7 = (uVar6 * *(ushort *)(iVar5 + 0x58)) / 0x7f;
    uVar6 = (uVar6 * *(ushort *)(iVar5 + 0x5a)) / 0x7f;
  }
  if ((uint)(int)DAT_800cefbe < 0x40) {
    VM_NO1_OBJ_1C4();
    return;
  }
  if ((uint)(int)DAT_800cefbb < 0x40) {
    VM_NO1_OBJ_234();
    return;
  }
  if (0x3f < (uint)(int)DAT_800cefb5) {
    uVar8 = (((((uVar7 * (0x7f - DAT_800cefbe)) / 0x3f) * (0x7f - DAT_800cefbb)) / 0x3f) *
            (0x7f - DAT_800cefb5)) / 0x3f;
    uVar7 = uVar6;
    if ((DAT_800cef90 == 1) && (uVar7 = uVar8, uVar8 < uVar6)) {
      VM_NO1_OBJ_2CC();
      return;
    }
    if (DAT_800cefc4 != 0x21) {
      uVar8 = (uVar8 * uVar8) / 0x3fff;
      uVar7 = (uVar7 * uVar7) / 0x3fff;
    }
    SpuSetNoiseClock((int)DAT_800cefb2 - (int)DAT_800cefc0 & 0x3f);
    uVar6 = param_1 & 0xff;
    (&DAT_800cece2)[uVar6 * 8] = (short)uVar7;
    bVar1 = (&DAT_800cecc0)[uVar6];
    (&DAT_800cece0)[uVar6 * 8] = (short)uVar8;
    (&DAT_800cecc0)[uVar6] = bVar1 | 3;
    cVar3 = DAT_800cefa4;
    if (0xf < uVar6) {
      (&DAT_800ce784)[(param_1 & 0xff) * 0x1c] = 10;
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
      (&DAT_800ce79d)[(param_1 & 0xff) * 0x38] = 2;
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
  VM_NO1_OBJ_2A4();
  return;
}


