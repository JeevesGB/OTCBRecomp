/* Function: FUN_8006a11c */
/* Address: 8006a11c */

void FUN_8006a11c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = param_1 + iVar2;
      iVar2 = iVar2 + 1;
      *(undefined1 *)(iVar1 + 1) = 0;
    } while (iVar2 != param_2);
  }
  return;
}


