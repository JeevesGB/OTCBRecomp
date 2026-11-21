/* Function: FUN_80048cac */
/* Address: 80048cac */

void FUN_80048cac(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = DAT_1f8000a4;
  iVar8 = 0;
  if (0 < *(short *)(param_1 + 0x210)) {
    iVar8 = -1;
  }
  puVar7 = &DAT_1f800054;
  puVar5 = &DAT_1f800054;
  iVar9 = param_1 + 0x10;
  iVar6 = param_1;
  do {
    uVar3 = *(uint *)(param_1 + 0x2f0);
    iVar2 = (*(int *)(puVar5 + 0x4e) - *(int *)(puVar5 + 0x56)) - *(int *)(puVar5 + 0x46) >> 10;
    uVar4 = iVar2 * 5;
    if (*(short *)(iVar6 + 0x37c) == 0) {
      uVar4 = uVar3 + uVar4;
    }
    else {
      if (-1 < (int)(uVar3 ^ uVar4)) {
        uVar4 = iVar2 * -5;
      }
      uVar4 = uVar3 + uVar4;
      if ((uVar3 == 0) || ((int)(uVar3 ^ uVar4) < 0)) {
        uVar4 = 0;
      }
    }
    if (((iVar8 != 0) && (0 < (short)puVar7[0x5e])) && ((int)(uVar4 ^ uVar1) < 0)) {
      uVar4 = 0;
    }
    *(uint *)(param_1 + 0x2f0) = uVar4;
    param_1 = param_1 + 4;
    puVar7 = puVar7 + 1;
    iVar6 = iVar6 + 2;
    puVar5 = puVar5 + 2;
  } while (param_1 < iVar9);
  return;
}


