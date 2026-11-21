/* Function: PADCMD_OBJ_B88 */
/* Address: 800ab3b4 */

void PADCMD_OBJ_B88(int param_1,undefined1 param_2)

{
                    /* Possible PsyQ macro: setLineF4() */
  *(undefined1 *)(param_1 + 0x37) = 0x4c;
  *(int *)(param_1 + 0x2c) = param_1 + 0x24;
  *(undefined1 *)(param_1 + 0x24) = param_2;
  *(undefined1 *)(param_1 + 0x36) = 1;
  return;
}


