/* Function: PadEnableCom */
/* Address: 800a9a5c */

uint PadEnableCom(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_800cba58 << 1 | (uint)(DAT_800cba54 == 0);
  if (uVar1 != param_1) {
    DAT_800cba3c = 0;
    if ((param_1 & 1) != 0) {
      DAT_800cba54 = 0;
      if (0x95 < DAT_800d1068) {
        (*DAT_800cba08)(DAT_800cba38);
      }
      DAT_800d1068 = 0;
      uVar1 = PADMAIN_OBJ_98();
      return uVar1;
    }
    DAT_800cba54 = 1;
    if ((param_1 & 2) != 0) {
      DAT_800cba58 = 1;
      if (0x95 < DAT_800d106c) {
        (*DAT_800cba08)(DAT_800cba38 + 0xf0);
      }
      DAT_800d106c = 0;
      uVar1 = PADMAIN_OBJ_F0();
      return uVar1;
    }
    DAT_800cba58 = 0;
    DAT_800cba3c = 1;
  }
  return uVar1;
}


