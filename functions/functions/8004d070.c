/* Function: FUN_8004d070 */
/* Address: 8004d070 */

void FUN_8004d070(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  if (*(short *)(param_1 + 0x1f0) != 0) {
    return;
  }
  sVar3 = *(short *)(param_1 + 0x1f8);
  iVar4 = (int)sVar3;
  iVar8 = *(int *)(param_1 + 0x20c);
  iVar7 = (int)*(short *)(param_1 + 0x2e4);
  uVar9 = *(undefined4 *)(param_1 + 0x30);
  iVar5 = (int)*(short *)(iVar4 * 2 + iVar8);
  iVar1 = FUN_8004ad6c(iVar7,iVar5);
  if (iVar1 < 1) {
    sVar3 = 0;
    goto LAB_8004d254;
  }
  if ((*(short *)(param_1 + 0x35e) < 1000) &&
     (((iVar4 == 0 && (9000 < iVar1)) ||
      ((0 < iVar4 &&
       ((0x2648 < *(short *)(param_1 + 0x214) && (iVar4 < *(short *)(param_1 + 0x1fa) + -1)))))))) {
LAB_8004d1e4:
    sVar3 = sVar3 + 1;
  }
  else {
    uVar2 = FUN_8004ac18(uVar9,iVar1);
    iVar1 = FUN_8004ad94(uVar2,iVar5);
    if ((*(short *)(param_1 + 0x35e) < 2000) &&
       (((0 < *(short *)(param_1 + 0x210) && (iVar4 < *(short *)(param_1 + 0x1fa) + -1)) &&
        (*(short *)(param_1 + 0x200) == 0)))) {
      iVar6 = (int)*(short *)(iVar4 * 2 + iVar8 + 2);
      iVar5 = FUN_8004ad6c(iVar7,iVar6);
      uVar2 = FUN_8004ac18(uVar9,iVar5);
      iVar6 = FUN_8004ad94(uVar2,iVar6);
      if ((iVar1 < iVar6) && (4000 < iVar5)) goto LAB_8004d1e4;
    }
    if ((0 < iVar4) && (*(short *)(param_1 + 0x1fe) == 0)) {
      iVar5 = (int)*(short *)(iVar4 * 2 + iVar8 + -2);
      iVar4 = FUN_8004ad6c(iVar7,iVar5);
      if (8000 < iVar4) {
        return;
      }
      uVar9 = FUN_8004ac18(uVar9,iVar4);
      iVar4 = FUN_8004ad94(uVar9,iVar5);
      if (iVar1 + (iVar1 >> 4) < iVar4) {
        sVar3 = sVar3 + -1;
      }
    }
  }
LAB_8004d254:
  *(short *)(param_1 + 0x1f8) = sVar3;
  return;
}


