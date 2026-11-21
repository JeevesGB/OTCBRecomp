/* Function: GetGearTablePtr */
/* Address: 800676c0 */

undefined * GetGearTablePtr(int param_1)

{
  if ((&DAT_800b90f0)[param_1 * 4] == '\0') {
    return &DAT_800b76b8;
  }
  return &DAT_800b7634;
}


