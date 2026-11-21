/* Function: GetResultSavePtr2 */
/* Address: 80029588 */

undefined4 GetResultSavePtr2(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((&DAT_800ac7f4)[param_1 * 0x18] & 0x80) != 0) {
    uVar1 = *(undefined4 *)(&DAT_800ac7f8 + param_1 * 0x18);
  }
  return uVar1;
}


