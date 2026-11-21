/* Function: SpuSetNoiseClock */
/* Address: 8009906c */

long SpuSetNoiseClock(long n_clock)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((-1 < n_clock) && (uVar1 = n_clock, 0x3f < n_clock)) {
    uVar1 = 0x3f;
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa) =
       *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_800c3d50 + 0x1aa) & 0xc0ff |
       (ushort)((uVar1 & 0x3f) << 8);
  return uVar1;
}


