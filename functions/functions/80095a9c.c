/* Function: _SsVmKeyOffNow */
/* Address: 80095a9c */

void _SsVmKeyOffNow(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_800cefc8;
  if (uVar1 < 0x10) {
    VM_NOWOF_OBJ_34(uVar1,0,1 << (uVar1 & 0x1f));
    return;
  }
  (&DAT_800ce79d)[uVar1 * 0x38] = 0;
  (&DAT_800ce784)[uVar1 * 0x1c] = 0;
  (&DAT_800ce780)[uVar1 * 0x1c] = 0;
  DAT_800ce770 = DAT_800ce770 & ~DAT_800ceea8;
  DAT_800ceeaa = DAT_800ceeaa | (ushort)(1 << (uVar1 - 0x10 & 0x1f));
  DAT_800ce772 = DAT_800ce772 & ~DAT_800ceeaa;
  return;
}


