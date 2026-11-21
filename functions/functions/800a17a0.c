/* Function: StartRCnt */
/* Address: 800a17a0 */

long StartRCnt(ulong param_1)

{
  *(uint *)(PTR_I_STAT_800ca50c + 4) =
       *(uint *)(PTR_I_STAT_800ca50c + 4) | *(uint *)(&DAT_800ca514 + (param_1 & 0xffff) * 4);
  return (uint)((param_1 & 0xffff) < 3);
}


