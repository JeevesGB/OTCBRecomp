/* Function: FREE3_OBJ_44 */
/* Address: 800a1990 */

void FREE3_OBJ_44(undefined4 param_1,uint *param_2,uint *param_3)

{
  uint in_v0;
  uint uVar1;
  uint *puVar2;
  
  while ((in_v0 == 0 || ((uint *)*param_2 <= param_3))) {
    puVar2 = (uint *)*param_2;
    if ((puVar2 <= param_2) && ((param_2 < param_3 || (param_3 < puVar2)))) break;
    in_v0 = (uint)(puVar2 < param_3);
    param_2 = puVar2;
  }
  DAT_800d0b38 = param_3[1];
  DAT_800d0b34 = *param_3;
  DAT_800d0b48 = param_2[1];
  DAT_800d0b44 = *param_2;
  DAT_800d0b3c = DAT_800ca52c;
  DAT_800d0b30 = param_3;
  DAT_800d0b40 = param_2;
  if ((param_3 + param_3[1] * 2 == (uint *)*param_2) &&
     (uVar1 = (param_3 + param_3[1] * 2)[1], uVar1 != 0)) {
    param_3[1] = param_3[1] + uVar1;
    *param_3 = *(uint *)*param_2;
    FREE3_OBJ_100();
    return;
  }
  *param_3 = *param_2;
  if (param_2 + param_2[1] * 2 == param_3) {
    param_2[1] = param_2[1] + param_3[1];
    *param_2 = *param_3;
    FREE3_OBJ_138();
    return;
  }
  *param_2 = (uint)param_3;
  DAT_800ca52c = param_2;
  return;
}


