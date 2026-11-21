/* Function: SsUtKeyOnV */
/* Address: 800935ac */

short SsUtKeyOnV(short voice,short vabId,short prog,short tone,short note,short fine,short voll,
                short volr)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  if (DAT_800cdedc == 1) {
    sVar2 = UT_KEYV_OBJ_32C();
    return sVar2;
  }
  DAT_800cdedc = 1;
  if (((ushort)voice < 0x18) && (iVar4 = _SsVmVSetUp((int)vabId,(int)prog), iVar4 == 0)) {
    DAT_800cefc4 = 0x21;
    uVar5 = (uint)voll;
    uVar7 = (uint)volr;
    DAT_800cefb2 = (undefined1)note;
    DAT_800cefb3 = (undefined1)fine;
    DAT_800cefbc = (char)tone;
    DAT_800cefb4 = (char)voll;
    if (uVar5 == uVar7) {
      DAT_800cefb5 = 0x40;
      sVar2 = UT_KEYV_OBJ_158();
      return sVar2;
    }
    if ((int)uVar7 < (int)uVar5) {
      if (uVar5 == 0) {
        trap(0x1c00);
      }
      if ((uVar5 == 0xffffffff) && ((uVar7 & 0x3ffffff) == 0x2000000)) {
        trap(0x1800);
      }
      sVar2 = UT_KEYV_OBJ_154();
      return sVar2;
    }
    if (uVar7 == 0) {
      trap(0x1c00);
    }
    if ((uVar7 == 0xffffffff) && (uVar5 << 6 == -0x80000000)) {
      trap(0x1800);
    }
    DAT_800cefb4 = (char)volr;
    DAT_800cefb5 = '\x7f' - (char)((int)(uVar5 << 6) / (int)uVar7);
    puVar6 = (undefined1 *)(((int)((uint)(ushort)prog << 0x10) >> 0xc) + DAT_800cef94);
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
      iVar4 = (int)voice;
      DAT_800cefc8 = voice;
      (&DAT_800ce790)[iVar4 * 0x1c] = 0x21;
      (&DAT_800ce798)[iVar4 * 0x1c] = vabId;
      cVar1 = DAT_800cefb7;
      (&DAT_800ce794)[iVar4 * 0x1c] = prog;
      (&DAT_800ce792)[iVar4 * 0x1c] = (short)cVar1;
      (&DAT_800ce780)[iVar4 * 0x1c] = DAT_800cefc6;
      cVar1 = DAT_800cefbc;
      (&DAT_800ce78e)[iVar4 * 0x1c] = note;
      (&DAT_800ce79d)[iVar4 * 0x38] = 1;
      (&DAT_800ce782)[iVar4 * 0x1c] = 0;
      (&DAT_800ce796)[iVar4 * 0x1c] = (short)cVar1;
      (&DAT_800ce7b6)[iVar4 * 0x1c] = (short)DAT_800cefb4;
      _SsVmDoAllocate();
      if (DAT_800cefc6 == 0xff) {
        vmNoiseOn(voice & 0xff);
        sVar2 = UT_KEYV_OBJ_31C();
        return sVar2;
      }
      uVar3 = note2pitch2(note,fine);
      _SsVmKeyOnNow(1,uVar3);
      DAT_800cdedc = 0;
      return voice;
    }
  }
  DAT_800cdedc = 0;
  sVar2 = UT_KEYV_OBJ_32C();
  return sVar2;
}


