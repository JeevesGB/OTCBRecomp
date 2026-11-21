/* Function: _SsVmPBVoice */
/* Address: 8009602c */

undefined4 _SsVmPBVoice(short param_1,short param_2,short param_3,short param_4,int param_5)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = (int)param_1;
  uVar2 = 0;
  if ((((&DAT_800ce790)[iVar4 * 0x1c] == param_2) &&
      (uVar2 = 0, (&DAT_800ce798)[iVar4 * 0x1c] == param_3)) &&
     (uVar2 = 0, (&DAT_800ce794)[iVar4 * 0x1c] == param_4)) {
    uVar6 = (uint)(ushort)(&DAT_800ce78e)[iVar4 * 0x1c];
    uVar3 = (uint)(ushort)(&DAT_800ce796)[iVar4 * 0x1c] + DAT_800cefb7 * 0x10;
    iVar4 = (param_5 + -0x40) * 0x10000 >> 0x10;
    if (0 < iVar4) {
      iVar4 = iVar4 * (uint)*(byte *)((uVar3 & 0xffff) * 0x20 + DAT_800cefa0 + 0xd);
      iVar5 = iVar4 % 0x3f;
      uVar2 = VM_PB_OBJ_16C(iVar5,iVar5 * 2,uVar6 + iVar4 / 0x3f);
      return uVar2;
    }
    if (iVar4 < 0) {
      iVar4 = iVar4 * (uint)*(byte *)((uVar3 & 0xffff) * 0x20 + DAT_800cefa0 + 0xc);
      iVar5 = iVar4;
      if (iVar4 < 0) {
        iVar5 = iVar4 + 0x3f;
      }
      uVar2 = VM_PB_OBJ_16C(iVar4,(iVar4 + (iVar5 >> 6) * -0x40) * 2 + 0x7f,
                            uVar6 + (iVar5 >> 6) + -1);
      return uVar2;
    }
    iVar4 = (int)param_1;
    DAT_800cefbc = *(undefined1 *)(&DAT_800ce796 + iVar4 * 0x1c);
    DAT_800cefc8 = param_1;
    uVar1 = note2pitch2(uVar6,0);
    (&DAT_800cece4)[iVar4 * 8] = uVar1;
    (&DAT_800cecc0)[iVar4] = (&DAT_800cecc0)[iVar4] | 4;
    uVar2 = 1;
  }
  return uVar2;
}


