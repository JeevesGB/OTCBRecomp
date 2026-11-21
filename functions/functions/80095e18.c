/* Function: VM_NOWON_OBJ_2BC */
/* Address: 80095e18 */

void VM_NOWON_OBJ_2BC(uint param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined2 in_t1;
  uint in_t2;
  
  if (DAT_800cefc4 != 0x21) {
    param_1 = (param_1 * param_1) / 0x3fff;
    param_2 = (param_2 * param_2) / 0x3fff;
  }
  uVar2 = in_t2 & 0xffff;
  (&DAT_800cece4)[uVar2] = in_t1;
  (&DAT_800cece0)[uVar2] = (short)param_1;
  (&DAT_800cece2)[uVar2] = (short)param_2;
  (&DAT_800cecc0)[DAT_800cefc8] = (&DAT_800cecc0)[DAT_800cefc8] | 7;
  (&DAT_800ce784)[DAT_800cefc8 * 0x1c] = in_t1;
  uVar2 = (uint)DAT_800cefc8;
  if ((int)uVar2 < 0x10) {
    VM_NOWON_OBJ_3C4(param_1,0,1 << (uVar2 & 0x1f));
    return;
  }
  uVar1 = (ushort)(1 << (uVar2 - 0x10 & 0x1f));
  if ((DAT_800cefc2 & 4) != 0) {
    DAT_800ce776 = DAT_800ce776 | uVar1;
    VM_NOWON_OBJ_440();
    return;
  }
  DAT_800ce776 = DAT_800ce776 & ~uVar1;
  DAT_800ce772 = DAT_800ce772 | uVar1;
  DAT_800ce77a = DAT_800ce77a & ~uVar1;
  DAT_800ceea8 = DAT_800ceea8 & ~DAT_800ce770;
  DAT_800ceeaa = DAT_800ceeaa & ~DAT_800ce772;
  return;
}


