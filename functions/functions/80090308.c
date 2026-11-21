/* Function: CC_99_OBJ_FC */
/* Address: 80090308 */

void CC_99_OBJ_FC(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  short in_t1;
  int unaff_s0;
  
  *(undefined1 *)(unaff_s0 + 0x1b) = param_4;
  *(char *)(unaff_s0 + 0x1f) = *(char *)(unaff_s0 + 0x1f) + '\x01';
  uVar1 = _SsReadDeltaValue(param_1 >> 0x10,(int)in_t1);
  *(undefined4 *)(unaff_s0 + 0x90) = uVar1;
  return;
}


