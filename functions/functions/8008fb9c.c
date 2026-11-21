/* Function: CC_6_OBJ_1E0 */
/* Address: 8008fb9c */

void CC_6_OBJ_1E0(void)

{
  byte bVar1;
  undefined4 uVar2;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  byte unaff_s4;
  int unaff_s6;
  short unaff_s7;
  short unaff_s8;
  byte in_stack_00000038;
  uchar in_stack_0000004c;
  byte in_stack_00000054;
  byte bStack00000055;
  int in_stack_00000068;
  
  do {
    unaff_s2 = unaff_s2 + 1;
    SsUtSetVagAtr((short)*(char *)(unaff_s0 + 0x26),(ushort)*(byte *)(unaff_s6 + 0x37),
                  (short)((uint)unaff_s1 >> 0x10),(VagAtr *)&stack0x00000048);
    unaff_s1 = unaff_s1 + 0x10000;
    if ((int)(uint)in_stack_00000038 <= unaff_s2) {
      uVar2 = _SsReadDeltaValue((int)unaff_s7,(int)unaff_s8);
      *(undefined4 *)(unaff_s0 + 0x90) = uVar2;
      *(undefined1 *)(unaff_s0 + 0x1e) = 0;
      CC_6_OBJ_34C();
      return;
    }
    SsUtGetVagAtr((short)*(char *)(unaff_s0 + 0x26),(ushort)*(byte *)(unaff_s6 + 0x37),
                  (short)((uint)unaff_s1 >> 0x10),(VagAtr *)&stack0x00000048);
    bVar1 = *(byte *)(unaff_s0 + 0x18);
    if (bVar1 == 1) {
      if ((in_stack_00000068 != 0) && (unaff_s3 << 2 < 0)) {
        CC_6_OBJ_1B0();
        return;
      }
      CC_6_OBJ_1E0();
      return;
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        CC_6_OBJ_1E8();
        return;
      }
      in_stack_00000054 = unaff_s4 & 0x7f;
      bStack00000055 = in_stack_00000054;
      CC_6_OBJ_1E0();
      return;
    }
  } while (bVar1 == 2);
  CC_6_OBJ_1E8();
  return;
}


