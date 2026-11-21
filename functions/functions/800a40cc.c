/* Function: _get_card_event_x */
/* Address: 800a40cc */

int _get_card_event_x(void)

{
  int iVar1;
  
  do {
    iVar1 = DAT_800d0c90 + DAT_800d0c94 * 2 + DAT_800d0c98 * 4 + DAT_800d0c9c * 8;
  } while (iVar1 == 0);
  TestEvent(DAT_800d0c60);
  TestEvent(DAT_800d0c64);
  TestEvent(DAT_800d0c68);
  TestEvent(DAT_800d0c6c);
  DAT_800d0c9c = 0;
  DAT_800d0c98 = 0;
  DAT_800d0c94 = 0;
  DAT_800d0c90 = 0;
  return iVar1 >> 1;
}


