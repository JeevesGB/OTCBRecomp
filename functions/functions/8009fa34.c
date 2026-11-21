/* Function: hankanjitrans */
/* Address: 8009fa34 */

/* WARNING: Removing unreachable block (ram,0x8009fb2c) */

undefined4 hankanjitrans(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 - 0x20 & 0xff) < 0x10) {
    uVar1 = KTRANS_OBJ_6A4();
    return uVar1;
  }
  if ((param_1 - 0x30 & 0xff) < 10) {
    uVar1 = KTRANS_OBJ_6A4(param_1,param_1,0);
    return uVar1;
  }
  if ((param_1 - 0x3a & 0xff) < 7) {
    uVar1 = KTRANS_OBJ_6A4();
    return uVar1;
  }
  if (0x19 < (param_1 - 0x41 & 0xff)) {
    if ((param_1 - 0x5b & 0xff) < 6) {
      uVar1 = KTRANS_OBJ_6A4();
      return uVar1;
    }
    if (0x19 < (param_1 - 0x61 & 0xff)) {
      if ((param_1 - 0x7b & 0xff) < 4) {
        uVar1 = KTRANS_OBJ_6FC();
        return uVar1;
      }
      printf("bad hankaku code 0x%x\n",param_1 & 0xff);
      uVar1 = KTRANS_OBJ_6FC();
      return uVar1;
    }
    uVar1 = KTRANS_OBJ_6A4(param_1,param_1,2);
    return uVar1;
  }
  uVar1 = KTRANS_OBJ_6A4(param_1,param_1,1);
  return uVar1;
}


