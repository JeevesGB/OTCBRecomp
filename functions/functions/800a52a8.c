/* Function: LIBPRESS_OBJ_4CC */
/* Address: 800a52a8 */

undefined4 LIBPRESS_OBJ_4CC(void)

{
  uint uVar1;
  undefined4 uVar2;
  int local_10;
  
  local_10 = 0x100000;
  uVar1 = *(uint *)PTR_MDEC_REG1_800ca6e0;
  while( true ) {
    if ((uVar1 & 0x20000000) == 0) {
      return 0;
    }
    local_10 = local_10 + -1;
    if (local_10 == -1) break;
    uVar1 = *(uint *)PTR_MDEC_REG1_800ca6e0;
  }
  LIBPRESS_OBJ_60C("MDEC_in_sync");
  uVar2 = LIBPRESS_OBJ_550();
  return uVar2;
}


