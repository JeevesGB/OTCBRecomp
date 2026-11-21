/* Function: VM_NOWOF_OBJ_34 */
/* Address: 80095ad0 */

void VM_NOWOF_OBJ_34(int param_1,ushort param_2,ushort param_3)

{
  (&DAT_800ce79d)[param_1 * 0x38] = 0;
  (&DAT_800ce784)[param_1 * 0x1c] = 0;
  (&DAT_800ce780)[param_1 * 0x1c] = 0;
  DAT_800ceea8 = DAT_800ceea8 | param_3;
  DAT_800ce770 = DAT_800ce770 & ~DAT_800ceea8;
  DAT_800ceeaa = DAT_800ceeaa | param_2;
  DAT_800ce772 = DAT_800ce772 & ~DAT_800ceeaa;
  return;
}


