/* Function: _spu_FsetRXXa */
/* Address: 8009844c */

uint _spu_FsetRXXa(int param_1,uint param_2)

{
  uint uVar1;
  
  if (DAT_800c3d74 != 0) {
    if (DAT_800c3d7c == 0) {
      trap(0x1c00);
    }
    if (param_2 % DAT_800c3d7c != 0) {
      param_2 = param_2 + DAT_800c3d7c & ~DAT_800c3d80;
    }
  }
  if (param_1 != -2) {
    if (param_1 == -1) {
      uVar1 = SPU_OBJ_9EC();
      return uVar1;
    }
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + param_1 * 2) =
         (short)(param_2 >> (DAT_800c3d78 & 0x1f));
    return param_2;
  }
  uVar1 = SPU_OBJ_9EC();
  return uVar1;
}


