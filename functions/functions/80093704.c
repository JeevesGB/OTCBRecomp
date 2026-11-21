/* Function: UT_KEYV_OBJ_158 */
/* Address: 80093704 */

int UT_KEYV_OBJ_158(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 *puVar4;
  ushort unaff_s2;
  undefined2 unaff_s5;
  ushort unaff_s7;
  undefined2 in_stack_00000010;
  
  puVar4 = (undefined1 *)(((int)((uint)unaff_s7 << 0x10) >> 0xc) + DAT_800cef94);
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
  if (DAT_800cefc6 == 0) {
    DAT_800cdedc = 0;
    iVar3 = UT_KEYV_OBJ_32C();
    return iVar3;
  }
  iVar3 = (int)(short)unaff_s2;
  DAT_800cefc8 = unaff_s2;
  (&DAT_800ce790)[iVar3 * 0x1c] = 0x21;
  (&DAT_800ce798)[iVar3 * 0x1c] = in_stack_00000010;
  cVar1 = DAT_800cefb7;
  (&DAT_800ce794)[iVar3 * 0x1c] = unaff_s7;
  (&DAT_800ce792)[iVar3 * 0x1c] = (short)cVar1;
  (&DAT_800ce780)[iVar3 * 0x1c] = DAT_800cefc6;
  cVar1 = DAT_800cefbc;
  (&DAT_800ce78e)[iVar3 * 0x1c] = unaff_s5;
  (&DAT_800ce79d)[iVar3 * 0x38] = 1;
  (&DAT_800ce782)[iVar3 * 0x1c] = 0;
  (&DAT_800ce796)[iVar3 * 0x1c] = (short)cVar1;
  (&DAT_800ce7b6)[iVar3 * 0x1c] = (short)DAT_800cefb4;
  _SsVmDoAllocate();
  if (DAT_800cefc6 == 0xff) {
    vmNoiseOn(unaff_s2 & 0xff);
    iVar3 = UT_KEYV_OBJ_31C();
    return iVar3;
  }
  uVar2 = note2pitch2();
  _SsVmKeyOnNow(1,uVar2);
  DAT_800cdedc = 0;
  return (int)(short)unaff_s2;
}


