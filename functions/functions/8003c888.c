/* Function: FUN_8003c888 */
/* Address: 8003c888 */

void FUN_8003c888(int param_1)

{
  *(undefined2 *)(param_1 + 0x178) = 0;
  *(undefined2 *)(param_1 + 0x1ee) = 0xffff;
  *(undefined2 *)(param_1 + 0x1fc) = 0;
  *(short *)(param_1 + 0x46) = *(short *)(param_1 + 0x46) + 1;
  return;
}


