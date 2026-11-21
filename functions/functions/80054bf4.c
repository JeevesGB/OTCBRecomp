/* Function: InitSoundTestDisplay */
/* Address: 80054bf4 */

void InitSoundTestDisplay(void)

{
  int iVar1;
  
  if (*DAT_800cd47c < 0) {
    do {
      iVar1 = CdControlB('\x03',(u_char *)0x0,(u_char *)0x0);
    } while (iVar1 == 0);
  }
  DAT_800cd47c[5] = 0;
  return;
}


