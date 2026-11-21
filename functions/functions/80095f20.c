/* Function: VM_NOWON_OBJ_3C4 */
/* Address: 80095f20 */

void VM_NOWON_OBJ_3C4(undefined4 param_1,ushort param_2,ushort param_3)

{
  if ((DAT_800cefc2 & 4) != 0) {
    DAT_800ce774 = DAT_800ce774 | param_3;
    DAT_800ce776 = DAT_800ce776 | param_2;
    VM_NOWON_OBJ_440();
    return;
  }
  DAT_800ce774 = DAT_800ce774 & ~param_3;
  DAT_800ce776 = DAT_800ce776 & ~param_2;
  DAT_800ce778 = DAT_800ce778 & ~param_3;
  DAT_800ce772 = DAT_800ce772 | param_2;
  DAT_800ce77a = DAT_800ce77a & ~param_2;
  DAT_800ce770 = DAT_800ce770 | param_3;
  DAT_800ceea8 = DAT_800ceea8 & ~DAT_800ce770;
  DAT_800ceeaa = DAT_800ceeaa & ~DAT_800ce772;
  return;
}


