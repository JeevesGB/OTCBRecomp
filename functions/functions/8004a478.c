/* Function: FUN_8004a478 */
/* Address: 8004a478 */

void FUN_8004a478(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x10) + 0x56);
  iVar4 = 100 - sVar1;
  if (sVar1 == 100) {
    *(undefined2 *)(param_1 + 0x1ec) = 0;
  }
  else {
    uVar2 = 2;
    if (iVar4 == 100) {
      uVar2 = 1;
    }
    *(undefined2 *)(param_1 + 0x1ec) = uVar2;
  }
  *(short *)(param_1 + 0x206) = sVar1 / 2;
  *(short *)(param_1 + 0x204) = sVar1 / 2;
  uVar2 = (undefined2)(iVar4 / 2);
  *(undefined2 *)(param_1 + 0x20a) = uVar2;
  *(undefined2 *)(param_1 + 0x208) = uVar2;
  *(undefined2 *)(param_1 + 0x212) = 0;
  *(undefined2 *)(param_1 + 0x210) = 0;
  *(undefined2 *)(param_1 + 0x238) = 0;
  FUN_80050fbc(param_1);
  uVar3 = (uint)*(short *)(*(int *)(param_1 + 0x10) + 0x68);
  if ((uVar3 & 0x4000) == 0) {
    *(undefined **)(param_1 + 0x30) = &DAT_800b1168 + uVar3 * 0x38;
  }
  else {
    *(undefined **)(param_1 + 0x30) = &DAT_800cd170 + (uVar3 & 0xffffbfff) * 0x38;
  }
  *(undefined **)(param_1 + 0x20c) =
       &DAT_800b0620 + *(short *)(*(int *)(param_1 + 0x10) + 0x6a) * 0xc;
  iVar4 = 0;
  psVar5 = *(short **)(param_1 + 0x20c);
  do {
    if (*psVar5 < 2) break;
    iVar4 = iVar4 + 1;
    psVar5 = psVar5 + 1;
  } while (iVar4 < 6);
  *(short *)(param_1 + 0x1fa) = (short)iVar4;
  *(undefined2 *)(param_1 + 0x1f8) = 0;
  return;
}


