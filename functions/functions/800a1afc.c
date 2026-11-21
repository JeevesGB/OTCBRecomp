/* Function: MemCardStart */
/* Address: 800a1afc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void MemCardStart(void)

{
  DAT_800d0b8c = 0;
  DAT_800d0bc4 = 0;
  UserFuncInit();
  DAT_800d0b80 = 0;
  DAT_800d0b84 = 0;
  DAT_800d0b88 = 0;
  DAT_800d0bd4 = 0;
  DAT_800d0b94 = 0xffffffff;
  DAT_800d0bcc = 1;
  DAT_800d0bc8 = 1;
  DAT_800d0bd0 = 0;
  _card_start();
  VSyncCallbacks(7,LIBMCRD_OBJ_1A90);
  return;
}


