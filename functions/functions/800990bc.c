/* Function: SpuSetReverb */
/* Address: 800990bc */

long SpuSetReverb(long on_off)

{
  long lVar1;
  int iVar2;
  
  if (on_off == 0) {
    DAT_800c3ce4 = 0;
    lVar1 = S_SR_OBJ_B0();
    return lVar1;
  }
  if (on_off != 1) {
    lVar1 = S_SR_OBJ_B4();
    return lVar1;
  }
  if ((DAT_800c3ce8 != 1) && (iVar2 = _SpuIsInAllocateArea_(DAT_800c3cec), iVar2 != 0)) {
    DAT_800c3ce4 = 0;
    lVar1 = S_SR_OBJ_B0();
    return lVar1;
  }
  DAT_800c3ce4 = on_off;
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa) =
       *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa) | 0x80;
  return DAT_800c3ce4;
}


