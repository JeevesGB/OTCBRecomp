/* Function: UpdateCarCamera */
/* Address: 80053018 */

void UpdateCarCamera(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(short *)(param_1 + 0x44) != 0) && (iVar4 = *(int *)(param_1 + 0x18), iVar4 != 0)) {
    iVar2 = rand();
    iVar2 = (int)*(short *)(param_1 + 0x216) + iVar2 % 100;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x283c < iVar2) {
      iVar2 = 0x283c;
    }
    *(short *)(iVar4 + 0x4e) = (short)iVar2;
    sVar1 = *(short *)(param_1 + 0x1fc);
    iVar2 = 0;
    if ((sVar1 == 1) || (((sVar1 < 2 || (sVar1 != 2)) && (0x1e < *(short *)(param_1 + 0x210))))) {
      iVar2 = -1;
    }
    if (iVar2 == 0) {
      uVar3 = *(uint *)(iVar4 + 4) & 0xfffdffff;
    }
    else {
      uVar3 = *(uint *)(iVar4 + 4) | 0x20000;
    }
    *(uint *)(iVar4 + 4) = uVar3;
  }
  return;
}


