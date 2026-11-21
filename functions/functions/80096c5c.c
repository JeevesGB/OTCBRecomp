/* Function: _SsVmSetVol */
/* Address: 80096c5c */

int _SsVmSetVol(uint param_1,short param_2,short param_3,ushort param_4,ushort param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  
  iVar14 = 0;
  sVar1 = (short)param_1;
  iVar11 = (int)param_3;
  uVar13 = (uint)param_5;
  iVar12 = (&DAT_800cdee8)[param_1 & 0xff] + ((int)((int)sVar1 & 0xff00U) >> 8) * 0xb0;
  _SsVmVSetUp((int)param_2,iVar11);
  if (uVar13 == 0) {
    uVar13 = 1;
  }
  if (param_4 == 0) {
    param_4 = 1;
  }
  iVar10 = 0;
  DAT_800cefc4 = sVar1;
  if ('\0' < DAT_800cefa4) {
    iVar3 = 0;
    do {
      uVar6 = iVar3 >> 0x10;
      if (((((DAT_800c3b60 & 1 << (uVar6 & 0x1f)) == 0) &&
           ((int)(short)(&DAT_800ce790)[uVar6 * 0x1c] == (int)sVar1)) &&
          ((short)(&DAT_800ce794)[uVar6 * 0x1c] == iVar11)) &&
         ((int)(short)(&DAT_800ce798)[uVar6 * 0x1c] == (int)param_2)) {
        iVar3 = (uint)*(byte *)(iVar12 + 0x17) * 2 + iVar12;
        uVar6 = (uint)*(short *)(iVar3 + 0x60);
        if ((uVar6 != param_4) && (uVar6 == 0)) {
          *(undefined2 *)(iVar3 + 0x60) = 1;
        }
        sVar2 = (short)iVar10;
        iVar3 = (int)sVar2;
        iVar8 = ((short)(&DAT_800ce792)[iVar3 * 0x1c] * 0x10 +
                (int)(short)(&DAT_800ce796)[iVar3 * 0x1c]) * 0x20 + DAT_800cefa0;
        uVar7 = (((int)(((int)((int)(short)(&DAT_800ce788)[iVar3 * 0x1c] * (uint)param_4) / 0x7f) *
                       (uint)*(byte *)(DAT_800cef9c + 0x18) * 0x3fff) / 0x3f01) *
                 (uint)*(byte *)(iVar11 * 0x10 + DAT_800cef94 + 1) * (uint)*(byte *)(iVar8 + 2)) /
                0x3f01;
        uVar9 = (uVar7 * *(ushort *)(iVar12 + 0x58)) / 0x7f;
        uVar6 = (uint)*(byte *)(iVar8 + 3);
        uVar7 = (uVar7 * *(ushort *)(iVar12 + 0x5a)) / 0x7f;
        if (uVar6 < 0x40) {
          iVar11 = VM_VOL_OBJ_390(uVar7,(uVar7 * uVar6) / 0x3f,uVar9);
          return iVar11;
        }
        uVar4 = (uint)*(byte *)((short)(&DAT_800ce794)[sVar2 * 0x1c] * 0x10 + DAT_800cef94 + 4);
        if (uVar4 < 0x40) {
          iVar11 = VM_VOL_OBJ_428(uVar7,(uVar7 * uVar4) / 0x3f);
          return iVar11;
        }
        uVar5 = uVar13 & 0xff;
        if (uVar5 < 0x40) {
          iVar11 = VM_VOL_OBJ_48C(uVar7,(uVar7 * uVar5) / 0x3f);
          return iVar11;
        }
        uVar9 = (((((uVar9 * (0x7f - uVar6)) / 0x3f) * (0x7f - uVar4)) / 0x3f) * (0x7f - uVar5)) /
                0x3f;
        uVar6 = uVar7;
        if ((DAT_800cef90 == 1) && (uVar6 = uVar9, uVar9 < uVar7)) {
          iVar11 = VM_VOL_OBJ_4B8(uVar7,uVar7,uVar7);
          return iVar11;
        }
        iVar3 = (int)sVar2;
        (&DAT_800cece0)[iVar3 * 8] = (short)((uVar9 * uVar9) / 0x3fff);
        (&DAT_800cece2)[iVar3 * 8] = (short)((uVar6 * uVar6) / 0x3fff);
        iVar14 = iVar14 + 1;
        (&DAT_800cecc0)[iVar3] = (&DAT_800cecc0)[iVar3] | 3;
      }
      iVar10 = iVar10 + 1;
      iVar3 = iVar10 * 0x10000;
    } while (iVar10 * 0x10000 >> 0x10 < (int)DAT_800cefa4);
  }
  return iVar14;
}


