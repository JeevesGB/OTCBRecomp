/* Function: Krom2RawAdd2 */
/* Address: 8009f45c */

long Krom2RawAdd2(ushort param_1)

{
  long lVar1;
  int iVar2;
  
  if ((ushort)(param_1 + 0x7ec0) < 0x37f) {
    lVar1 = KTRANS_OBJ_60(0x8140);
    return lVar1;
  }
  if ((ushort)(param_1 + 0x7ac0) < 599) {
    Krom2RawAdd(0x8140);
    lVar1 = KTRANS_OBJ_6C();
    return lVar1;
  }
  if ((ushort)(param_1 + 0x7761) < 0xfd4) {
    Krom2RawAdd(0x889f);
    iVar2 = kanjitrans(param_1);
    if (-1 < iVar2) {
      lVar1 = KTRANS_OBJ_98();
      return lVar1;
    }
  }
  lVar1 = Krom2RawAdd(0x8140);
  return lVar1;
}


