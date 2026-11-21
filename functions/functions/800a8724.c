/* Function: DsStartCallback */
/* Address: 800a8724 */

undefined4 DsStartCallback(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_800d1028;
  DAT_800d1028 = param_1;
  return uVar1;
}


