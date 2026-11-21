/* Function: FUN_8004e3ac */
/* Address: 8004e3ac */

void FUN_8004e3ac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_1 + 0x24);
  iVar6 = *(short *)(iVar4 + 10) + -1;
  iVar5 = (int)*(short *)(param_1 + 0x4c);
  if (*(short *)(iVar4 + 6) != 0) {
    iVar3 = *(int *)(iVar4 + 0x18);
    uVar2 = 6;
    if (((g_ResultSavePtr1 == 0) || (iVar3 < g_ResultSavePtr1)) &&
       ((g_ResultSavePtr1 = iVar3, DAT_800ccff8 == 0 || (*(int *)(iVar4 + 0x18) < DAT_800ccff8)))) {
      g_SpeedFlag2 = 0xffff;
      DAT_800ccff0 = 0xffff;
      DAT_800ccff8 = *(int *)(iVar4 + 0x18);
      uVar2 = 3;
    }
    FUN_80051f04(iVar5,uVar2,iVar3);
  }
  iVar3 = *(int *)(iVar4 + iVar6 * 4 + 0x1c);
  if ((*(short *)(iVar4 + 0xe) < 0) ||
     (iVar3 < *(int *)(iVar4 + *(short *)(iVar4 + 0xe) * 4 + 0x1c))) {
    *(short *)(iVar4 + 0xe) = (short)iVar6;
  }
  if (((g_ResultSavePtr2 == 0) || (iVar3 < g_ResultSavePtr2)) &&
     ((g_ResultSavePtr2 = iVar3, DAT_800ccffc == 0 || (iVar3 < DAT_800ccffc)))) {
    g_SpeedFlag1 = 0xffff;
    DAT_800ccff2 = 0xffff;
    DAT_800ccffc = iVar3;
    FUN_80051f04(iVar5,2,iVar3);
  }
  iVar1 = FUN_80051f5c(iVar5);
  if (iVar1 != 0) {
    FUN_80051f04(iVar5,*(short *)(iVar4 + 0xe) == iVar6,iVar3);
  }
  return;
}


