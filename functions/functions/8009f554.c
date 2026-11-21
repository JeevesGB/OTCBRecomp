/* Function: KTRANS_OBJ_F8 */
/* Address: 8009f554 */

undefined4 KTRANS_OBJ_F8(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  byte in_stack_00000010;
  
  uVar3 = (uint)in_stack_00000010;
  iVar1 = 0;
  if ((((0x3e < uVar3 - 0x40) && (iVar1 = 1, 0x2c < (uVar3 + 0x80 & 0xff))) &&
      (iVar1 = 2, 7 < (uVar3 + 0x48 & 0xff))) &&
     (((iVar1 = 3, 6 < (uVar3 + 0x38 & 0xff) && (iVar1 = 4, 0xe < (uVar3 + 0x26 & 0xff))) &&
      (iVar1 = 5, 7 < (uVar3 + 0x10 & 0xff))))) {
    if (uVar3 != 0xfc) {
      return 0xffffffff;
    }
    iVar1 = 6;
  }
  uVar2 = KTRANS_OBJ_5C4((&DAT_800ca2bc)[iVar1 * 2]);
  return uVar2;
}


