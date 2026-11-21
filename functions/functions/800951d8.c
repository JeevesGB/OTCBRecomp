/* Function: _SsVmSeKeyOn */
/* Address: 800951d8 */

void _SsVmSeKeyOn(undefined4 param_1,short param_2,undefined2 param_3,undefined4 param_4,
                 uint param_5,ushort param_6)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_5 & 0xffff;
  uVar1 = (uint)param_6;
  if (uVar2 == uVar1) {
    VM_KEY_OBJ_72C(param_1,param_5);
    return;
  }
  if (uVar1 < uVar2) {
    if (uVar2 == 0) {
      trap(0x1c00);
    }
    if ((uVar2 == 0xffffffff) && (uVar1 == 0x2000000)) {
      trap(0x1800);
    }
    VM_KEY_OBJ_72C(param_1,param_5);
    return;
  }
  if (uVar1 == 0) {
    trap(0x1c00);
  }
  if ((uVar1 == 0xffffffff) && (uVar2 == 0x2000000)) {
    trap(0x1800);
  }
  _SsVmKeyOn(0x21,(int)(short)param_1,(int)param_2,param_3,param_6,
             0x7f - (uVar2 << 6) / uVar1 & 0xffff);
  return;
}


