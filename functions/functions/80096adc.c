/* Function: _SsVmSeqKeyOff */
/* Address: 80096adc */

void _SsVmSeqKeyOff(short param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ('\0' < DAT_800cefa4) {
    uVar1 = 0;
    do {
      if (((DAT_800c3b60 & 1 << (uVar1 & 0x1f)) == 0) && ((&DAT_800ce790)[uVar1 * 0x1c] == param_1))
      {
        DAT_800cefc8 = (ushort)uVar2 & 0xff;
        _SsVmKeyOffNow(0);
      }
      uVar2 = uVar2 + 1;
      uVar1 = uVar2 & 0xff;
    } while ((int)(uVar2 & 0xff) < (int)DAT_800cefa4);
  }
  return;
}


