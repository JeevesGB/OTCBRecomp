/* Function: GetMenuItemColor */
/* Address: 80066328 */

void GetMenuItemColor(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  if (param_4 != 0) {
    *param_1 = 2;
    *param_2 = param_3;
    return;
  }
  *param_1 = 4;
  *param_2 = 0xffffffff;
  return;
}


