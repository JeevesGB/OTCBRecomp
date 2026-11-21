/* Function: FUN_80050fbc */
/* Address: 80050fbc */

void FUN_80050fbc(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x10) + 0x6c);
  *(undefined2 *)(param_1 + 0x23a) = 0;
  *(undefined2 *)(param_1 + 0x244) = 0;
  iVar3 = sVar1 * 0x14;
  *(undefined **)(param_1 + 0x260) = &DAT_800af544 + iVar3;
  *(short *)(param_1 + 0x242) =
       (short)(((int)*(short *)(param_1 + 0x16c) * (int)*(short *)(&DAT_800af546 + iVar3)) / 100);
  sVar1 = *(short *)(&DAT_800af544 + iVar3);
  *(undefined2 *)(param_1 + 0x23e) = 0;
  iVar3 = ((int)sVar1 << 0xc) / 100;
  uVar2 = (undefined2)(iVar3 / 2);
  *(undefined2 *)(param_1 + 0x248) = uVar2;
  *(undefined2 *)(param_1 + 0x246) = uVar2;
  uVar2 = (undefined2)((0x1000 - iVar3) / 2);
  *(undefined2 *)(param_1 + 0x24c) = uVar2;
  *(undefined2 *)(param_1 + 0x24a) = uVar2;
  return;
}


