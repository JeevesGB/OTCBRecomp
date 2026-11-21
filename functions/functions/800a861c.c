/* Function: StClearRing */
/* Address: 800a861c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void StClearRing(void)

{
  DAT_800d0fcc = 0;
  DAT_800d0fc8 = 0;
  DAT_800d0fc4 = 0;
  DAT_800d0fbc = 0;
  init_ring_status(0,DAT_800d0fe4);
  DAT_800d0fac = 0;
  DAT_800d0fa4 = 0;
  DAT_800d0fa0 = 0;
  return;
}


