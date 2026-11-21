/* Function: FUN_8004431c */
/* Address: 8004431c */

void FUN_8004431c(int param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  sVar1 = *(short *)(param_1 + 0x5c);
  iVar6 = *(int *)(param_1 + 0x18c);
  iVar3 = FUN_8003c7dc((int)DAT_800cce6a);
  uVar4 = iVar6 - iVar3;
  if ((uVar4 & 0x800000) == 0) {
    uVar4 = uVar4 & 0x7fffff;
  }
  else {
    uVar4 = uVar4 | 0xff800000;
  }
  if ((int)uVar4 < 0) {
    iVar5 = -0x14a000;
    bVar2 = (int)uVar4 < -0x14a000;
  }
  else {
    iVar5 = 0x14a000;
    bVar2 = 0x14a000 < (int)uVar4;
  }
  if (bVar2) {
    iVar6 = iVar3 + iVar5;
  }
  iVar3 = (int)DAT_800cce70;
  if (iVar3 < 0) {
    iVar5 = iVar3 << 5;
    if (-0x6f < iVar3) goto LAB_800443dc;
    iVar3 = -0x6e;
  }
  else {
    iVar5 = iVar3 << 5;
    if (iVar3 < 0x6f) goto LAB_800443dc;
    iVar3 = 0x6e;
  }
  iVar5 = iVar3 << 5;
LAB_800443dc:
  iVar5 = iVar5 * 4 + iVar3 * -3;
  iVar3 = iVar5 * 4 * (int)sVar1;
  if (0x32 < sVar1) {
    iVar3 = iVar5 * 200;
  }
  uVar4 = iVar6 + iVar3 / 0x32;
  if ((uVar4 & 0x800000) == 0) {
    uVar4 = uVar4 & 0x7fffff;
  }
  else {
    uVar4 = uVar4 | 0xff800000;
  }
  *(uint *)(param_1 + 0x18c) = uVar4;
  return;
}


