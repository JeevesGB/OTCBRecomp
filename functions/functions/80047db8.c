/* Function: FUN_80047db8 */
/* Address: 80047db8 */

void FUN_80047db8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x60) >> 0xf;
  if (0x1e < iVar4) {
    iVar4 = 0x1e;
  }
  FUN_80047c4c(param_1,&DAT_800aea80,(int)*(short *)(&DAT_800aeac8 + iVar4 * 2));
  iVar1 = (iVar4 + -3) * 2;
  if (iVar4 + -3 < 3) {
    iVar1 = 6;
  }
  uVar2 = (uint)*(short *)(param_1 + 0x3c0);
  iVar1 = (int)*(short *)(iVar1 + *(int *)(param_1 + 0x34)) * uVar2;
  uVar3 = *(uint *)(param_1 + 0x198);
  if ((int)uVar2 < 0) {
    if (100 < (int)-uVar2) goto LAB_80047e6c;
  }
  else {
    if ((int)uVar2 < 0x65) {
      uVar3 = iVar1 - uVar3;
      goto LAB_80047ebc;
    }
LAB_80047e6c:
    if ((int)uVar3 < 0) {
      if ((int)-uVar3 < 0xa001) goto LAB_80047eb8;
    }
    else if ((int)uVar3 < 0xa001) {
      uVar3 = iVar1 - uVar3;
      goto LAB_80047ebc;
    }
    if ((int)(uVar2 ^ uVar3) < 0) {
      uVar3 = uVar2 * 0x6e - uVar3;
      goto LAB_80047ebc;
    }
  }
LAB_80047eb8:
  uVar3 = iVar1 - uVar3;
LAB_80047ebc:
  if ((uVar3 & 0x800000) == 0) {
    uVar3 = uVar3 & 0x7fffff;
  }
  else {
    uVar3 = uVar3 | 0xff800000;
  }
  iVar4 = (int)(uVar3 * (int)*(short *)(iVar4 * 2 + -0x7ff514b8)) >> 4;
  if (iVar4 < 0x1ef001) {
    if (iVar4 < -0x1ef000) {
      iVar4 = -0x1ef000;
    }
  }
  else {
    iVar4 = 0x1ef000;
  }
  iVar4 = iVar4 + iVar1;
  if (iVar4 < -0x1ef000) {
    iVar4 = -0x1ef000;
  }
  else if (0x1ef000 < iVar4) {
    iVar4 = 0x1ef000;
  }
  *(int *)(param_1 + 0x3c8) = iVar4;
  return;
}


