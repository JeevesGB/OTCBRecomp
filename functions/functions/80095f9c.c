/* Function: VM_NOWON_OBJ_440 */
/* Address: 80095f9c */

void VM_NOWON_OBJ_440(undefined4 param_1,ushort param_2,ushort param_3)

{
  ushort in_v1;
  
  DAT_800ce778 = DAT_800ce778 & in_v1;
  DAT_800ce772 = DAT_800ce772 | param_2;
  DAT_800ce77a = DAT_800ce77a & ~param_2;
  DAT_800ce770 = DAT_800ce770 | param_3;
  DAT_800ceea8 = DAT_800ceea8 & ~DAT_800ce770;
  DAT_800ceeaa = DAT_800ceeaa & ~DAT_800ce772;
  return;
}


