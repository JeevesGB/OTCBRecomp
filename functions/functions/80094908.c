/* Function: VM_INIT_OBJ_FC */
/* Address: 80094908 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VM_INIT_OBJ_FC(void)

{
  uint in_v0;
  uint uVar1;
  uint uVar2;
  ulong in_stack_00000010;
  uint uStack00000014;
  short sStack00000018;
  short sStack0000001a;
  ushort uStack00000024;
  ulong uStack0000002c;
  ushort uStack0000004a;
  ushort uStack0000004c;
  
  uStack00000014 = in_v0 | 0x93;
  uVar2 = 0;
  uStack00000024 = 0x1000;
  uStack0000002c = 0x1000;
  uStack0000004a = 0x80ff;
  sStack00000018 = 0;
  sStack0000001a = 0;
  uStack0000004c = 0x4000;
  if ('\0' < DAT_800cefa4) {
    do {
      uVar1 = uVar2 & 0xffff;
      in_stack_00000010 = 1 << (uVar2 & 0x1f);
      (&DAT_800ce782)[uVar1 * 0x1c] = 0x18;
      (&DAT_800ce780)[uVar1 * 0x1c] = 0xff;
      (&DAT_800ce79d)[uVar1 * 0x38] = 0;
      (&DAT_800ce784)[uVar1 * 0x1c] = 0;
      (&DAT_800ce786)[uVar1 * 0x1c] = 0;
      (&DAT_800ce790)[uVar1 * 0x1c] = 0xffff;
      (&DAT_800ce792)[uVar1 * 0x1c] = 0;
      (&DAT_800ce794)[uVar1 * 0x1c] = 0;
      (&DAT_800ce796)[uVar1 * 0x1c] = 0xff;
      (&DAT_800ce788)[uVar1 * 0x1c] = 0;
      (&DAT_800ce78c)[uVar1 * 0x1c] = 0;
      (&DAT_800ce78a)[uVar1 * 0x38] = 0x40;
      (&DAT_800ce7b6)[uVar1 * 0x1c] = 0;
      (&DAT_800ce79e)[uVar1 * 0x1c] = 0;
      (&DAT_800ce7a0)[uVar1 * 0x1c] = 0;
      (&DAT_800ce7a2)[uVar1 * 0x1c] = 0;
      (&DAT_800ce7a4)[uVar1 * 0x1c] = 0;
      (&DAT_800ce7aa)[uVar1 * 0x1c] = 0;
      (&DAT_800ce7ac)[uVar1 * 0x1c] = 0;
      (&DAT_800ce7ae)[uVar1 * 0x1c] = 0;
      (&DAT_800ce7b0)[uVar1 * 0x1c] = 0;
      (&DAT_800ce7b2)[uVar1 * 0x1c] = 0;
      (&DAT_800ce7a6)[uVar1 * 0x1c] = 0;
      SpuSetVoiceAttr((SpuVoiceAttr *)&stack0x00000010);
      DAT_800cefc8 = (undefined2)uVar2;
      _SsVmKeyOffNow(1);
      uVar2 = uVar2 + 1;
    } while ((int)(uVar2 & 0xffff) < (int)DAT_800cefa4);
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


