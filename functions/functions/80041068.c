/* Function: UpdateCarRenderTransform */
/* Address: 80041068 */

void UpdateCarRenderTransform(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  *(int *)(param_1 + 4) = g_CarPositionFlag;
  g_CarPositionFlag = iVar1;
  return;
}


