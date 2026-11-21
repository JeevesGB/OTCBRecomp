/* Function: InitCARD */
/* Address: 800a42ac */

/* Possible INIT.OBJ/InitCARD */

void InitCARD(undefined4 param_1)

{
  int iVar1;
  
  ChangeClearPAD(0);
  InitGPU_Pre();
  iVar1 = ReadInitPadFlag();
  if (iVar1 == 0) {
    param_1 = 0;
  }
  InitCARD2(param_1);
  _copy_memcard_patch();
  _patch_card();
  _patch_card2();
  InitGPU_Post();
  return;
}


