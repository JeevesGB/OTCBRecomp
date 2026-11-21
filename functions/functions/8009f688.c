/* Function: KTRANS_OBJ_22C */
/* Address: 8009f688 */

void KTRANS_OBJ_22C(void)

{
  int iVar1;
  uint uVar2;
  byte in_stack_00000010;
  
  uVar2 = (uint)in_stack_00000010;
  iVar1 = 0xb;
  if ((((0x3e < uVar2 - 0x40) && (iVar1 = 0xc, 0x16 < (uVar2 + 0x80 & 0xff))) &&
      (iVar1 = 0xd, 0x17 < (uVar2 + 0x61 & 0xff))) && (iVar1 = 0xe, 0x17 < (uVar2 + 0x41 & 0xff))) {
    KTRANS_OBJ_5C8();
    return;
  }
  KTRANS_OBJ_5C4((&DAT_800ca2bc)[iVar1 * 2]);
  return;
}


