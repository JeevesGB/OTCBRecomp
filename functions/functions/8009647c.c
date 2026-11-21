/* Function: _SsVmSetSeqVol */
/* Address: 8009647c */

int _SsVmSetSeqVol(uint param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = (&DAT_800cdee8)[param_1 & 0xff] + ((int)(param_1 & 0xff00) >> 8) * 0xb0;
  *(undefined2 *)(iVar6 + 0x58) = param_2;
  *(undefined2 *)(iVar6 + 0x5a) = param_3;
  if (0x7e < *(ushort *)(iVar6 + 0x58)) {
    *(undefined2 *)(iVar6 + 0x58) = 0x7f;
  }
  if (0x7e < *(ushort *)(iVar6 + 0x5a)) {
    *(undefined2 *)(iVar6 + 0x5a) = 0x7f;
  }
  iVar7 = 0;
  if ('\0' < DAT_800cefa4) {
    iVar1 = 0;
    do {
      uVar3 = iVar1 >> 0x10;
      if ((((DAT_800c3b60 & 1 << (uVar3 & 0x1f)) == 0) &&
          ((&DAT_800ce790)[uVar3 * 0x1c] == (short)param_1)) &&
         ((int)(short)(&DAT_800ce798)[uVar3 * 0x1c] == (int)*(char *)(iVar6 + 0x26))) {
        _SsVmVSetUp((int)(short)(&DAT_800ce798)[uVar3 * 0x1c],
                    (int)(short)(&DAT_800ce792)[uVar3 * 0x1c]);
        iVar1 = ((short)(&DAT_800ce792)[uVar3 * 0x1c] * 0x10 +
                (int)(short)(&DAT_800ce796)[uVar3 * 0x1c]) * 0x20 + DAT_800cefa0;
        uVar5 = (((int)((uint)*(byte *)(DAT_800cef9c + 0x18) *
                       (((int)(short)(&DAT_800ce788)[uVar3 * 0x1c] *
                        (int)*(short *)((short)(&DAT_800ce78c)[uVar3 * 0x1c] * 2 + iVar6 + 0x60)) /
                       0x7f) * 0x3fff) / 0x3f01) *
                 (uint)*(byte *)((short)(&DAT_800ce794)[uVar3 * 0x1c] * 0x10 + DAT_800cef94 + 1) *
                (uint)*(byte *)(iVar1 + 2)) / 0x3f01;
        uVar4 = (uVar5 * *(ushort *)(iVar6 + 0x58)) / 0x7f;
        uVar3 = (uint)*(byte *)(iVar1 + 3);
        uVar5 = (uVar5 * *(ushort *)(iVar6 + 0x5a)) / 0x7f;
        if (uVar3 < 0x40) {
          iVar6 = VM_SEQ_OBJ_324(uVar4,(uVar5 * uVar3) / 0x3f);
          return iVar6;
        }
        uVar4 = (uVar4 * (0x7f - uVar3)) / 0x3f;
        sVar2 = (short)iVar7;
        uVar3 = (uint)*(byte *)((short)(&DAT_800ce794)[sVar2 * 0x1c] * 0x10 + DAT_800cef94 + 4);
        if (uVar3 < 0x40) {
          iVar6 = VM_SEQ_OBJ_3BC(uVar4,(uint)((ulonglong)
                                              ((longlong)(int)((uVar5 & 0xffff) * uVar3) *
                                              0x82082083) >> 0x25));
          return iVar6;
        }
        uVar3 = (int)((uVar4 & 0xffff) * (0x7f - uVar3)) / 0x3f;
        uVar4 = (uint)(byte)(&DAT_800ce78a)[sVar2 * 0x38];
        if (uVar4 < 0x40) {
          iVar6 = VM_SEQ_OBJ_440(uVar3,(uint)((ulonglong)
                                              ((longlong)(int)((uVar5 & 0xffff) * uVar4) *
                                              0x82082083) >> 0x25));
          return iVar6;
        }
        uVar3 = (int)((uVar3 & 0xffff) * (0x7f - uVar4)) / 0x3f;
        uVar4 = uVar5;
        if ((DAT_800cef90 == 1) && (uVar4 = uVar3, (uVar3 & 0xffff) < (uVar5 & 0xffff))) {
          iVar6 = VM_SEQ_OBJ_470(uVar5);
          return iVar6;
        }
        iVar1 = (int)sVar2;
        (&DAT_800cece0)[iVar1 * 8] = (short)((int)((uVar3 & 0xffff) * (uVar3 & 0xffff)) / 0x3fff);
        (&DAT_800cece2)[iVar1 * 8] = (short)((int)((uVar4 & 0xffff) * (uVar4 & 0xffff)) / 0x3fff);
        (&DAT_800cecc0)[iVar1] = (&DAT_800cecc0)[iVar1] | 3;
      }
      iVar7 = iVar7 + 1;
      iVar1 = iVar7 * 0x10000;
    } while (iVar7 * 0x10000 >> 0x10 < (int)DAT_800cefa4);
  }
  return (int)(short)param_1;
}


