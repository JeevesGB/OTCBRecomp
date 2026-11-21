/* Function: FUN_8006a020 */
/* Address: 8006a020 */

void FUN_8006a020(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  
  if (param_3 == 0) {
    uVar1 = *(ushort *)(param_2 + 8);
  }
  else {
    if ((param_3 < 1) || (param_3 != 1)) goto LAB_8006a058;
    uVar1 = *(ushort *)(param_2 + 6);
  }
  *param_1 = *param_1 + (uint)uVar1;
LAB_8006a058:
  if (9999 < *param_1) {
    *param_1 = 9999;
  }
  return;
}


