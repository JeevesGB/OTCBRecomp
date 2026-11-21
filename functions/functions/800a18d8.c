/* Function: MALLOC3_OBJ_3C */
/* Address: 800a18d8 */

undefined4 MALLOC3_OBJ_3C(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 < param_2) {
    if (param_1 != DAT_800ca52c) {
      uVar1 = MALLOC3_OBJ_3C(*param_1,param_2,param_1);
      return uVar1;
    }
    return 0;
  }
  if (iVar2 == param_2) {
    *param_3 = *param_1;
    uVar1 = MALLOC3_OBJ_74();
    return uVar1;
  }
  param_1[1] = iVar2 - param_2;
  param_1[(iVar2 - param_2) * 2 + 1] = param_2;
  DAT_800ca52c = param_3;
  uVar1 = MALLOC3_OBJ_A8();
  return uVar1;
}


