/* Function: CopyOrderingTable */
/* Address: 80058fc8 */

void CopyOrderingTable(undefined4 *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *param_2;
  iVar2 = 0;
  if (0 < sVar1) {
    do {
      if ((param_2[1] & 1U) == 0) {
        ClearOTag((u_long *)*param_1,(int)param_2[2]);
      }
      else {
        ClearOTagR((u_long *)*param_1,(int)param_2[2]);
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < sVar1);
  }
  return;
}


