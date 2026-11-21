/* Function: _card_stop */
/* Address: 800a3e38 */

void _card_stop(void)

{
  int iVar1;
  
  iVar1 = InitGPU_Pre();
  CloseEvent(DAT_800d0c60);
  CloseEvent(DAT_800d0c64);
  CloseEvent(DAT_800d0c68);
  CloseEvent(DAT_800d0c6c);
  CloseEvent(DAT_800d0c70);
  CloseEvent(DAT_800d0c74);
  CloseEvent(DAT_800d0c78);
  CloseEvent(DAT_800d0c7c);
  if (iVar1 == 1) {
    InitGPU_Post();
  }
  return;
}


