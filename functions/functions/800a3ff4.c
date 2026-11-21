/* Function: _get_card_event */
/* Address: 800a3ff4 */

int _get_card_event(void)

{
  int iVar1;
  
  do {
    iVar1 = DAT_800d0c80 + DAT_800d0c84 * 2 + DAT_800d0c88 * 4 + DAT_800d0c8c * 8;
  } while (iVar1 == 0);
  TestEvent(DAT_800d0c70);
  TestEvent(DAT_800d0c74);
  TestEvent(DAT_800d0c78);
  TestEvent(DAT_800d0c7c);
  DAT_800d0c8c = 0;
  DAT_800d0c88 = 0;
  DAT_800d0c84 = 0;
  DAT_800d0c80 = 0;
  return iVar1 >> 1;
}


