/* Function: FUN_80066d68 */
/* Address: 80066d68 */

void FUN_80066d68(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined1 param_4,
                 undefined2 param_5)

{
  param_1[0x1a] = 0;
  *(undefined1 *)((int)param_1 + 0x3f) = 3;
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 0x1f) = param_4;
  param_1[0x1e] = param_5;
  return;
}


