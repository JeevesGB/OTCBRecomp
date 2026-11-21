/* Function: S_SRMP_OBJ_31C */
/* Address: 800995b8 */

undefined4 S_SRMP_OBJ_31C(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  uint unaff_s7;
  int unaff_s8;
  undefined2 uStack00000022;
  int in_stack_00000058;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_800c3d50;
  DAT_800c3d00 = *(int *)(unaff_s2 + 0x10);
  uStack00000022 = (undefined2)((DAT_800c3d00 * 0x8100) / 0x7f);
  if (unaff_s4 == 0) {
    if ((unaff_s5 != 0) || ((unaff_s3 & 2) != 0)) {
      *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x184) = *(undefined2 *)(unaff_s2 + 8);
      DAT_800c3cf8 = *(undefined2 *)(unaff_s2 + 8);
    }
    if ((unaff_s5 != 0) || ((unaff_s3 & 4) != 0)) {
      *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x186) = *(undefined2 *)(unaff_s2 + 10);
      DAT_800c3cfa = *(undefined2 *)(unaff_s2 + 10);
      uVar2 = S_SRMP_OBJ_424();
      return uVar2;
    }
  }
  else {
    unaff_s7 = *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa) >> 7 & 1;
    if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa) >> 7 & 1) != 0) {
      *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa) =
           *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa) & 0xff7f;
      uVar2 = S_SRMP_OBJ_400();
      return uVar2;
    }
    *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x184) = 0;
    *(undefined2 *)(puVar1 + 0x186) = 0;
    DAT_800c3cf8 = 0;
    DAT_800c3cfa = 0;
  }
  if (((unaff_s4 != 0) || (unaff_s6 != 0)) || (unaff_s8 != 0)) {
    _spu_setReverbAttr(&stack0x00000010);
  }
  if (in_stack_00000058 != 0) {
    SpuClearReverbWorkArea(DAT_800c3cf4);
  }
  if ((unaff_s4 != 0) && (_spu_FsetRXX(0xd1,DAT_800c3cec,0), unaff_s7 != 0)) {
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa) | 0x80;
  }
  return 0;
}


