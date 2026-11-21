/* Function: VS_VH2_OBJ_34 */
/* Address: 800973c0 */

long VS_VH2_OBJ_34(long param_1,undefined4 param_2,short param_3)

{
  long lVar1;
  
  lVar1 = SpuMalloc(param_1);
  if (lVar1 == -1) {
    (&DAT_800cefd0)[param_3] = 0;
    FUN_8009a1fc(0);
    lVar1 = -1;
    DAT_800cf028 = DAT_800cf028 + -1;
  }
  return lVar1;
}


