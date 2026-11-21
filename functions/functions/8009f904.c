/* Function: KTRANS_OBJ_4A8 */
/* Address: 8009f904 */

void KTRANS_OBJ_4A8(void)

{
  int iVar1;
  uint uVar2;
  byte in_stack_00000010;
  
  uVar2 = (uint)in_stack_00000010;
  iVar1 = 0x10;
  if (((0x1a < uVar2 - 0x40) && (iVar1 = 0x11, 6 < uVar2 - 0x5c)) &&
     (iVar1 = 0x12, 0x32 < uVar2 - 100)) {
    KTRANS_OBJ_5C8();
    return;
  }
  KTRANS_OBJ_5C4((&DAT_800ca388)[iVar1 * 2]);
  return;
}


