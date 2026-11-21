/* Function: PADCMD_OBJ_BE8 */
/* Address: 800ab414 */

void PADCMD_OBJ_BE8(int param_1)

{
  *(undefined1 *)(param_1 + 0x37) = 0x4b;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  return;
}


