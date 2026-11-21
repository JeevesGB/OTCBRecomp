/* Function: FUN_80043848 */
/* Address: 80043848 */

void FUN_80043848(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  puVar3 = *(undefined2 **)(param_1 + 0x3c);
  *(undefined2 *)(param_1 + 0x176) = 0xffff;
  puVar3[1] = 0x100;
  sVar1 = *(short *)(iVar4 + 0x66);
  *puVar3 = 0;
  puVar3[4] = 0;
  uVar2 = (undefined2)(((sVar1 + 100) * 0x100) / 100);
  puVar3[2] = uVar2;
  puVar3[3] = uVar2;
  iVar4 = (int)*(short *)(iVar4 + 0x3c);
  iVar4 = iVar4 + (iVar4 * 0x28) / 100;
  if (0x28a < iVar4) {
    iVar4 = 0x28a;
  }
  SetObstacleSpeed(param_1,iVar4);
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x10) = *(undefined4 *)(param_1 + 0x18c);
  return;
}


