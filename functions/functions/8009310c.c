/* Function: SsUtKeyOn */
/* Address: 8009310c */

short SsUtKeyOn(short param_1,short param_2,short param_3,short param_4,short param_5,short param_6,
               short param_7)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  if (DAT_800cdedc == 1) {
    sVar2 = UT_KEY_OBJ_328();
    return sVar2;
  }
  DAT_800cdedc = 1;
  iVar4 = _SsVmVSetUp((int)param_1,(int)param_2);
  if (iVar4 == 0) {
    DAT_800cefc4 = 0x21;
    uVar5 = (uint)param_6;
    uVar7 = (uint)param_7;
    DAT_800cefb2 = (undefined1)param_4;
    DAT_800cefb3 = (undefined1)param_5;
    DAT_800cefbc = (char)param_3;
    DAT_800cefb4 = (char)param_6;
    if (uVar5 == uVar7) {
      DAT_800cefb5 = 0x40;
      sVar2 = UT_KEY_OBJ_148();
      return sVar2;
    }
    if ((int)uVar7 < (int)uVar5) {
      if (uVar5 == 0) {
        trap(0x1c00);
      }
      if ((uVar5 == 0xffffffff) && ((uVar7 & 0x3ffffff) == 0x2000000)) {
        trap(0x1800);
      }
      sVar2 = UT_KEY_OBJ_144();
      return sVar2;
    }
    if (uVar7 == 0) {
      trap(0x1c00);
    }
    if ((uVar7 == 0xffffffff) && (uVar5 << 6 == -0x80000000)) {
      trap(0x1800);
    }
    DAT_800cefb4 = (char)param_7;
    DAT_800cefb5 = '\x7f' - (char)((int)(uVar5 << 6) / (int)uVar7);
    puVar6 = (undefined1 *)(((int)((uint)(ushort)param_2 << 0x10) >> 0xc) + DAT_800cef94);
    DAT_800cefba = puVar6[1];
    DAT_800cefbb = puVar6[4];
    DAT_800cefb0 = *puVar6;
    puVar6 = (undefined1 *)
             ((((int)DAT_800cefbc + DAT_800cefb7 * 0x10) * 0x10000 >> 0xb) + DAT_800cefa0);
    DAT_800cefbf = *puVar6;
    DAT_800cefc6 = *(short *)(puVar6 + 0x16);
    DAT_800cefbd = puVar6[2];
    DAT_800cefbe = puVar6[3];
    DAT_800cefc0 = puVar6[4];
    DAT_800cefc1 = puVar6[5];
    DAT_800cefc2 = puVar6[1];
    if (DAT_800cefc6 != 0) {
      uVar5 = _SsVmAlloc();
      uVar5 = uVar5 & 0xff;
      if (uVar5 != (int)DAT_800cefa4) {
        DAT_800cefc8 = (short)uVar5;
        (&DAT_800ce790)[uVar5 * 0x1c] = 0x21;
        (&DAT_800ce798)[uVar5 * 0x1c] = param_1;
        cVar1 = DAT_800cefb7;
        (&DAT_800ce794)[uVar5 * 0x1c] = param_2;
        (&DAT_800ce792)[uVar5 * 0x1c] = (short)cVar1;
        (&DAT_800ce780)[uVar5 * 0x1c] = DAT_800cefc6;
        cVar1 = DAT_800cefbc;
        (&DAT_800ce78e)[uVar5 * 0x1c] = param_4;
        (&DAT_800ce796)[uVar5 * 0x1c] = (short)cVar1;
        cVar1 = DAT_800cefb4;
        (&DAT_800ce79d)[uVar5 * 0x38] = 1;
        (&DAT_800ce782)[uVar5 * 0x1c] = 0;
        (&DAT_800ce7b6)[uVar5 * 0x1c] = (short)cVar1;
        _SsVmDoAllocate();
        if (DAT_800cefc6 == 0xff) {
          vmNoiseOn(uVar5);
          sVar2 = UT_KEY_OBJ_31C();
          return sVar2;
        }
        uVar3 = note2pitch2(param_4,param_5);
        _SsVmKeyOnNow(1,uVar3);
        DAT_800cdedc = 0;
        return (short)uVar5;
      }
    }
  }
  DAT_800cdedc = 0;
  sVar2 = UT_KEY_OBJ_328();
  return sVar2;
}


