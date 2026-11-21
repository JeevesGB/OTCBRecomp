/* Function: LookupTable */
/* Address: 80067728 */

int LookupTable(uint param_1)

{
  return (int)*(short *)(&g_LookupTable + (param_1 & 0xff) * 2);
}


