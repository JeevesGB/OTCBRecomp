/* Function: kanjitrans */
/* Address: 8009f508 */

int kanjitrans(ushort param_1)

{
  int iVar1;
  uint uVar2;
  byte local_18;
  byte local_17;
  ushort local_10 [4];
  
  local_10[0] = param_1;
  bcopy((uchar *)local_10,&local_18,2);
  switch(local_17) {
  case 0x81:
    uVar2 = (uint)local_18;
    iVar1 = 0;
    if (((0x3e < uVar2 - 0x40) && (iVar1 = 1, 0x2c < (uVar2 + 0x80 & 0xff))) &&
       (((iVar1 = 2, 7 < (uVar2 + 0x48 & 0xff) &&
         ((iVar1 = 3, 6 < (uVar2 + 0x38 & 0xff) && (iVar1 = 4, 0xe < (uVar2 + 0x26 & 0xff))))) &&
        (iVar1 = 5, 7 < (uVar2 + 0x10 & 0xff))))) {
      if (uVar2 != 0xfc) {
        return -1;
      }
      iVar1 = 6;
    }
    iVar1 = KTRANS_OBJ_5C4((&DAT_800ca2bc)[iVar1 * 2]);
    return iVar1;
  case 0x82:
    uVar2 = (uint)local_18;
    iVar1 = 7;
    if ((((uVar2 - 0x4f < 10) || (iVar1 = 8, uVar2 - 0x60 < 0x1a)) ||
        (iVar1 = 9, (uVar2 + 0x7f & 0xff) < 0x1a)) || (iVar1 = 10, (uVar2 + 0x61 & 0xff) < 0x53)) {
      iVar1 = KTRANS_OBJ_5C4((&DAT_800ca2bc)[iVar1 * 2]);
      return iVar1;
    }
    break;
  case 0x83:
    uVar2 = (uint)local_18;
    iVar1 = 0xb;
    if (((uVar2 - 0x40 < 0x3f) || (iVar1 = 0xc, (uVar2 + 0x80 & 0xff) < 0x17)) ||
       ((iVar1 = 0xd, (uVar2 + 0x61 & 0xff) < 0x18 || (iVar1 = 0xe, (uVar2 + 0x41 & 0xff) < 0x18))))
    {
      iVar1 = KTRANS_OBJ_5C4((&DAT_800ca2bc)[iVar1 * 2]);
      return iVar1;
    }
    break;
  case 0x84:
    uVar2 = (uint)local_18;
    iVar1 = 0xf;
    if (((uVar2 - 0x40 < 0x21) || (iVar1 = 0x10, uVar2 - 0x70 < 0xf)) ||
       ((iVar1 = 0x11, (uVar2 + 0x80 & 0xff) < 0x12 || (iVar1 = 0x12, (uVar2 + 0x61 & 0xff) < 0x20))
       )) {
      iVar1 = KTRANS_OBJ_5C4((&DAT_800ca2bc)[iVar1 * 2]);
      return iVar1;
    }
    break;
  case 0x85:
    uVar2 = (uint)local_18;
    iVar1 = 0;
    if (4 < uVar2 - 0x40) {
      if (uVar2 == 0x46) {
        iVar1 = KTRANS_OBJ_3AC();
        return iVar1;
      }
      iVar1 = 2;
      if (1 < uVar2 - 0x48) {
        if (uVar2 == 0x4b) {
          iVar1 = KTRANS_OBJ_3AC();
          return iVar1;
        }
        iVar1 = 4;
        if (((0xb < uVar2 - 0x50) && (iVar1 = 5, 0xc < (uVar2 + 0x60 & 0xff))) &&
           (iVar1 = 6, 0xc < (uVar2 + 0x50 & 0xff))) break;
      }
    }
    iVar1 = KTRANS_OBJ_5C4((&DAT_800ca388)[iVar1 * 2]);
    return iVar1;
  case 0x86:
    uVar2 = (uint)local_18;
    iVar1 = 7;
    if (1 < uVar2 - 0x40) {
      if (uVar2 == 0x43) {
        iVar1 = KTRANS_OBJ_47C();
        return iVar1;
      }
      if (uVar2 == 0x45) {
        iVar1 = KTRANS_OBJ_47C();
        return iVar1;
      }
      iVar1 = 10;
      if ((((1 < uVar2 - 0x47) && (iVar1 = 0xb, 2 < uVar2 - 0x4a)) &&
          ((iVar1 = 0xc, 1 < uVar2 - 0x4e &&
           ((iVar1 = 0xd, 0xf < uVar2 - 0x60 && (iVar1 = 0xe, 0x17 < (uVar2 + 0x61 & 0xff))))))) &&
         (iVar1 = 0xf, 0x3d < (uVar2 + 0x48 & 0xff))) break;
    }
    iVar1 = KTRANS_OBJ_5C4((&DAT_800ca388)[iVar1 * 2]);
    return iVar1;
  case 0x87:
    uVar2 = (uint)local_18;
    iVar1 = 0x10;
    if (((uVar2 - 0x40 < 0x1b) || (iVar1 = 0x11, uVar2 - 0x5c < 7)) ||
       (iVar1 = 0x12, uVar2 - 100 < 0x33)) {
      iVar1 = KTRANS_OBJ_5C4((&DAT_800ca388)[iVar1 * 2]);
      return iVar1;
    }
    break;
  default:
    if ((local_17 < 0x99) && ((local_17 != 0x98 || (local_18 < 0x73)))) {
      iVar1 = -1;
      if ((0x87 < local_17) && ((local_17 != 0x88 || (iVar1 = -1, 0x9e < local_18)))) {
        if (0xfc < local_18) break;
        iVar1 = -1;
        if (0x3f < local_18) {
          if (local_18 == 0x7f) break;
          iVar1 = (uint)(byte)((local_17 + 0x78) * '\x02' - (local_18 < 0x7f)) * 4;
          iVar1 = ((uint)local_10[0] - (uint)*(ushort *)(&DAT_800ca308 + iVar1)) +
                  (uint)*(ushort *)(&DAT_800ca30a + iVar1);
        }
      }
      return iVar1;
    }
  }
  iVar1 = KTRANS_OBJ_5C8();
  return iVar1;
}


