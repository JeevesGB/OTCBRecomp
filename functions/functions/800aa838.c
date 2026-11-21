/* Function: _padSetCmd */
/* Address: 800aa838 */

void _padSetCmd(int param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 0x37) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined1 *)(param_1 + 0x36) = param_4;
  return;
}


