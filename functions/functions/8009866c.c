/* Function: SpuSetMute */
/* Address: 8009866c */

long SpuSetMute(long on_off)

{
  long lVar1;
  
  if (on_off == 0) {
    lVar1 = S_SM_OBJ_4C();
    return lVar1;
  }
  if (on_off != 1) {
    lVar1 = S_SM_OBJ_54();
    return lVar1;
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa) =
       *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa) & 0xbfff;
  return 1;
}


