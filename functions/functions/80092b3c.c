/* Function: SsUtAllKeyOff */
/* Address: 80092b3c */

void SsUtAllKeyOff(short param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  SpuVoiceAttr local_58;
  
  uVar3 = 0;
  local_58.mask = 0x60093;
  local_58.pitch = 0x1000;
  local_58.addr = 0x1000;
  local_58.adsr1 = 0x80ff;
  local_58.volume.left = 0;
  local_58.volume.right = 0;
  local_58.adsr2 = 0x4000;
  if ('\0' < DAT_800cefa4) {
    iVar1 = 0;
    do {
      uVar2 = iVar1 >> 0x10;
      local_58.voice = 1 << (uVar2 & 0x1f);
      if ((DAT_800c3b60 & local_58.voice) == 0) {
        (&DAT_800ce782)[uVar2 * 0x1c] = 0x18;
        (&DAT_800ce786)[uVar2 * 0x1c] = 0;
        (&DAT_800ce790)[uVar2 * 0x1c] = 0xff;
        (&DAT_800ce792)[uVar2 * 0x1c] = 0;
        (&DAT_800ce794)[uVar2 * 0x1c] = 0;
        (&DAT_800ce796)[uVar2 * 0x1c] = 0xff;
        (&DAT_800ce7b6)[uVar2 * 0x1c] = 0;
        SpuSetVoiceAttr(&local_58);
        DAT_800cefc8 = uVar3;
        _SsVmKeyOffNow(1);
      }
      uVar3 = uVar3 + 1;
      iVar1 = (uint)uVar3 << 0x10;
    } while ((int)(short)uVar3 < (int)DAT_800cefa4);
  }
  return;
}


