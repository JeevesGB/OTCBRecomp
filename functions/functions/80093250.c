/* Function: UT_KEY_OBJ_144 */
/* Address: 80093250 */

uint UT_KEY_OBJ_144(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined1 in_v0;
  undefined2 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 unaff_s5;
  ushort unaff_s6;
  undefined2 unaff_s8;
  
  *(undefined1 *)(param_2 + -0xf) = in_v0;
  puVar4 = (undefined1 *)(((int)((uint)unaff_s6 << 0x10) >> 0xc) + DAT_800cef94);
  DAT_800cefba = puVar4[1];
  DAT_800cefbb = puVar4[4];
  DAT_800cefb0 = *puVar4;
  puVar4 = (undefined1 *)
           ((((int)DAT_800cefbc + DAT_800cefb7 * 0x10) * 0x10000 >> 0xb) + DAT_800cefa0);
  DAT_800cefbf = *puVar4;
  DAT_800cefc6 = *(short *)(puVar4 + 0x16);
  DAT_800cefbd = puVar4[2];
  DAT_800cefbe = puVar4[3];
  DAT_800cefc0 = puVar4[4];
  DAT_800cefc1 = puVar4[5];
  DAT_800cefc2 = puVar4[1];
  if (DAT_800cefc6 != 0) {
    uVar3 = _SsVmAlloc();
    uVar3 = uVar3 & 0xff;
    if (uVar3 != (int)DAT_800cefa4) {
      DAT_800cefc8 = (undefined2)uVar3;
      (&DAT_800ce790)[uVar3 * 0x1c] = 0x21;
      (&DAT_800ce798)[uVar3 * 0x1c] = unaff_s8;
      cVar1 = DAT_800cefb7;
      (&DAT_800ce794)[uVar3 * 0x1c] = unaff_s6;
      (&DAT_800ce792)[uVar3 * 0x1c] = (short)cVar1;
      (&DAT_800ce780)[uVar3 * 0x1c] = DAT_800cefc6;
      cVar1 = DAT_800cefbc;
      (&DAT_800ce78e)[uVar3 * 0x1c] = unaff_s5;
      (&DAT_800ce796)[uVar3 * 0x1c] = (short)cVar1;
      cVar1 = DAT_800cefb4;
      (&DAT_800ce79d)[uVar3 * 0x38] = 1;
      (&DAT_800ce782)[uVar3 * 0x1c] = 0;
      (&DAT_800ce7b6)[uVar3 * 0x1c] = (short)cVar1;
      _SsVmDoAllocate();
      if (DAT_800cefc6 == 0xff) {
        vmNoiseOn(uVar3);
        uVar3 = UT_KEY_OBJ_31C();
        return uVar3;
      }
      uVar2 = note2pitch2(unaff_s5);
      _SsVmKeyOnNow(1,uVar2);
      DAT_800cdedc = 0;
      return uVar3;
    }
  }
  DAT_800cdedc = 0;
  uVar3 = UT_KEY_OBJ_328();
  return uVar3;
}


