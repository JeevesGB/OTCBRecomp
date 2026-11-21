/* Function: PADSEQD_OBJ_488 */
/* Address: 800ac544 */

undefined4 PADSEQD_OBJ_488(int param_1)

{
  undefined4 uVar1;
  
  if ((*(short *)(param_1 + 0xe6) == 0) || (uVar1 = 0, *(char *)(param_1 + 0x46) != -1)) {
    uVar1 = 1;
  }
  return uVar1;
}


