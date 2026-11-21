/* Function: UnmuteAllSound */
/* Address: 8002bb98 */

void UnmuteAllSound(void)

{
  DAT_800cc718 = 0xffffffff;
  SsSetMute('\x01');
  return;
}


