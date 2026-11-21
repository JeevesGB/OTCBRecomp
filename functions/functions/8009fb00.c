/* Function: KTRANS_OBJ_6A4 */
/* Address: 8009fb00 */

int KTRANS_OBJ_6A4(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  char in_v1;
  
  if (in_v1 != '\0') {
    iVar1 = KTRANS_OBJ_6FC();
    return iVar1;
  }
  iVar1 = (param_3 & 0xff) * 4;
  return ((uint)*(ushort *)(&DAT_800ca3d4 + iVar1) + (param_2 & 0xff)) -
         (uint)*(ushort *)(&DAT_800ca3d6 + iVar1);
}


