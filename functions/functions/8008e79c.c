/* Function: _SsSndCrescendo */
/* Address: 8008e79c */

void _SsSndCrescendo(ushort param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort local_28;
  ushort local_26 [3];
  
  iVar5 = *(int *)((int)&DAT_800cdee8 + ((int)((uint)param_1 << 0x10) >> 0xe)) +
          (short)param_2 * 0xb0;
  iVar1 = *(int *)(iVar5 + 0x9c);
  iVar2 = *(int *)(iVar5 + 0xa0) + 1;
  *(int *)(iVar5 + 0xa0) = iVar2;
  if (iVar2 <= iVar1) {
    iVar2 = *(short *)(iVar5 + 0x48) * iVar2;
    if (iVar1 == 0) {
      trap(0x1c00);
    }
    if ((iVar1 == -1) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    iVar2 = iVar2 / iVar1 - (int)*(short *)(iVar5 + 0x4a);
    if (iVar2 != 0) {
      iVar1 = (int)(short)(param_1 | (ushort)(param_2 << 8));
      *(short *)(iVar5 + 0x4a) = *(short *)(iVar5 + 0x4a) + (short)iVar2;
      _SsVmGetSeqVol(iVar1,&local_28,local_26);
      uVar4 = (uint)local_28 + iVar2;
      if (0x7f < (int)uVar4) {
        uVar4 = 0x7f;
      }
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      uVar3 = (uint)local_26[0] + iVar2;
      if (0x7f < (int)uVar3) {
        uVar3 = 0x7f;
      }
      if ((int)uVar3 < 0) {
        uVar3 = 0;
      }
      _SsVmSetSeqVol(iVar1,uVar4 & 0xffff,uVar3 & 0xffff,1);
      if (((uVar4 == 0x7f) && (uVar3 == 0x7f)) || ((uVar4 == 0 && (uVar3 == 0)))) {
        iVar2 = (short)param_2 * 0xb0 +
                *(int *)((int)&DAT_800cdee8 + ((int)((uint)param_1 << 0x10) >> 0xe));
        *(uint *)(iVar2 + 0x98) = *(uint *)(iVar2 + 0x98) & 0xffffffef;
      }
    }
    _SsVmGetSeqVol((int)(short)(param_1 | (ushort)(param_2 << 8)),iVar5 + 0x5c,iVar5 + 0x5e);
    return;
  }
  CRES_OBJ_1B8();
  return;
}


