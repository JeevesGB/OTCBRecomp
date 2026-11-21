/* Function: FREE3_OBJ_100 */
/* Address: 800a1a4c */

void FREE3_OBJ_100(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_2 + param_2[1] * 2 == param_3) {
    param_2[1] = param_2[1] + param_3[1];
    *param_2 = *param_3;
    FREE3_OBJ_138();
    return;
  }
  *param_2 = param_3;
  DAT_800ca52c = param_2;
  return;
}


