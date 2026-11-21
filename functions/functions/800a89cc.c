/* Function: StGetNext */
/* Address: 800a89cc */

u_long StGetNext(u_long **addr,u_long **header)

{
  bool bVar1;
  u_long *puVar2;
  
  puVar2 = (u_long *)(DAT_800d0fe0 + DAT_800d0fcc * 0x20);
  if ((short)*puVar2 == 1) {
    DAT_800d0fcc = 0;
    if (DAT_800d0fd4 != 0) {
      *(short *)puVar2 = 0;
    }
    puVar2 = (u_long *)(DAT_800d0fe0 + DAT_800d0fcc * 0x20);
  }
  bVar1 = (short)*puVar2 != 2;
  if (!bVar1) {
    *(short *)puVar2 = 4;
    *addr = (u_long *)(DAT_800d0fe0 + DAT_800d0fe4 * 0x20 + DAT_800d0fcc * 0x7e0);
    *header = puVar2;
  }
  return (uint)bVar1;
}


