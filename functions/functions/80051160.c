/* Function: UpdatePlayerHUD */
/* Address: 80051160 */

void UpdatePlayerHUD(int param_1)

{
  if (*(short *)(param_1 + 0x238) == 0) {
    *(undefined2 *)(param_1 + 0x240) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x240) = 0xffff;
  return;
}


