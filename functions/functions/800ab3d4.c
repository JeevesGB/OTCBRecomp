/* Function: PADCMD_OBJ_BA8 */
/* Address: 800ab3d4 */

void PADCMD_OBJ_BA8(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x37) = 0x46;
  *(int *)(param_1 + 0x2c) = param_1 + 0x24;
  *(undefined1 *)(param_1 + 0x24) = param_2;
  *(undefined1 *)(param_1 + 0x36) = 1;
  return;
}


