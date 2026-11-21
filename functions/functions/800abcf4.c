/* Function: PADPORTD_OBJ_298 */
/* Address: 800abcf4 */

void PADPORTD_OBJ_298(undefined4 param_1,int param_2)

{
  int in_v0;
  int iVar1;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  while( true ) {
    if (in_v0 != 0) {
      return;
    }
    iVar1 = DAT_800cba44 * 0xf0 + unaff_s1;
    if (param_2 != unaff_s3) {
      if (param_2 == 0) {
        *(undefined4 *)(DAT_800cba44 * 4 + unaff_s2) = 0;
        PADPORTD_OBJ_23C();
        return;
      }
      _dirFailAuto(iVar1);
      PADPORTD_OBJ_2BC(iVar1);
    }
    DAT_800cba48 = 0;
    *(undefined2 *)(PTR_JOY_MCD_DATA_800cbaac + 10) = 0;
    DAT_800cba44 = DAT_800cba44 + 1;
    in_v0 = 1;
    if (DAT_800cba44 <= DAT_800cba58) break;
    param_2 = 0xffff;
  }
  _padInitSioMode(DAT_800cba44 * 0xf0 + unaff_s1);
  PADPORTD_OBJ_298();
  return;
}


