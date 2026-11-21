/* Function: FUN_80049720 */
/* Address: 80049720 */

void FUN_80049720(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = 0;
  iVar7 = *(int *)(param_1 + 0x10);
  sVar1 = *(short *)(param_1 + 0x16c);
  iVar10 = param_1;
  do {
    iVar4 = (int)sVar1 * (*(short *)(iVar10 + 0x1b0) * 0x45b >> 10);
    if (iVar11 < 2) {
      iVar6 = (int)*(short *)(iVar7 + 0x14);
      sVar2 = *(short *)(iVar7 + 0x38);
      iVar9 = iVar6 - *(short *)(iVar7 + 0x16);
      sVar3 = *(short *)(iVar7 + 0x58);
      iVar8 = iVar6 - *(short *)(iVar7 + 0x18);
    }
    else {
      iVar6 = (int)*(short *)(iVar7 + 0x1a);
      sVar2 = *(short *)(iVar7 + 0x3a);
      iVar9 = iVar6 - *(short *)(iVar7 + 0x1c);
      sVar3 = *(short *)(iVar7 + 0x5a);
      iVar8 = iVar6 - *(short *)(iVar7 + 0x1e);
    }
    iVar5 = (int)sVar3;
    iVar12 = iVar4 / iVar5;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (iVar4 == -0x80000000)) {
      trap(0x1800);
    }
    *(int *)(param_1 + 0x1d4) = (iVar6 + sVar2 * -2) * 0x1000 - iVar12;
    *(int *)(param_1 + 0x38c) = (sVar2 - iVar6) * 0x1000 + iVar12;
    *(int *)(param_1 + 0x2a8) = iVar9 * 0x1000 - iVar12;
    *(int *)(param_1 + 0x298) = iVar8 * 0x1000 - iVar12;
    *(int *)(param_1 + 0x278) = iVar12;
    param_1 = param_1 + 4;
    iVar11 = iVar11 + 1;
    iVar10 = iVar10 + 2;
  } while (iVar11 < 4);
  return;
}


