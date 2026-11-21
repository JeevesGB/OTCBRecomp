/* Function: SsVabClose */
/* Address: 800972dc */

void SsVabClose(short param_1)

{
  int iVar1;
  
  if ((ushort)param_1 < 0x10) {
    iVar1 = (int)param_1;
    if (((byte)(&DAT_800cefd0)[iVar1] < 3) && ((&DAT_800cefd0)[iVar1] != 0)) {
      SpuFree(*(ulong *)(&DAT_800cf030 + iVar1 * 4));
      (&DAT_800cefd0)[iVar1] = 0;
      DAT_800cf028 = DAT_800cf028 + -1;
      iVar1 = FUN_8009a224();
      if (iVar1 == 1) {
        FUN_8009a1fc(0);
      }
    }
  }
  return;
}


