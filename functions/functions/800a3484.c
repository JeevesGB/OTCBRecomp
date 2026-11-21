/* Function: MemCardUnformat */
/* Address: 800a3484 */

long MemCardUnformat(long chan)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uchar auStack_90 [127];
  undefined1 local_11;
  
  if (DAT_800d0b80 != 0) {
    printf("Access Denied. : system busy\n");
    lVar1 = LIBMCRD_OBJ_1A28();
    return lVar1;
  }
  iVar4 = 0x7f;
  puVar2 = &local_11;
  do {
    *puVar2 = 0xff;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar4);
  iVar4 = 0;
  do {
    _clr_card_event();
    _new_card();
    _card_write(chan,iVar4,auStack_90);
    iVar3 = _get_card_event_x();
    iVar4 = iVar4 + 1;
    if (iVar3 != 0) {
      lVar1 = LIBMCRD_OBJ_1A28();
      return lVar1;
    }
  } while (iVar4 < 0xf);
  return 1;
}


