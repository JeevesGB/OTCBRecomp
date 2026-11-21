/* Function: SsPitchFromNote */
/* Address: 800953c0 */

ushort SsPitchFromNote(short param_1,short param_2,uchar param_3,uchar param_4)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  
  iVar7 = (int)(((uint)param_4 + (uint)(ushort)param_2) * 0x10000) >> 0x10;
  iVar3 = iVar7;
  if (iVar7 < 0) {
    iVar3 = iVar7 + 0x7f;
  }
  sVar4 = (param_1 + (short)(iVar3 >> 7)) - (ushort)param_3;
  iVar7 = iVar7 + (iVar3 >> 7) * -0x80;
  if (iVar7 * 0x10000 < 0) {
    iVar7 = iVar7 + 0x80;
    iVar3 = iVar7 * 0x10000 >> 0x10;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x7f;
    }
    sVar4 = sVar4 + -1 + (short)(iVar3 >> 7);
  }
  sVar6 = sVar4 / 0xc + -2;
  iVar5 = (int)sVar4 % 0xc;
  iVar3 = iVar5;
  if (iVar5 * 0x10000 < 0) {
    iVar3 = iVar5 + 0xc;
    sVar6 = sVar4 / 0xc + -3;
  }
  if (-1 < sVar6) {
    uVar2 = VM_N2P_OBJ_1CC(iVar5,0x3fff);
    return uVar2;
  }
  uVar1 = -(int)sVar6;
  return (ushort)((uint)(((int)((uint)*(ushort *)(&DAT_800c3bb0 + ((iVar3 << 0x10) >> 0xf)) *
                               (uint)*(ushort *)((int)&PTR_DAT_800c3bc8 + ((iVar7 << 0x10) >> 0xf)))
                         >> 0x10) + (1 << (uVar1 - 1 & 0x1f))) >> (uVar1 & 0x1f));
}


