/* Function: FUN_8004819c */
/* Address: 8004819c */

void FUN_8004819c(int param_1)

{
  int iVar1;
  
  iVar1 = (*(int *)(param_1 + 0x3cc) * 2 + *(int *)(param_1 + 0x3c8)) / 3;
  if (iVar1 < -0x181000) {
    iVar1 = -0x181000;
  }
  else if (0x181000 < iVar1) {
    iVar1 = 0x181000;
  }
  *(int *)(param_1 + 0x3cc) = iVar1;
  return;
}


