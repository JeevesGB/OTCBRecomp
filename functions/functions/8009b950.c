/* Function: INTR_VB_OBJ_C4 */
/* Address: 8009b950 */

void INTR_VB_OBJ_C4(int param_1,int param_2)

{
  if (param_2 != (&DAT_800c570c)[param_1]) {
    (&DAT_800c570c)[param_1] = param_2;
  }
  return;
}


