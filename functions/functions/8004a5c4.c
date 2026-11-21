/* Function: UpdateCarEngine */
/* Address: 8004a5c4 */

void UpdateCarEngine(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x228) = 0;
    *(undefined4 *)(iVar1 + 0x250) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 4);
  FUN_8004d284(param_1);
  FUN_8004a974(param_1);
  FUN_80050e5c(param_1);
  return;
}


