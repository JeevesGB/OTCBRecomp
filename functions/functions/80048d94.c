/* Function: UpdateCarSteering */
/* Address: 80048d94 */

/* WARNING: Removing unreachable block (ram,0x80048df8) */

void UpdateCarSteering(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  FUN_80048264();
  if (*(short *)(param_1 + 0x202) == 0) {
    trap(0x1c00);
  }
  iVar8 = 0;
  puVar4 = &DAT_1f800054;
  DAT_1f8000a4 = ((1100000 / (int)*(short *)(param_1 + 0x202)) * (*(int *)(param_1 + 0x2e8) >> 3)) /
                 0xe1;
  iVar3 = param_1;
  do {
    iVar1 = *(int *)(iVar3 + 0x2f0) / 0x9420;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (0x20 < iVar1) {
      iVar1 = 0x20;
    }
    iVar3 = iVar3 + 4;
    iVar8 = iVar8 + 1;
    *(int *)(puVar4 + 0x20) = (int)*(short *)(&DAT_800aebc0 + iVar1 * 2) << 3;
    puVar4 = puVar4 + 2;
  } while (iVar8 < 4);
  FUN_8004867c(param_1);
  iVar12 = 0;
  iVar11 = 0;
  iVar10 = 0;
  iVar1 = 0;
  puVar9 = &DAT_1f800054;
  iVar8 = 0;
  puVar4 = &DAT_1f800054;
  iVar3 = param_1;
  do {
    iVar5 = *(int *)(puVar4 + 0x10);
    if (iVar5 < 0x50000) {
      iVar5 = 0x50000;
    }
    iVar2 = 0x1000;
    if ((*(short *)(iVar3 + 0x364) != 0) &&
       (iVar2 = FUN_8005430c(*(undefined4 *)(puVar4 + 8),iVar5), 0x1000 < iVar2)) {
      iVar2 = 0x1000;
    }
    if (0 < (short)puVar9[0x5e]) {
      iVar11 = iVar11 + iVar2;
      iVar10 = iVar10 + 1;
    }
    iVar12 = iVar12 + iVar2;
    *(short *)(param_1 + iVar8 + 900) = (short)iVar2;
    puVar9 = puVar9 + 1;
    iVar8 = iVar8 + 2;
    iVar3 = iVar3 + 2;
    iVar1 = iVar1 + 1;
    puVar4 = puVar4 + 2;
  } while (iVar1 < 4);
  if (iVar10 == 0) {
    trap(0x1c00);
  }
  if ((iVar10 == -1) && (iVar11 == -0x80000000)) {
    trap(0x1800);
  }
  *(short *)(param_1 + 0x35c) = (short)(iVar12 >> 2);
  *(short *)(param_1 + 0x35e) = (short)(iVar11 / iVar10);
  FUN_800487e0(param_1);
  puVar4 = &DAT_1f800054;
  iVar3 = param_1;
  do {
    iVar1 = *(int *)(iVar3 + 0x34c);
    iVar8 = -*(int *)(iVar3 + 0x33c);
    if (iVar1 < iVar8) {
      iVar8 = iVar1 - ((iVar8 - iVar1) * 7 >> 4);
      if (iVar8 < iVar1 >> 1) {
        iVar8 = iVar1 >> 1;
      }
    }
    *(int *)(puVar4 + 0x32) = (iVar8 >> 0xc) * *(int *)(puVar4 + 0x2a);
    puVar4 = puVar4 + 2;
    iVar3 = iVar3 + 4;
  } while ((int)puVar4 < 0x1f800064);
  iVar8 = 0;
  puVar4 = &DAT_1f800054;
  iVar3 = param_1;
  do {
    iVar8 = iVar8 + 1;
    iVar1 = (*(int *)(iVar3 + 0x2f0) - *(int *)(puVar4 + 0x18) >> 8) *
            (*(int *)(puVar4 + 0x32) >> 0xc) * 10 + *(int *)(iVar3 + 0x3a4) >> 1;
    *(int *)(iVar3 + 0x3a4) = iVar1;
    *(int *)(puVar4 + 0x46) = iVar1;
    puVar4 = puVar4 + 2;
    iVar3 = iVar3 + 4;
  } while (iVar8 < 4);
  puVar4 = &DAT_1f800054;
  iVar3 = param_1;
  iVar8 = param_1;
  do {
    uVar6 = *(int *)(iVar3 + 0x228) + *(int *)(puVar4 + 0x46);
    iVar1 = *(int *)(iVar3 + 0x250) + *(int *)(puVar4 + 0x20);
    if (-1 < (int)uVar6) {
      iVar1 = -iVar1;
    }
    uVar7 = uVar6 + iVar1;
    if ((int)(uVar7 ^ uVar6) < 0) {
      *(undefined2 *)(iVar8 + 0x37c) = 0xffff;
      if (-1 < (int)(uVar7 ^ *(uint *)(puVar4 + 0x18))) {
        uVar7 = -uVar7;
      }
    }
    else {
      *(undefined2 *)(iVar8 + 0x37c) = 0;
    }
    *(uint *)(puVar4 + 0x4e) = uVar7;
    puVar4 = puVar4 + 2;
    iVar8 = iVar8 + 2;
    iVar3 = iVar3 + 4;
  } while ((int)puVar4 < 0x1f800064);
  FUN_80048964(param_1);
  FUN_80048b38(param_1);
  FUN_80048cac(param_1);
  iVar8 = 0;
  iVar10 = 0;
  iVar1 = 0;
  puVar4 = &DAT_1f800054;
  iVar3 = param_1;
  do {
    if (0 < (short)puVar4[0x5e]) {
      iVar10 = iVar10 + 1;
      iVar1 = iVar1 + *(int *)(iVar3 + 0x2f0);
    }
    iVar3 = iVar3 + 4;
    iVar8 = iVar8 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar8 < 4);
  iVar3 = 0;
  puVar4 = &DAT_1f800054;
  if (iVar10 == 0) {
    trap(0x1c00);
  }
  iVar8 = param_1;
  if ((iVar10 == -1) && (iVar1 == -0x80000000)) {
    trap(0x1800);
  }
  do {
    if (0 < (short)puVar4[0x5e]) {
      *(int *)(iVar8 + 0x2f0) = iVar1 / iVar10;
    }
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
    iVar8 = iVar8 + 4;
  } while (iVar3 < 4);
  iVar11 = 0;
  iVar10 = 0;
  iVar1 = 0;
  iVar8 = 0;
  puVar9 = &DAT_1f800054;
  puVar4 = &DAT_1f800054;
  iVar3 = param_1;
  do {
    if (0 < (short)puVar4[0x5e]) {
      iVar1 = iVar1 + 1;
      iVar12 = *(int *)(param_1 + 0x2ec);
      if (iVar8 < 2) {
        iVar12 = *(int *)(param_1 + 0x2e8);
      }
      iVar12 = iVar12 >> 3;
      iVar5 = *(int *)(iVar3 + 0x2f0) * 0xe1;
      if (iVar12 == 0) {
        trap(0x1c00);
      }
      if ((iVar12 == -1) && (iVar5 == -0x80000000)) {
        trap(0x1800);
      }
      if (iVar12 == 0) {
        trap(0x1c00);
      }
      if ((iVar12 == -1) && (*(int *)(puVar9 + 0x18) * 0xe1 == -0x80000000)) {
        trap(0x1800);
      }
      iVar10 = iVar10 + iVar5 / iVar12;
      iVar11 = iVar11 + (*(int *)(puVar9 + 0x18) * 0xe1) / iVar12;
    }
    puVar9 = puVar9 + 2;
    iVar3 = iVar3 + 4;
    iVar8 = iVar8 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar8 < 4);
  if (iVar1 == 0) {
    trap(0x1c00);
  }
  if ((iVar1 == -1) && (iVar10 == -0x80000000)) {
    trap(0x1800);
  }
  if (iVar1 == 0) {
    trap(0x1c00);
  }
  if ((iVar1 == -1) && (iVar11 == -0x80000000)) {
    trap(0x1800);
  }
  *(short *)(param_1 + 0x2e4) = (short)(iVar10 / iVar1);
  *(short *)(param_1 + 0x2e6) = (short)(iVar11 / iVar1);
  return;
}


