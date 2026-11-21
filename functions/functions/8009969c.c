/* Function: S_SRMP_OBJ_400 */
/* Address: 8009969c */

undefined4 S_SRMP_OBJ_400(void)

{
  undefined *puVar1;
  int unaff_s4;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int in_stack_00000058;
  
  puVar1 = PTR_VOICE_00_LEFT_RIGHT_800c3d50;
  *(undefined2 *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x184) = 0;
  *(undefined2 *)(puVar1 + 0x186) = 0;
  DAT_800c3cf8 = 0;
  DAT_800c3cfa = 0;
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


