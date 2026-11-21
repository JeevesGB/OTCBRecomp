/* Function: PADPORTD_OBJ_1C8 */
/* Address: 800abc24 */

void PADPORTD_OBJ_1C8(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_800cba44 * 0xf0;
  if (param_1 != -9) {
    if (param_1 == 0) {
      *(undefined4 *)(&DAT_800cba5c + DAT_800cba44 * 4) = 0;
      PADPORTD_OBJ_23C();
      return;
    }
    _dirFailAuto(&DAT_800d1118 + iVar1);
    PADPORTD_OBJ_2BC(&DAT_800d1118 + iVar1);
  }
  DAT_800cba48 = 0;
  *(undefined2 *)(PTR_JOY_MCD_DATA_800cbaac + 10) = 0;
  DAT_800cba44 = DAT_800cba44 + 1;
  if (DAT_800cba58 < DAT_800cba44) {
    return;
  }
  _padInitSioMode(&DAT_800d1118 + DAT_800cba44 * 0xf0);
  PADPORTD_OBJ_298();
  return;
}


