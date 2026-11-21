/* Function: SpuSetTransferStartAddr */
/* Address: 8009a0bc */

ulong SpuSetTransferStartAddr(ulong addr)

{
  ulong uVar1;
  
  if (addr - 0x1010 < 0x7efe9) {
    DAT_800c3d68 = _spu_FsetRXXa(0xffffffff);
    uVar1 = S_STSA_OBJ_4C();
    return uVar1;
  }
  return 0;
}


