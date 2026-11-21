/* Function: MemCardClose */
/* Address: 800a23ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MemCardClose(void)

{
  if (-1 < DAT_800d0b94) {
    close(DAT_800d0b94);
    DAT_800d0b94 = -1;
  }
  return;
}


