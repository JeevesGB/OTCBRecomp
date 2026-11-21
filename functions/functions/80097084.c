/* Function: VM_VOL_OBJ_428 */
/* Address: 80097084 */

int VM_VOL_OBJ_428(uint param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  short in_t1;
  uint in_t2;
  uint in_t3;
  uint in_t4;
  int in_t5;
  int in_t6;
  int in_t7;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  int unaff_s7;
  int in_t9;
  
  while( true ) {
    uVar5 = unaff_s6 & 0xff;
    if (uVar5 < 0x40) {
      iVar2 = (int)((ulonglong)(param_2 * uVar5) * (ulonglong)in_t2 >> 0x20);
      iVar2 = VM_VOL_OBJ_48C(param_1,iVar2 + (param_2 * uVar5 - iVar2 >> 1) >> 5);
      return iVar2;
    }
    param_3 = param_3 * (in_t6 - uVar5);
    iVar2 = (int)((ulonglong)param_3 * (ulonglong)in_t2 >> 0x20);
    uVar7 = iVar2 + (param_3 - iVar2 >> 1) >> 5;
    uVar5 = param_2;
    if ((DAT_800cef90 == in_t7) && (uVar5 = uVar7, uVar7 < param_2)) {
      iVar2 = VM_VOL_OBJ_4B8(param_1,param_2,param_2);
      return iVar2;
    }
    iVar2 = (int)((ulonglong)(uVar7 * uVar7) * (ulonglong)in_t3 >> 0x20);
    iVar3 = (int)((ulonglong)(uVar5 * uVar5) * (ulonglong)in_t3 >> 0x20);
    iVar6 = (int)in_t1;
    *(short *)(iVar6 * 0x10 + unaff_s0) = (short)(iVar2 + (uVar7 * uVar7 - iVar2 >> 1) >> 0xd);
    *(short *)(iVar6 * 0x10 + unaff_s3) = (short)(iVar3 + (uVar5 * uVar5 - iVar3 >> 1) >> 0xd);
    unaff_s7 = unaff_s7 + 1;
    (&DAT_800cecc0)[iVar6] = (&DAT_800cecc0)[iVar6] | 3;
    sVar1 = in_t1 + 1;
    do {
      do {
        in_t1 = sVar1;
        if ((int)DAT_800cefa4 <= (int)in_t1) {
          return unaff_s7;
        }
        uVar5 = (uint)in_t1;
        sVar1 = in_t1 + 1;
      } while ((DAT_800c3b60 & in_t7 << (uVar5 & 0x1f)) != 0);
      sVar1 = in_t1 + 1;
    } while ((((short)(&DAT_800ce790)[uVar5 * 0x1c] != param_5) ||
             (sVar1 = in_t1 + 1, (short)(&DAT_800ce794)[uVar5 * 0x1c] != in_t5)) ||
            (sVar1 = in_t1 + 1, (short)(&DAT_800ce798)[uVar5 * 0x1c] != in_t9));
    iVar2 = (uint)*(byte *)(unaff_s4 + 0x17) * 2 + unaff_s4;
    iVar3 = (int)*(short *)(iVar2 + 0x60);
    if ((iVar3 != param_4) && (iVar3 == 0)) {
      *(short *)(iVar2 + 0x60) = (short)in_t7;
    }
    iVar3 = (int)in_t1;
    iVar2 = (short)(&DAT_800ce788)[iVar3 * 0x1c] * param_4;
    iVar2 = (((int)((ulonglong)((longlong)iVar2 * (longlong)unaff_s5) >> 0x20) + iVar2 >> 6) -
            (iVar2 >> 0x1f)) * (uint)*(byte *)(DAT_800cef9c + 0x18) * 0x3fff;
    iVar6 = ((short)(&DAT_800ce792)[iVar3 * 0x1c] * 0x10 + (int)(short)(&DAT_800ce796)[iVar3 * 0x1c]
            ) * 0x20 + DAT_800cefa0;
    uVar7 = ((((int)((ulonglong)((longlong)iVar2 * (longlong)unaff_s2) >> 0x20) + iVar2 >> 0xd) -
             (iVar2 >> 0x1f)) * (uint)*(byte *)(unaff_s1 + DAT_800cef94 + 1) *
            (uint)*(byte *)(iVar6 + 2)) / 0x3f01;
    uVar5 = uVar7 * *(ushort *)(unaff_s4 + 0x58);
    uVar7 = uVar7 * *(ushort *)(unaff_s4 + 0x5a);
    iVar2 = (int)((ulonglong)uVar5 * (ulonglong)in_t4 >> 0x20);
    iVar3 = (int)((ulonglong)uVar7 * (ulonglong)in_t4 >> 0x20);
    uVar5 = iVar2 + (uVar5 - iVar2 >> 1) >> 6;
    uVar4 = (uint)*(byte *)(iVar6 + 3);
    param_1 = iVar3 + (uVar7 - iVar3 >> 1) >> 6;
    if (uVar4 < 0x40) break;
    uVar5 = uVar5 * (in_t6 - uVar4);
    iVar2 = (int)((ulonglong)uVar5 * (ulonglong)in_t2 >> 0x20);
    uVar7 = (uint)*(byte *)((short)(&DAT_800ce794)[in_t1 * 0x1c] * 0x10 + DAT_800cef94 + 4);
    if (uVar7 < 0x40) {
      iVar2 = (int)((ulonglong)(param_1 * uVar7) * (ulonglong)in_t2 >> 0x20);
      iVar2 = VM_VOL_OBJ_428(param_1,iVar2 + (param_1 * uVar7 - iVar2 >> 1) >> 5);
      return iVar2;
    }
    uVar5 = (iVar2 + (uVar5 - iVar2 >> 1) >> 5) * (in_t6 - uVar7);
    iVar2 = (int)((ulonglong)uVar5 * (ulonglong)in_t2 >> 0x20);
    param_3 = iVar2 + (uVar5 - iVar2 >> 1) >> 5;
    param_2 = param_1;
  }
  iVar2 = (int)((ulonglong)(param_1 * uVar4) * (ulonglong)in_t2 >> 0x20);
  iVar2 = VM_VOL_OBJ_390(param_1,iVar2 + (param_1 * uVar4 - iVar2 >> 1) >> 5,uVar5);
  return iVar2;
}


