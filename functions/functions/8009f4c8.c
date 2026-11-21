/* Function: KTRANS_OBJ_6C */
/* Address: 8009f4c8 */

void KTRANS_OBJ_6C(void)

{
  int iVar1;
  undefined2 unaff_s1;
  
  iVar1 = kanjitrans(unaff_s1);
  if (-1 < iVar1) {
    KTRANS_OBJ_98();
    return;
  }
  Krom2RawAdd(0x8140);
  return;
}


