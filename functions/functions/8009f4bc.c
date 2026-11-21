/* Function: KTRANS_OBJ_60 */
/* Address: 8009f4bc */

void KTRANS_OBJ_60(ulong param_1)

{
  int iVar1;
  undefined2 unaff_s1;
  
  Krom2RawAdd(param_1);
  iVar1 = kanjitrans(unaff_s1);
  if (-1 < iVar1) {
    KTRANS_OBJ_98();
    return;
  }
  Krom2RawAdd(0x8140);
  return;
}


