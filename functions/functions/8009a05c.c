/* Function: SpuRead */
/* Address: 8009a05c */

/* Possible S_W.OBJ/SpuWrite */

ulong SpuRead(uchar *addr,ulong size)

{
  if (0x7eff0 < size) {
    size = 0x7eff0;
  }
  _spu_Fw(addr,size);
  if (DAT_800c3d88 == 0) {
    DAT_800c3d84 = 0;
  }
  return size;
}


