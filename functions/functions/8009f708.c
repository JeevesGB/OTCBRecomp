/* Function: KTRANS_OBJ_2AC */
/* Address: 8009f708 */

void KTRANS_OBJ_2AC(void)

{
  int iVar1;
  uint uVar2;
  byte in_stack_00000010;
  
  uVar2 = (uint)in_stack_00000010;
  iVar1 = 0xf;
  if ((((0x20 < uVar2 - 0x40) && (iVar1 = 0x10, 0xe < uVar2 - 0x70)) &&
      (iVar1 = 0x11, 0x11 < (uVar2 + 0x80 & 0xff))) && (iVar1 = 0x12, 0x1f < (uVar2 + 0x61 & 0xff)))
  {
    KTRANS_OBJ_5C8();
    return;
  }
  KTRANS_OBJ_5C4((&DAT_800ca2bc)[iVar1 * 2]);
  return;
}


