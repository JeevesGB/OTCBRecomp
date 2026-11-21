/* Function: DecDCTinSync */
/* Address: 800a4fdc */

int DecDCTinSync(int mode)

{
  int iVar1;
  uint uVar2;
  
  if (mode == 0) {
    LIBPRESS_OBJ_4CC();
    iVar1 = LIBPRESS_OBJ_22C();
    return iVar1;
  }
  uVar2 = LIBPRESS_OBJ_5F4();
  return uVar2 >> 0x1d & 1;
}


