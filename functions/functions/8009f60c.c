/* Function: KTRANS_OBJ_1B0 */
/* Address: 8009f60c */

void KTRANS_OBJ_1B0(void)

{
  int iVar1;
  uint uVar2;
  byte in_stack_00000010;
  
  uVar2 = (uint)in_stack_00000010;
  iVar1 = 7;
  if ((((9 < uVar2 - 0x4f) && (iVar1 = 8, 0x19 < uVar2 - 0x60)) &&
      (iVar1 = 9, 0x19 < (uVar2 + 0x7f & 0xff))) && (iVar1 = 10, 0x52 < (uVar2 + 0x61 & 0xff))) {
    KTRANS_OBJ_5C8();
    return;
  }
  KTRANS_OBJ_5C4((&DAT_800ca2bc)[iVar1 * 2]);
  return;
}


