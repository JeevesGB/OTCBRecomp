/* Function: FUN_8004ad24 */
/* Address: 8004ad24 */

int FUN_8004ad24(int param_1,int param_2)

{
  if (param_2 == 0) {
    trap(0x1c00);
  }
  if ((param_2 == -1) && (param_1 * 100 == -0x80000000)) {
    trap(0x1800);
  }
  return (param_1 * 100) / param_2;
}


