/* Function: FUN_8004dd08 */
/* Address: 8004dd08 */

void FUN_8004dd08(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char acStack_40 [24];
  
  DrawSprite(g_TrackConfigBuffer + 0x230,0xffffff74,0xffffff9c,g_RaceOTPtr2 + 0xc);
  iVar5 = *(int *)(param_1 + 0x18);
  SetActiveSpriteSlot(0,0);
  if (iVar5 == 0) {
    pcVar2 = s__________800aef64;
  }
  else {
    LoadReplayData2(iVar5,acStack_40);
    pcVar2 = acStack_40;
  }
  DrawText(pcVar2,0xffffff74,0xffffffa6);
  iVar7 = -0x45;
  DrawSprite(g_TrackConfigBuffer + 0xb4,0xffffff74,0xffffffb0,g_RaceOTPtr2 + 0xc);
  iVar1 = (int)*(short *)(param_1 + 0xc);
  iVar5 = *(short *)(param_1 + 10) + 1;
  iVar3 = *(short *)(param_1 + 10) + -2;
  if (iVar1 < iVar5) {
    iVar3 = iVar1 + -3;
    iVar5 = iVar1;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (iVar3 < iVar5) {
    iVar1 = iVar3 * 4 + param_1;
    do {
      iVar6 = *(int *)(iVar1 + 0x1c);
      uVar4 = 0;
      if ((*(short *)(param_1 + 0xe) == iVar3) && (uVar4 = 1, iVar6 == DAT_800ccffc)) {
        uVar4 = 3;
      }
      SetActiveSpriteSlot(0,uVar4);
      if (iVar6 == 0) {
        pcVar2 = s__________800aef64;
      }
      else {
        LoadReplayData2(iVar6,acStack_40);
        pcVar2 = acStack_40;
      }
      DrawText(pcVar2,0xffffff74,iVar7);
      iVar7 = iVar7 + 10;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar3 < iVar5);
  }
  DrawSprite(g_TrackConfigBuffer + 0x21c,0x3c,0xffffff9c,g_RaceOTPtr2 + 0xc);
  iVar5 = DAT_800ccff8;
  if (DAT_800ccff0 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    if (g_SpeedFlag2 != 0) {
      uVar4 = 3;
    }
  }
  SetActiveSpriteSlot(0,uVar4);
  if (iVar5 == 0) {
    pcVar2 = s__________800aef64;
  }
  else {
    LoadReplayData2(iVar5,acStack_40);
    pcVar2 = acStack_40;
  }
  DrawText(pcVar2,0x3c,0xffffffa6);
  DrawSprite(g_TrackConfigBuffer + 0x28,0x3c,0xffffffb0,g_RaceOTPtr2 + 0xc);
  iVar5 = DAT_800ccffc;
  if (DAT_800ccff2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    if (g_SpeedFlag1 != 0) {
      uVar4 = 3;
    }
  }
  SetActiveSpriteSlot(0,uVar4);
  if (iVar5 == 0) {
    pcVar2 = s__________800aef64;
  }
  else {
    LoadReplayData2(iVar5,acStack_40);
    pcVar2 = acStack_40;
  }
  DrawText(pcVar2,0x3c,0xffffffba);
  return;
}


