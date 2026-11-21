/* Function: DecDCToutSync */
/* Address: 800a5018 */

int DecDCToutSync(int mode)

{
  int iVar1;
  uint uVar2;
  
  if (mode == 0) {
    LIBPRESS_OBJ_560();
    iVar1 = LIBPRESS_OBJ_268();
    return iVar1;
  }
  uVar2 = LIBPRESS_OBJ_5F4();
  return uVar2 >> 0x18 & 1;
}


