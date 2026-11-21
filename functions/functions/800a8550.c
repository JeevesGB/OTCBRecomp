/* Function: CdReadMode */
/* Address: 800a8550 */

undefined4 CdReadMode(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_800cb540;
  DAT_800cb540 = param_1;
  return uVar1;
}


