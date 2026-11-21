/* Function: VM_SEQ_OBJ_470 */
/* Address: 800968ec */

int VM_SEQ_OBJ_470(uint param_1,uint param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int unaff_s1;
  short unaff_s2;
  int unaff_s3;
  int unaff_s4;
  uint unaff_s5;
  short unaff_s6;
  int unaff_s7;
  int unaff_s8;
  
  do {
    uVar4 = param_1 & 0xffff;
    uVar6 = param_2;
    do {
      iVar3 = uVar4 * uVar4;
      iVar1 = (uVar6 & 0xffff) * (uVar6 & 0xffff);
      iVar8 = (int)unaff_s2;
      *(short *)(iVar8 * 0x10 + unaff_s8) =
           (short)((int)((ulonglong)((longlong)iVar3 * (longlong)unaff_s4) >> 0x20) + iVar3 >> 0xd)
           - (short)(iVar3 >> 0x1f);
      (&DAT_800cece2)[iVar8 * 8] =
           (short)((int)((ulonglong)((longlong)iVar1 * (longlong)unaff_s4) >> 0x20) + iVar1 >> 0xd)
           - (short)(iVar1 >> 0x1f);
      (&DAT_800cecc0)[iVar8] = (&DAT_800cecc0)[iVar8] | 3;
      sVar2 = unaff_s2 + 1;
      do {
        do {
          do {
            unaff_s2 = sVar2;
            if ((int)DAT_800cefa4 <= (int)unaff_s2) {
              return (int)unaff_s6;
            }
            uVar6 = (uint)unaff_s2;
            sVar2 = unaff_s2 + 1;
          } while ((DAT_800c3b60 & 1 << (uVar6 & 0x1f)) != 0);
          sVar2 = unaff_s2 + 1;
        } while ((&DAT_800ce790)[uVar6 * 0x1c] != unaff_s6);
        sVar2 = unaff_s2 + 1;
      } while ((int)(short)(&DAT_800ce798)[uVar6 * 0x1c] != (int)*(char *)(unaff_s1 + 0x26));
      _SsVmVSetUp((int)(short)(&DAT_800ce798)[uVar6 * 0x1c],
                  (int)(short)(&DAT_800ce792)[uVar6 * 0x1c]);
      iVar8 = ((short)(&DAT_800ce792)[uVar6 * 0x1c] * 0x10 +
              (int)(short)(&DAT_800ce796)[uVar6 * 0x1c]) * 0x20 + DAT_800cefa0;
      uVar4 = (((int)((uint)*(byte *)(DAT_800cef9c + 0x18) *
                     (((int)(short)(&DAT_800ce788)[uVar6 * 0x1c] *
                      (int)*(short *)((short)(&DAT_800ce78c)[uVar6 * 0x1c] * 2 + unaff_s1 + 0x60)) /
                     0x7f) * 0x3fff) / 0x3f01) *
               (uint)*(byte *)((short)(&DAT_800ce794)[uVar6 * 0x1c] * 0x10 + DAT_800cef94 + 1) *
              (uint)*(byte *)(iVar8 + 2)) / 0x3f01;
      uVar6 = uVar4 * *(ushort *)(unaff_s1 + 0x58);
      uVar4 = uVar4 * *(ushort *)(unaff_s1 + 0x5a);
      iVar3 = (int)((ulonglong)uVar6 * (ulonglong)unaff_s5 >> 0x20);
      iVar1 = (int)((ulonglong)uVar4 * (ulonglong)unaff_s5 >> 0x20);
      uVar7 = iVar3 + (uVar6 - iVar3 >> 1) >> 6;
      uVar5 = (uint)*(byte *)(iVar8 + 3);
      uVar6 = iVar1 + (uVar4 - iVar1 >> 1) >> 6;
      if (uVar5 < 0x40) {
        iVar3 = VM_SEQ_OBJ_324(uVar7,(uVar6 * uVar5) / 0x3f);
        return iVar3;
      }
      uVar5 = (uVar7 * (unaff_s7 - uVar5)) / 0x3f;
      uVar4 = (uint)*(byte *)((short)(&DAT_800ce794)[unaff_s2 * 0x1c] * 0x10 + DAT_800cef94 + 4);
      if (uVar4 < 0x40) {
        iVar3 = (uVar6 & 0xffff) * uVar4;
        iVar3 = VM_SEQ_OBJ_3BC(uVar5,(uint)((int)((ulonglong)((longlong)iVar3 * (longlong)unaff_s3)
                                                 >> 0x20) + iVar3) >> 5);
        return iVar3;
      }
      iVar3 = (uVar5 & 0xffff) * (unaff_s7 - uVar4);
      uVar5 = ((int)((ulonglong)((longlong)iVar3 * (longlong)unaff_s3) >> 0x20) + iVar3 >> 5) -
              (iVar3 >> 0x1f);
      uVar4 = (uint)(byte)(&DAT_800ce78a)[unaff_s2 * 0x38];
      if (uVar4 < 0x40) {
        iVar3 = (uVar6 & 0xffff) * uVar4;
        iVar3 = VM_SEQ_OBJ_440(uVar5,(uint)((int)((ulonglong)((longlong)iVar3 * (longlong)unaff_s3)
                                                 >> 0x20) + iVar3) >> 5);
        return iVar3;
      }
      iVar3 = (uVar5 & 0xffff) * (unaff_s7 - uVar4);
      param_1 = ((int)((ulonglong)((longlong)iVar3 * (longlong)unaff_s3) >> 0x20) + iVar3 >> 5) -
                (iVar3 >> 0x1f);
      uVar4 = param_1 & 0xffff;
    } while (DAT_800cef90 != 1);
    param_2 = param_1;
    if (uVar4 < (uVar6 & 0xffff)) {
      iVar3 = VM_SEQ_OBJ_470(uVar6);
      return iVar3;
    }
  } while( true );
}


