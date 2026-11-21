/* Function: StartCARD */
/* Address: 800a4318 */

/* Possible INIT.OBJ/StartCARD */

void StartCARD(void)

{
  InitGPU_Pre();
  StartCARD2();
  ChangeClearPAD(0);
  InitGPU_Post();
  return;
}


