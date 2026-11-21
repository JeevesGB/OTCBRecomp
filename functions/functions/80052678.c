/* Function: FUN_80052678 */
/* Address: 80052678 */

void FUN_80052678(int param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + param_2 * 4 + 0xc);
  iVar3 = (int)*(short *)(param_1 + 0x50);
  if (*(short *)(iVar4 + 0xc) < *(short *)(param_1 + 0x4e)) {
    if ((uVar5 & 0x10000) == 0) {
      bVar1 = iVar3 < 0x1e;
      if ((uVar5 & 0x20000) == 0) goto LAB_80052770;
      uVar5 = uVar5 | 0x10000;
    }
    else {
      bVar1 = iVar3 < 0x1e;
      if ((uVar5 & 0x20000) != 0) goto LAB_80052770;
      sVar2 = (short)((int)*(short *)(iVar4 + 10) * (int)*(short *)(g_DisplayParams + 0xe) *
                      (int)*(short *)(param_1 + 0x4a) * ((iVar3 * 0x80) / 0x1e) >> 0x15);
      SsUtKeyOn(*(short *)(param_1 + 0x32),*(short *)(iVar4 + 4),*(short *)(iVar4 + 6),
                *(short *)(iVar4 + 8),0,sVar2,sVar2);
      uVar5 = uVar5 & 0xfffeffff;
      iVar3 = 0;
    }
  }
  bVar1 = iVar3 < 0x1e;
LAB_80052770:
  sVar2 = (short)iVar3;
  if (bVar1) {
    sVar2 = sVar2 + 1;
  }
  *(short *)(param_1 + 0x50) = sVar2;
  *(uint *)(param_1 + 4) = uVar5;
  return;
}


