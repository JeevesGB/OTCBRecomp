/* Function: SetupRaceBuffers */
/* Address: 80066cf4 */

void SetupRaceBuffers(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                     undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined4 param_8,
                     undefined4 param_9,undefined4 param_10)

{
  *param_1 = 0xffff;
  param_1[1] = 0xffff;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[5] = param_5;
  param_1[6] = param_6;
  param_1[7] = param_7;
  *(undefined4 *)(param_1 + 8) = param_8;
  *(undefined4 *)(param_1 + 10) = param_9;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x32) = param_10;
  return;
}


