/* Function: UpdateCarGearbox */
/* Address: 8004ab70 */

void UpdateCarGearbox(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(short *)(iVar3 + 0x40) != 0) {
    sVar1 = 0x100;
    if ((*(short *)(param_1 + 500) == 0) && (sVar1 = *(short *)(iVar3 + 0x52), 0 < sVar1)) {
      sVar1 = sVar1 + 1;
    }
    *(short *)(param_1 + 0x210) = sVar1;
    return;
  }
  if ((*(short *)(param_1 + 500) == 0) && ((*(ushort *)(iVar3 + 0x4c) & 4) == 0)) {
    iVar3 = *(short *)(param_1 + 0x212) + -8;
    uVar2 = 0;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = *(short *)(param_1 + 0x212) + 4;
    if (0x6c < iVar3) {
      iVar3 = 0x6c;
    }
    uVar2 = (undefined2)((iVar3 + 0x14) * 0x100 >> 7);
  }
  *(undefined2 *)(param_1 + 0x210) = uVar2;
  *(short *)(param_1 + 0x212) = (short)iVar3;
  return;
}


