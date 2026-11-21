/* Function: FUN_8004937c */
/* Address: 8004937c */

void FUN_8004937c(int param_1)

{
  undefined2 *puVar1;
  short sVar2;
  short sVar3;
  long lVar4;
  int y;
  int x;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar5 = 0;
  iVar9 = *(int *)(param_1 + 0x10);
  sVar2 = *(short *)(iVar9 + 0x3e);
  iVar6 = iVar9;
  iVar7 = param_1;
  iVar8 = param_1;
  do {
    *(int *)(iVar7 + 0x34c) = sVar2 * 0x116c;
    y = (int)*(short *)(iVar6 + 0x28);
    x = (int)*(short *)(iVar6 + 0x2a);
    lVar4 = ratan2(y,x);
    iVar6 = iVar6 + 4;
    iVar5 = iVar5 + 1;
    *(short *)(iVar8 + 0x328) = (short)lVar4;
    lVar4 = SquareRoot0(y * y + x * x);
    *(short *)(iVar8 + 0x330) = (short)lVar4 * 6;
    iVar8 = iVar8 + 2;
    *(undefined4 *)(iVar7 + 0x2f0) = 0;
    iVar7 = iVar7 + 4;
  } while (iVar5 < 4);
  *(int *)(param_1 + 0x2e8) = (*(short *)(iVar9 + 0x38) * 0x274000) / 100;
  iVar8 = 0;
  iVar7 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x2ec) = (*(short *)(iVar9 + 0x3a) * 0x274000) / 100;
  iVar6 = iVar9;
  do {
    iVar8 = iVar8 + 1;
    *(undefined2 *)(iVar7 + 100) = *(undefined2 *)(iVar6 + 0x28);
    puVar1 = (undefined2 *)(iVar6 + 0x2a);
    iVar6 = iVar6 + 4;
    *(undefined2 *)(iVar7 + 0x68) = *puVar1;
    iVar7 = iVar7 + 8;
  } while (iVar8 < 4);
  sVar2 = (short)((int)*(short *)(iVar9 + 0x3c) * (int)*(short *)(*(int *)(param_1 + 0x10) + 0x54)
                 >> 0xc);
  sVar3 = *(short *)(iVar9 + 0x3c) * 2 - sVar2;
  *(short *)(param_1 + 0x322) = sVar2;
  *(short *)(param_1 + 800) = sVar2;
  *(short *)(param_1 + 0x326) = sVar3;
  *(short *)(param_1 + 0x324) = sVar3;
  return;
}


