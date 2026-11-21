/* Function: PadSetActAlign */
/* Address: 800a9988 */

int PadSetActAlign(int param_1,uchar *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*DAT_800cba18)();
  iVar2 = _padSetActAlign(uVar1,param_2);
  return iVar2;
}


