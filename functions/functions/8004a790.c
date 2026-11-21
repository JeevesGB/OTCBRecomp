/* Function: FUN_8004a790 */
/* Address: 8004a790 */

void FUN_8004a790(int param_1)

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
  
  iVar8 = (int)*(short *)(param_1 + 0x214);
  sVar1 = *(short *)(param_1 + 0x210);
  iVar5 = FUN_8004ac18(*(undefined4 *)(param_1 + 0x30),iVar8);
  iVar9 = -1;
  if ((0x1d < sVar1) && (7999 < iVar5)) {
    iVar9 = 0;
  }
  if (iVar9 == 0) {
    if ((*(short *)(param_1 + 0x21e) != 0) && (5000 < iVar8)) {
      iVar5 = iVar5 - ((int)(iVar5 * ((int)*(short *)((int)&DAT_80010000 +
                                                     (g_PhysicsFlag & 0x2ff) * 2) & 0xfffU)) >> 0xc)
      ;
    }
    iVar5 = FUN_8004ad94(iVar5 >> 2,(int)*(short *)(param_1 + 0x202));
    if (*(short *)(param_1 + 0x1fc) == 2) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 * sVar1 >> 6;
      iVar5 = iVar5 - (iVar5 * 7 >> 4);
    }
  }
  else {
    if (iVar8 < 0x2001) {
      if (iVar8 < 4000) {
        iVar8 = 4000;
      }
    }
    else {
      iVar8 = 0x2000;
    }
    iVar5 = (*(int *)(param_1 + 0x224) >> 9) * iVar8 >> 4;
  }
  iVar7 = 0;
  sVar1 = *(short *)(*(int *)(param_1 + 0x10) + 0x38);
  sVar2 = *(short *)(*(int *)(param_1 + 0x10) + 0x3a);
  iVar8 = param_1;
  do {
    sVar3 = sVar2;
    if (iVar7 < 2) {
      sVar3 = sVar1;
    }
    iVar6 = (int)sVar3;
    iVar4 = iVar5 * *(short *)(iVar8 + 0x204);
    iVar10 = iVar4 / iVar6;
    if (iVar6 == 0) {
      trap(0x1c00);
    }
    if ((iVar6 == -1) && (iVar4 == -0x80000000)) {
      trap(0x1800);
    }
    if (iVar9 == 0) {
      *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + iVar10;
    }
    else {
      *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + iVar10;
    }
    param_1 = param_1 + 4;
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 2;
  } while (iVar7 < 4);
  return;
}


