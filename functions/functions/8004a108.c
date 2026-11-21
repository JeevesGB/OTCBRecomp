/* Function: UpdateCarBrakes */
/* Address: 8004a108 */

void UpdateCarBrakes(int param_1)

{
  int *piVar1;
  short *psVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  int *piVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  short sVar12;
  
  FUN_80049830();
  FUN_80049d54(param_1);
  puVar8 = &DAT_1f800054;
  iVar6 = param_1;
  do {
    *(undefined4 *)(puVar8 + 0x10) = *(undefined4 *)(iVar6 + 0x278);
    iVar4 = *(int *)(iVar6 + 0x288);
    iVar9 = *(int *)(iVar6 + 0x298);
    if ((iVar4 < *(int *)(iVar6 + 0x298)) ||
       (iVar9 = *(int *)(iVar6 + 0x2a8), *(int *)(iVar6 + 0x2a8) < iVar4)) {
      iVar4 = iVar9;
    }
    *(int *)(iVar6 + 0x278) = iVar4;
    iVar6 = iVar6 + 4;
    puVar8 = puVar8 + 2;
  } while (iVar6 < param_1 + 0x10);
  sVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  iVar6 = param_1;
  iVar9 = param_1;
  do {
    iVar4 = *(int *)(iVar6 + 0x288);
    if (*(int *)(iVar6 + 0x298) < iVar4) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0xffff;
      iVar4 = *(int *)(iVar6 + 0x298);
    }
    uVar3 = 0;
    if (iVar4 + -10000 <= *(int *)(iVar6 + 0x278)) {
      uVar11 = uVar11 | 1 << (uVar10 & 0x1f);
      uVar3 = 0xffff;
      sVar12 = sVar12 + 1;
    }
    *(undefined2 *)(iVar9 + 0x364) = uVar3;
    *(undefined2 *)(iVar9 + 0x36c) = uVar5;
    iVar9 = iVar9 + 2;
    uVar10 = uVar10 + 1;
    iVar6 = iVar6 + 4;
  } while ((int)uVar10 < 4);
  iVar9 = 0;
  piVar7 = (int *)&DAT_1f800054;
  *(short *)(param_1 + 0x362) = (short)uVar11;
  *(short *)(param_1 + 0x360) = sVar12;
  iVar6 = param_1;
  do {
    piVar1 = (int *)(iVar6 + 0x278);
    iVar6 = iVar6 + 4;
    iVar9 = iVar9 + 1;
    *piVar7 = *piVar1 - piVar7[8];
    piVar7 = piVar7 + 1;
  } while (iVar9 < 4);
  iVar4 = 0;
  puVar8 = &DAT_1f800054;
  iVar6 = param_1;
  iVar9 = param_1;
  do {
    psVar2 = (short *)(iVar9 + 0x2b8);
    piVar7 = (int *)(iVar6 + 0x278);
    iVar9 = iVar9 + 2;
    iVar6 = iVar6 + 4;
    iVar4 = iVar4 + 1;
    *(int *)(puVar8 + 0x20) = *piVar7 * (int)*psVar2;
    puVar8 = puVar8 + 2;
  } while (iVar4 < 4);
  DAT_1f8000a4 = (*(int *)(param_1 + 0x278) - *(int *)(param_1 + 0x27c) >> 5) *
                 (int)*(short *)(param_1 + 0x2c0) >> 5;
  DAT_1f8000a8 = -DAT_1f8000a4;
  iVar9 = 0;
  piVar7 = (int *)&DAT_1f800054;
  DAT_1f8000ac = (*(int *)(param_1 + 0x280) - *(int *)(param_1 + 0x284) >> 5) *
                 (int)*(short *)(param_1 + 0x2c2) >> 5;
  DAT_1f8000b0 = -DAT_1f8000ac;
  iVar6 = param_1;
  do {
    iVar4 = *piVar7;
    if (iVar4 < 1) {
      iVar4 = FUN_80049e4c(-iVar4,*(undefined4 *)(iVar6 + 0x2c4));
      piVar7[0xc] = -iVar4;
    }
    else {
      iVar4 = FUN_80049e4c(iVar4,*(undefined4 *)(iVar6 + 0x2d4));
      piVar7[0xc] = iVar4;
    }
    iVar6 = iVar6 + 4;
    iVar9 = iVar9 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar9 < 4);
  FUN_80049fa0(param_1);
  return;
}


