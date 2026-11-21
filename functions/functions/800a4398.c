/* Function: PAD_init */
/* Address: 800a4398 */

void PAD_init(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  _remove_ChgclrPAD();
  InitGPU_Pre();
  _patch_pad();
  InitGPU_Post();
  ChangeClearPAD(0);
  PAD_OBJ_1A4();
  PAD_init2(param_1,param_2,param_3,param_4);
  DAT_800ca58c = 1;
  return;
}


