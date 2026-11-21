/* Function: FUN_80054b90 */
/* Address: 80054b90 */

void FUN_80054b90(void)

{
  int iVar1;
  
  if (*DAT_800cd47c < 0) {
    SsSetMute('\x01');
    do {
      iVar1 = CdControlF('\t',(u_char *)0x0);
    } while (iVar1 == 0);
    StartSoundTest();
  }
  DAT_800cd47c[5] = -1;
  return;
}


