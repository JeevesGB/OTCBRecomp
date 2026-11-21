/* Function: PadInfoComb */
/* Address: 800a98e0 */

int PadInfoComb(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (*DAT_800cba18)();
  if (param_2 < 0) {
    iVar1 = PADENTRY_OBJ_3D8();
    return iVar1;
  }
  if (param_2 < (int)(uint)*(byte *)(iVar1 + 0xea)) {
    if (param_3 < 0) {
      iVar1 = PADENTRY_OBJ_3D8();
      return iVar1;
    }
    if (param_3 < (int)(uint)*(byte *)(*(int *)(iVar1 + 8) + param_2 * 8)) {
      iVar1 = PADENTRY_OBJ_3D8();
      return iVar1;
    }
  }
  return 0;
}


