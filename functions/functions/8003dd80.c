/* Function: UpdateCarRenderData */
/* Address: 8003dd80 */

void UpdateCarRenderData(int param_1)

{
  if (*(short *)(param_1 + 6) == 0) {
    FUN_8003d7fc();
  }
  else {
    FUN_8003d6f4();
  }
  return;
}


