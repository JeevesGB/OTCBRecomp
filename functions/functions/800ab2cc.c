/* Function: PADCMD_OBJ_AA0 */
/* Address: 800ab2cc */

void PADCMD_OBJ_AA0(int param_1)

{
  if (*(char *)(param_1 + 0x46) == '\x02') {
    *(undefined1 *)(param_1 + 0x37) = 0x44;
    *(int *)(param_1 + 0x2c) = param_1 + 0x51;
    *(undefined1 *)(param_1 + 0x36) = 2;
    PADCMD_OBJ_AEC();
    return;
  }
  if (*(char *)(param_1 + 0x46) != '\x03') {
    PADCMD_OBJ_AEC();
    return;
  }
  *(undefined1 *)(param_1 + 0x37) = 0x4d;
  *(int *)(param_1 + 0x2c) = param_1 + 0x5d;
  *(undefined1 *)(param_1 + 0x36) = 6;
  return;
}


