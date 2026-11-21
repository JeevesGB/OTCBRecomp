/* Function: KTRANS_OBJ_3D8 */
/* Address: 8009f834 */

void KTRANS_OBJ_3D8(void)

{
  int iVar1;
  uint uVar2;
  byte in_stack_00000010;
  
  uVar2 = (uint)in_stack_00000010;
  iVar1 = 7;
  if (1 < uVar2 - 0x40) {
    if (uVar2 == 0x43) {
      KTRANS_OBJ_47C();
      return;
    }
    if (uVar2 == 0x45) {
      KTRANS_OBJ_47C();
      return;
    }
    iVar1 = 10;
    if ((((1 < uVar2 - 0x47) && (iVar1 = 0xb, 2 < uVar2 - 0x4a)) && (iVar1 = 0xc, 1 < uVar2 - 0x4e))
       && (((iVar1 = 0xd, 0xf < uVar2 - 0x60 && (iVar1 = 0xe, 0x17 < (uVar2 + 0x61 & 0xff))) &&
           (iVar1 = 0xf, 0x3d < (uVar2 + 0x48 & 0xff))))) {
      KTRANS_OBJ_5C8();
      return;
    }
  }
  KTRANS_OBJ_5C4((&DAT_800ca388)[iVar1 * 2]);
  return;
}


