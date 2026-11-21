/* Function: DecDCTin */
/* Address: 800a4f40 */

void DecDCTin(u_long *buf,int mode)

{
  if ((mode & 1U) != 0) {
    LIBPRESS_OBJ_194();
    return;
  }
  *buf = *buf | 0x8000000;
  if ((mode & 2U) != 0) {
    LIBPRESS_OBJ_1C0();
    return;
  }
  *buf = *buf & 0xfdffffff;
  LIBPRESS_OBJ_3B0(buf,(short)*buf);
  return;
}


