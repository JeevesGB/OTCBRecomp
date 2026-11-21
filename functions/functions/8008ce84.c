/* Function: UpdateCarUnlock */
/* Address: 8008ce84 */

void UpdateCarUnlock(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = GetCarReplayData();
  uVar1 = FUN_8006781c(*(undefined1 *)(iVar4 + 0x11));
  if ((g_PadButtons & 0x2000) == 0) {
    if ((g_PadButtons & 0x8000) == 0) {
      if ((g_PadButtons & 0x60) == 0) {
        if ((g_PadButtons & 0x90) == 0) goto LAB_8008cfb0;
        PlaySFX(0x11);
      }
      else {
        PlaySFX(0x10);
        if (g_CarUnlockFlag == 0) {
          iVar4 = GetCarReplayData();
          uVar2 = *(undefined1 *)(iVar4 + 0x11);
          iVar5 = GetReplayCarData(uVar2);
          *(undefined2 *)(iVar5 + 0xac) = 0;
          *(undefined2 *)(iVar5 + 0xae) = 0xffff;
          FUN_80069ae8(iVar4 + 0xf,uVar2);
          SaveReplaySlot(*(undefined1 *)(iVar4 + 0x11));
        }
      }
      g_GameState = 0x15;
      goto LAB_8008cfb0;
    }
    g_CarUnlockFlag = g_CarUnlockFlag + -1;
    if (g_CarUnlockFlag < 0) {
      g_CarUnlockFlag = 0;
      goto LAB_8008cfb0;
    }
  }
  else {
    g_CarUnlockFlag = g_CarUnlockFlag + 1;
    if (1 < g_CarUnlockFlag) {
      g_CarUnlockFlag = 1;
      goto LAB_8008cfb0;
    }
  }
  PlaySFX(0xf);
LAB_8008cfb0:
  if (DAT_800cde28 == 0) {
    uVar2 = GetChampionshipTrackIndex(uVar1,0xffffffff);
    uVar3 = GetChampionshipCarIndex(uVar1);
    FUN_80066d68(&g_TimeAttackBuffer,uVar2,uVar3,0,0);
  }
  iVar4 = FUN_80066d8c(&g_TimeAttackBuffer);
  if (iVar4 == -1) {
    FUN_80067090(&g_TimeAttackBuffer);
    FUN_80067008(&g_TimeAttackBuffer,DAT_800cbb9c + 4);
    g_TimeAttackVRAMY2 = g_TimeAttackVRAMY2 + 4;
  }
  iVar4 = GetRaceSprite1();
  iVar5 = GetUnlockSpriteData();
  iVar6 = FUN_800673d4();
  iVar7 = (uint)*(ushort *)(iVar5 + 0x56) << 0x10;
  iVar7 = (iVar7 >> 0x10) - (iVar7 >> 0x1f) >> 1;
  FUN_80066010(g_CarModelBuffer + (uint)*(byte *)(iVar6 + 7) * 0x14,(int)*(short *)(iVar5 + 0x50),
               (int)(((uint)*(ushort *)(iVar5 + 0x52) + iVar7 + 8) * 0x10000) >> 0x10,
               (int)*(short *)(iVar5 + 0x54),iVar7,g_RaceOTPtr1 + 4);
  DrawSpriteScaled(iVar4 + 4,iVar5 + 0x50,g_RaceOTPtr1 + 4);
  uVar1 = GetDefaultCarIndex(uVar1);
  uVar1 = FUN_80067870(uVar1);
  FUN_8008ca28(DAT_800cde28 & 0xff,g_CarUnlockFlag,uVar1);
  DAT_800cde30 = DAT_800cde30 + -6;
  if (DAT_800cde30 < 0x40) {
    DAT_800cde30 = 0xa0;
  }
  DAT_800cde28 = DAT_800cde28 + 8;
  if (0xff < (int)DAT_800cde28) {
    DAT_800cde28 = 0xff;
  }
  return;
}


