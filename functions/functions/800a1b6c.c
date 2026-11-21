/* Function: MemCardStop */
/* Address: 800a1b6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MemCardStop(void)

{
  do {
  } while (DAT_800d0b80 != 0);
  VSyncCallbacks(7,0);
  _card_stop();
  return;
}


