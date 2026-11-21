/* Function: UpdateCarHUDData */
/* Address: 80051074 */

void UpdateCarHUDData(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(short *)(iVar3 + 0x42) == 0) {
    if ((*(ushort *)(iVar3 + 0x4c) & 8) == 0) {
      *(undefined2 *)(param_1 + 0x23a) = 0;
      *(undefined2 *)(param_1 + 0x238) = 0;
      *(undefined2 *)(param_1 + 0x244) = 0;
      *(undefined2 *)(param_1 + 0x23c) = 0;
    }
    else {
      psVar4 = (short *)(*(int *)(param_1 + 0x260) + *(short *)(param_1 + 0x244) * 4 + 4);
      sVar1 = *psVar4;
      *(short *)(param_1 + 0x238) = psVar4[1];
      if ((sVar1 != 0) &&
         (sVar2 = *(short *)(param_1 + 0x23a) + 1, *(short *)(param_1 + 0x23a) = sVar2,
         sVar1 <= sVar2)) {
        *(undefined2 *)(param_1 + 0x23a) = 0;
        *(short *)(param_1 + 0x244) = *(short *)(param_1 + 0x244) + 1;
      }
      *(undefined2 *)(param_1 + 0x23c) = 0xffff;
    }
  }
  else {
    sVar1 = *(short *)(iVar3 + 0x54);
    if (0 < sVar1) {
      sVar1 = sVar1 + 1;
    }
    *(short *)(param_1 + 0x238) = sVar1;
  }
  if ((*(ushort *)(*(int *)(param_1 + 0x28) + 0x4c) & 0x40) == 0) {
    *(undefined2 *)(param_1 + 0x23e) = 0;
    return;
  }
  *(undefined2 *)(param_1 + 0x23e) = 0xffff;
  return;
}


