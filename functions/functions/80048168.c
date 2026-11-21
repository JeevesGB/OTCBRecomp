/* Function: FUN_80048168 */
/* Address: 80048168 */

void FUN_80048168(int param_1)

{
  *(undefined4 *)(param_1 + 0x3cc) = 0;
  *(undefined4 *)(param_1 + 0x3c8) = 0;
  *(int *)(param_1 + 0x34) = *(short *)(*(int *)(param_1 + 0x10) + 100) * 0x7c + -0x7ff4f6d4;
  return;
}


