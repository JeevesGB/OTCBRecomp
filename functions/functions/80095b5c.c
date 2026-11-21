/* Function: _SsVmKeyOnNow */
/* Address: 80095b5c */

void _SsVmKeyOnNow(undefined4 param_1,undefined2 param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (uint)(((int)((int)DAT_800cefb4 * (uint)*(byte *)(DAT_800cef9c + 0x18) * 0x3fff) / 0x3f01)
                 * (int)DAT_800cefba * (int)DAT_800cefbd) / 0x3f01;
  iVar2 = (&DAT_800cdee8)[DAT_800cefc4 & 0xff] +
          ((int)((int)(short)DAT_800cefc4 & 0xff00U) >> 8) * 0xb0;
  uVar5 = uVar4;
  if ((int)(short)DAT_800cefc4 != 0x21) {
    uVar5 = (uVar4 * *(ushort *)(iVar2 + 0x58)) / 0x7f;
    uVar4 = (uVar4 * *(ushort *)(iVar2 + 0x5a)) / 0x7f;
  }
  uVar3 = (uint)DAT_800cefbe;
  if (uVar3 < 0x40) {
    VM_NOWON_OBJ_1B4(uVar5,(uVar4 * uVar3) / 0x3f);
    return;
  }
  uVar3 = (uVar5 * (0x7f - uVar3)) / 0x3f;
  uVar5 = (uint)DAT_800cefbb;
  if (uVar5 < 0x40) {
    VM_NOWON_OBJ_224(uVar3,(uVar4 * uVar5) / 0x3f);
    return;
  }
  uVar3 = (uVar3 * (0x7f - uVar5)) / 0x3f;
  uVar5 = (uint)DAT_800cefb5;
  if (0x3f < uVar5) {
    uVar3 = (uVar3 * (0x7f - uVar5)) / 0x3f;
    uVar5 = uVar4;
    if ((DAT_800cef90 == 1) && (uVar5 = uVar3, uVar3 < uVar4)) {
      VM_NOWON_OBJ_2BC(uVar4);
      return;
    }
    if (DAT_800cefc4 != 0x21) {
      uVar3 = (uVar3 * uVar3) / 0x3fff;
      uVar5 = (uVar5 * uVar5) / 0x3fff;
    }
    uVar4 = (int)DAT_800cefc8 & 0x1fff;
    (&DAT_800cece4)[uVar4 * 8] = param_2;
    (&DAT_800cece0)[uVar4 * 8] = (short)uVar3;
    (&DAT_800cece2)[uVar4 * 8] = (short)uVar5;
    (&DAT_800cecc0)[DAT_800cefc8] = (&DAT_800cecc0)[DAT_800cefc8] | 7;
    (&DAT_800ce784)[DAT_800cefc8 * 0x1c] = param_2;
    uVar5 = (uint)DAT_800cefc8;
    if (0xf < (int)uVar5) {
      uVar1 = (ushort)(1 << (uVar5 - 0x10 & 0x1f));
      if ((DAT_800cefc2 & 4) == 0) {
        DAT_800ce776 = DAT_800ce776 & ~uVar1;
        DAT_800ce772 = DAT_800ce772 | uVar1;
        DAT_800ce77a = DAT_800ce77a & ~uVar1;
        DAT_800ceea8 = DAT_800ceea8 & ~DAT_800ce770;
        DAT_800ceeaa = DAT_800ceeaa & ~DAT_800ce772;
        return;
      }
      DAT_800ce776 = DAT_800ce776 | uVar1;
      VM_NOWON_OBJ_440();
      return;
    }
    VM_NOWON_OBJ_3C4(uVar3,0,1 << (uVar5 & 0x1f));
    return;
  }
  VM_NOWON_OBJ_294(uVar3,(uVar4 * uVar5) / 0x3f);
  return;
}


