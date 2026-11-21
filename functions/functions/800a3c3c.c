/* Function: _card_start */
/* Address: 800a3c3c */

void _card_start(void)

{
  int iVar1;
  
  iVar1 = InitGPU_Pre();
  DAT_800d0c60 = OpenEvent(0xf4000001,4,0x1000,funcEvSpIOE);
  DAT_800d0c64 = OpenEvent(0xf4000001,0x8000,0x1000,funcEvSpError);
  DAT_800d0c68 = OpenEvent(0xf4000001,0x100,0x1000,funcEvSpTimeout);
  DAT_800d0c6c = OpenEvent(0xf4000001,0x2000,0x1000,funcEvSpNewcard);
  DAT_800d0c70 = OpenEvent(0xf0000011,4,0x1000,funcEvSpIOEx);
  DAT_800d0c74 = OpenEvent(0xf0000011,0x8000,0x1000,funcEvSpErrorx);
  DAT_800d0c78 = OpenEvent(0xf0000011,0x100,0x1000,funcEvSpTimeoutx);
  DAT_800d0c7c = OpenEvent(0xf0000011,0x2000,0x1000,funcEvSpNewcardx);
  EnableEvent(DAT_800d0c60);
  EnableEvent(DAT_800d0c64);
  EnableEvent(DAT_800d0c68);
  EnableEvent(DAT_800d0c6c);
  EnableEvent(DAT_800d0c70);
  EnableEvent(DAT_800d0c74);
  EnableEvent(DAT_800d0c78);
  EnableEvent(DAT_800d0c7c);
  _clr_card_event();
  if (iVar1 == 1) {
    InitGPU_Post();
  }
  return;
}


