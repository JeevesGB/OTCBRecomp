/* Function: DecDCTReset */
/* Address: 800a4ddc */

void DecDCTReset(int mode)

{
  if (mode == 0) {
    ResetCallback();
  }
  LIBPRESS_OBJ_2C0(mode);
  return;
}


