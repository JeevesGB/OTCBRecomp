/* Function: VM_NOWON_OBJ_224 */
/* Address: 80095d80 */

void VM_NOWON_OBJ_224(int param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 in_t1;
  uint in_t2;
  
  uVar3 = (uint)DAT_800cefb5;
  if (uVar3 < 0x40) {
    VM_NOWON_OBJ_294(param_1,(param_2 * uVar3) / 0x3f);
    return;
  }
  uVar4 = (param_1 * (0x7f - uVar3)) / 0x3f;
  uVar3 = param_2;
  if ((DAT_800cef90 == 1) && (uVar3 = uVar4, uVar4 < param_2)) {
    VM_NOWON_OBJ_2BC(param_2);
    return;
  }
  if (DAT_800cefc4 != 0x21) {
    uVar4 = (uVar4 * uVar4) / 0x3fff;
    uVar3 = (uVar3 * uVar3) / 0x3fff;
  }
  uVar2 = in_t2 & 0xffff;
  (&DAT_800cece4)[uVar2] = in_t1;
  (&DAT_800cece0)[uVar2] = (short)uVar4;
  (&DAT_800cece2)[uVar2] = (short)uVar3;
  (&DAT_800cecc0)[DAT_800cefc8] = (&DAT_800cecc0)[DAT_800cefc8] | 7;
  (&DAT_800ce784)[DAT_800cefc8 * 0x1c] = in_t1;
  uVar3 = (uint)DAT_800cefc8;
  if (0xf < (int)uVar3) {
    uVar1 = (ushort)(1 << (uVar3 - 0x10 & 0x1f));
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
  VM_NOWON_OBJ_3C4(uVar4,0,1 << (uVar3 & 0x1f));
  return;
}


