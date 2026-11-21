/* Function: FUN_80049fa0 */
/* Address: 80049fa0 */

void FUN_80049fa0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = 0;
  puVar5 = &DAT_1f800054;
  sVar1 = *(short *)(param_1 + 0x16c);
  iVar6 = param_1;
  iVar7 = param_1;
  do {
    iVar8 = *(int *)(iVar6 + 0x1a0);
    iVar4 = *(int *)(puVar5 + 0x20) + *(int *)(puVar5 + 0x28) + *(int *)(puVar5 + 0x18);
    if (((*(short *)(iVar7 + 0x364) == 0) || (0 < iVar4)) || (0x2904 < *(int *)(puVar5 + 8))) {
      iVar4 = 0;
    }
    if (((*(short *)(iVar7 + 0x36c) == -1) && (*(short *)(iVar7 + 0x364) == -1)) &&
       (iVar2 = *(int *)(puVar5 + 8), iVar2 < 1)) {
      if (*(short *)(param_1 + 0x44) == 1) {
        FUN_8002deec(-iVar2,(int)*(short *)(*(int *)(param_1 + 0x18) + 0x4a));
      }
      iVar3 = iVar2 << 1;
      if (-9000 < iVar2) {
        iVar2 = -9000;
        iVar3 = -18000;
      }
      iVar4 = iVar4 + ((iVar3 + iVar2) * 4 >> 7) * (int)sVar1;
    }
    iVar9 = iVar9 + iVar4;
    *(int *)(iVar6 + 0x1a0) = iVar8 + iVar4;
    *(int *)(iVar6 + 0x33c) = iVar4;
    iVar6 = iVar6 + 4;
    puVar5 = puVar5 + 2;
    iVar7 = iVar7 + 2;
  } while (iVar6 < param_1 + 0x10);
  *(int *)(param_1 + 0x338) = iVar9;
  return;
}


