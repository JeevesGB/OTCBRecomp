/* Function: _SsVmInit */
/* Address: 8009480c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SsVmInit(byte param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  SpuVoiceAttr local_60;
  
  FUN_8009a1fc(0);
  DAT_800cef48 = 0;
  SpuInitMalloc(0x20,&DAT_800cf078);
  uVar3 = 0;
  uVar1 = 0;
  do {
    (&DAT_800cece0)[uVar1] = 0;
    uVar3 = uVar3 + 1;
    uVar1 = (uint)uVar3;
  } while (uVar3 < 0xc0);
  uVar3 = 0;
  uVar1 = 0;
  do {
    (&DAT_800cecc0)[uVar1] = 0;
    uVar3 = uVar3 + 1;
    uVar1 = (uint)uVar3;
  } while (uVar3 < 0x18);
  DAT_800cf028 = 0;
  uVar3 = 0;
  uVar1 = 0;
  do {
    (&DAT_800cefd0)[uVar1] = 0;
    uVar3 = uVar3 + 1;
    uVar1 = (uint)uVar3;
  } while (uVar3 < 0x10);
  if (param_1 < 0x18) {
    uVar1 = 0;
    local_60.mask = 0x60093;
    local_60.pitch = 0x1000;
    local_60.addr = 0x1000;
    local_60.adsr1 = 0x80ff;
    local_60.volume.left = 0;
    local_60.volume.right = 0;
    local_60.adsr2 = 0x4000;
    DAT_800cefa4 = param_1;
    if ('\0' < (char)param_1) {
      do {
        uVar2 = uVar1 & 0xffff;
        local_60.voice = 1 << (uVar1 & 0x1f);
        (&DAT_800ce782)[uVar2 * 0x1c] = 0x18;
        (&DAT_800ce780)[uVar2 * 0x1c] = 0xff;
        (&DAT_800ce79d)[uVar2 * 0x38] = 0;
        (&DAT_800ce784)[uVar2 * 0x1c] = 0;
        (&DAT_800ce786)[uVar2 * 0x1c] = 0;
        (&DAT_800ce790)[uVar2 * 0x1c] = 0xffff;
        (&DAT_800ce792)[uVar2 * 0x1c] = 0;
        (&DAT_800ce794)[uVar2 * 0x1c] = 0;
        (&DAT_800ce796)[uVar2 * 0x1c] = 0xff;
        (&DAT_800ce788)[uVar2 * 0x1c] = 0;
        (&DAT_800ce78c)[uVar2 * 0x1c] = 0;
        (&DAT_800ce78a)[uVar2 * 0x38] = 0x40;
        (&DAT_800ce7b6)[uVar2 * 0x1c] = 0;
        (&DAT_800ce79e)[uVar2 * 0x1c] = 0;
        (&DAT_800ce7a0)[uVar2 * 0x1c] = 0;
        (&DAT_800ce7a2)[uVar2 * 0x1c] = 0;
        (&DAT_800ce7a4)[uVar2 * 0x1c] = 0;
        (&DAT_800ce7aa)[uVar2 * 0x1c] = 0;
        (&DAT_800ce7ac)[uVar2 * 0x1c] = 0;
        (&DAT_800ce7ae)[uVar2 * 0x1c] = 0;
        (&DAT_800ce7b0)[uVar2 * 0x1c] = 0;
        (&DAT_800ce7b2)[uVar2 * 0x1c] = 0;
        (&DAT_800ce7a6)[uVar2 * 0x1c] = 0;
        SpuSetVoiceAttr(&local_60);
        DAT_800cefc8 = (undefined2)uVar1;
        _SsVmKeyOffNow(1);
        uVar1 = uVar1 + 1;
      } while ((int)(uVar1 & 0xffff) < (int)(char)DAT_800cefa4);
    }
    DAT_800ceeb0 = 0;
    DAT_800ceeb8 = 0x3fff;
    DAT_800ceeba = 0x3fff;
    _DAT_800ceeb4 = 0;
    DAT_800ce770 = 0;
    DAT_800ce772 = 0;
    DAT_800ceea8 = 0;
    DAT_800ce774 = 0;
    DAT_800ce776 = 0;
    DAT_800ce778 = 0;
    DAT_800ce77a = 0;
    DAT_800cefe0 = 0;
    DAT_800cef90 = 0;
    DAT_800cefa8 = 0;
    DAT_800cef92 = 0x80;
    _SsVmFlush();
    return;
  }
  DAT_800cefa4 = 0x18;
  VM_INIT_OBJ_FC();
  return;
}


