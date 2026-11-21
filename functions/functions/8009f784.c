/* Function: KTRANS_OBJ_328 */
/* Address: 8009f784 */

void KTRANS_OBJ_328(void)

{
  int iVar1;
  uint uVar2;
  byte in_stack_00000010;
  
  uVar2 = (uint)in_stack_00000010;
  iVar1 = 0;
  if (4 < uVar2 - 0x40) {
    if (uVar2 == 0x46) {
      KTRANS_OBJ_3AC();
      return;
    }
    iVar1 = 2;
    if (1 < uVar2 - 0x48) {
      if (uVar2 == 0x4b) {
        KTRANS_OBJ_3AC();
        return;
      }
      iVar1 = 4;
      if (((0xb < uVar2 - 0x50) && (iVar1 = 5, 0xc < (uVar2 + 0x60 & 0xff))) &&
         (iVar1 = 6, 0xc < (uVar2 + 0x50 & 0xff))) {
        KTRANS_OBJ_5C8();
        return;
      }
    }
  }
  KTRANS_OBJ_5C4((&DAT_800ca388)[iVar1 * 2]);
  return;
}


