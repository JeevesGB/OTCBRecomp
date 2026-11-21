/* Function: PadSetAct */
/* Address: 800a9a08 */

void PadSetAct(int param_1,uchar *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_800cba18)();
  _padSetAct(uVar1,param_2,param_3);
  return;
}


