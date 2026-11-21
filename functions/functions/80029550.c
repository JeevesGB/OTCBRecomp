/* Function: GetResultSavePtr1 */
/* Address: 80029550 */

undefined4 GetResultSavePtr1(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((&DAT_800ac6d4)[param_1 * 0x18] & 0x80) != 0) {
    uVar1 = *(undefined4 *)(&DAT_800ac6d8 + param_1 * 0x18);
  }
  return uVar1;
}


