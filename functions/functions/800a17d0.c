/* Function: StopRCnt */
/* Address: 800a17d0 */

long StopRCnt(ulong param_1)

{
  *(uint *)(PTR_I_STAT_800ca50c + 4) =
       *(uint *)(PTR_I_STAT_800ca50c + 4) & ~*(uint *)(&DAT_800ca514 + (param_1 & 0xffff) * 4);
  return 1;
}


