/* Function: StSetRing */
/* Address: 800a58dc */

void StSetRing(u_long *ring_addr,u_long ring_size)

{
  DAT_800d0fe0 = ring_addr;
  DAT_800d0fe4 = ring_size;
  StClearRing();
  return;
}


