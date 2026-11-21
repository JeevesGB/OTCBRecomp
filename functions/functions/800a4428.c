/* Function: InitPAD */
/* Address: 800a4428 */

long InitPAD(char *param_1,long param_2,char *param_3,long param_4)

{
  _remove_ChgclrPAD();
  InitGPU_Pre();
  _patch_pad();
  InitGPU_Post();
  ChangeClearPAD(0);
  PAD_OBJ_1A4();
  InitPAD2(param_1,param_2,param_3,param_4);
  DAT_800ca58c = 1;
  return 1;
}


