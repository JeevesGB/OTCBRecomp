/* Function: rand */
/* Address: 800a00dc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
  DAT_800d0b00 = DAT_800d0b00 * 0x41c64e6d + 0x3039;
  return DAT_800d0b00 >> 0x10 & 0x7fff;
}


