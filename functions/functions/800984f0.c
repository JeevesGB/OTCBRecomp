/* Function: _spu_FgetRXXa */
/* Address: 800984f0 */

uint _spu_FgetRXXa(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != -1) {
    uVar1 = SPU_OBJ_A28();
    return uVar1;
  }
  return (uint)*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + param_1 * 2);
}


