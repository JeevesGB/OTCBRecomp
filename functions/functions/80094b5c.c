/* Function: _SsVmKeyOn */
/* Address: 80094b5c */

undefined4
_SsVmKeyOn(uint param_1,short param_2,short param_3,undefined2 param_4,ushort param_5,
          undefined1 param_6)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  byte local_138 [128];
  char local_b8 [128];
  short local_38;
  int local_30;
  
  sVar2 = (short)param_1;
  iVar10 = (&DAT_800cdee8)[param_1 & 0xff] + ((int)((int)sVar2 & 0xff00U) >> 8) * 0xb0;
  local_38 = param_3;
  iVar4 = _SsVmVSetUp((int)param_2,(int)param_3);
  uVar5 = 0xffffffff;
  if (iVar4 == 0) {
    DAT_800cefb2 = (undefined1)param_4;
    DAT_800cefb3 = 0;
    DAT_800cefc4 = sVar2;
    if ((int)sVar2 == 0x21) {
      DAT_800cefb4 = (char)param_5;
      uVar5 = VM_KEY_OBJ_110();
      return uVar5;
    }
    DAT_800cefb4 = (char)((int)((uint)param_5 *
                               (int)*(short *)((uint)*(byte *)(iVar10 + 0x17) * 2 + iVar10 + 0x60))
                         / 0x7f);
    DAT_800cefb5 = param_6;
    puVar6 = (undefined1 *)(local_38 * 0x10 + DAT_800cef94);
    DAT_800cefba = puVar6[1];
    DAT_800cefbb = puVar6[4];
    DAT_800cefb0 = *puVar6;
    uVar5 = 0xffffffff;
    if ((int)DAT_800cefb7 < (int)(uint)*(ushort *)(DAT_800cef9c + 0x12)) {
      if (param_5 == 0) {
        _SsVmKeyOff((int)sVar2,(int)param_2,(int)local_38,param_4);
        uVar5 = VM_KEY_OBJ_4E8();
        return uVar5;
      }
      bVar1 = _SsVmSelectToneAndVag(local_b8,local_138);
      bVar9 = 0;
      uVar5 = 0;
      if (bVar1 != 0) {
        local_30 = (int)sVar2;
        uVar8 = 0;
        do {
          DAT_800cefc6 = (ushort)local_138[uVar8];
          DAT_800cefbc = local_b8[uVar8];
          pcVar7 = (char *)(((int)DAT_800cefbc + DAT_800cefb7 * 0x10 & 0xffffU) * 0x20 +
                           DAT_800cefa0);
          DAT_800cefbf = *pcVar7;
          DAT_800cefbd = pcVar7[2];
          DAT_800cefbe = pcVar7[3];
          DAT_800cefc0 = pcVar7[4];
          DAT_800cefc1 = pcVar7[5];
          DAT_800cefc2 = pcVar7[1];
          uVar8 = _SsVmAlloc(0);
          uVar8 = uVar8 & 0xff;
          DAT_800cefc8 = (short)uVar8;
          if ((int)uVar8 < (int)DAT_800cefa4) {
            (&DAT_800ce79d)[uVar8 * 0x38] = 1;
            (&DAT_800ce782)[DAT_800cefc8 * 0x1c] = 0;
            (&DAT_800ce790)[DAT_800cefc8 * 0x1c] = sVar2;
            (&DAT_800ce798)[DAT_800cefc8 * 0x1c] = (short)DAT_800cefb1;
            (&DAT_800ce792)[DAT_800cefc8 * 0x1c] = (short)DAT_800cefb7;
            (&DAT_800ce794)[DAT_800cefc8 * 0x1c] = local_38;
            if (local_30 != 0x21) {
              (&DAT_800ce788)[DAT_800cefc8 * 0x1c] = param_5;
              (&DAT_800ce78c)[DAT_800cefc8 * 0x1c] = (ushort)*(byte *)(iVar10 + 0x17);
            }
            (&DAT_800ce78a)[DAT_800cefc8 * 0x38] = param_6;
            (&DAT_800ce7b6)[DAT_800cefc8 * 0x1c] = (short)DAT_800cefb4;
            (&DAT_800ce796)[DAT_800cefc8 * 0x1c] = (short)DAT_800cefbc;
            (&DAT_800ce78e)[DAT_800cefc8 * 0x1c] = param_4;
            (&DAT_800ce79a)[DAT_800cefc8 * 0x1c] = (short)DAT_800cefbf;
            (&DAT_800ce780)[DAT_800cefc8 * 0x1c] = DAT_800cefc6;
            _SsVmDoAllocate();
            if (DAT_800cefc6 != 0xff) {
              uVar3 = note2pitch();
              _SsVmKeyOnNow(bVar1,uVar3);
              uVar5 = VM_KEY_OBJ_4D0();
              return uVar5;
            }
            vmNoiseOn((undefined1)DAT_800cefc8);
            uVar5 = VM_KEY_OBJ_4B4();
            return uVar5;
          }
          uVar5 = 0xffffffff;
          bVar9 = bVar9 + 1;
          uVar8 = (uint)bVar9;
        } while (bVar9 < bVar1);
      }
    }
  }
  return uVar5;
}


