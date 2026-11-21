/* Function: UpdateTimeAttack */
/* Address: 8007b790 */

void UpdateTimeAttack(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  byte *pbVar6;
  int iVar7;
  
  iVar3 = GetCarReplayData();
  if (g_TimeAttackFlag == 0) {
    iVar4 = GetReplayCarData(*(undefined1 *)(iVar3 + 0x11));
    uVar2 = *(undefined1 *)(iVar3 + 0x11);
    uVar1 = GetChampionshipTrackIndex(uVar2,0xffffffff);
    uVar2 = GetChampionshipCarIndex(uVar2);
    FUN_80066d68(&g_TimeAttackBuffer,uVar1,uVar2,*(undefined1 *)(iVar3 + 0x12),
                 (int)*(short *)(iVar4 + 0xac));
  }
  iVar3 = FUN_80066d8c(&g_TimeAttackBuffer);
  if (iVar3 == -1) {
    FUN_80067090(&g_TimeAttackBuffer);
    FUN_80067008(&g_TimeAttackBuffer,DAT_800cbb9c + 4);
    g_TimeAttackVRAMY2 = g_TimeAttackVRAMY2 + 4;
  }
  iVar3 = FUN_800673a4();
  iVar4 = GetRaceSprite1();
  psVar5 = (short *)FUN_80067148();
  iVar7 = ((int)psVar5[3] / 3) * 0x10000 >> 0x10;
  FUN_80066010(g_CarModelBuffer + (uint)*(byte *)(iVar3 + 0x43) * 0x14,(int)*psVar5,
               (int)(((uint)(ushort)psVar5[1] + iVar7 * 2 + -2) * 0x10000) >> 0x10,(int)psVar5[2],
               iVar7,g_RaceOTPtr1 + 4);
  DrawSpriteScaled(iVar4 + 4,psVar5,g_RaceOTPtr1 + 4);
  iVar3 = FUN_8006725c();
  pbVar6 = (byte *)FUN_800673a4();
  iVar4 = GetCarReplayData();
  DrawSpriteEx(g_CarModelBuffer + (uint)*pbVar6 * 0x14,(int)*(short *)(iVar3 + 0x2c),
               (int)*(short *)(iVar3 + 0x2e),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar6[*(byte *)(iVar4 + 0x11) + 2] * 0x14,
               (int)*(short *)(iVar3 + 0x28),(int)*(short *)(iVar3 + 0x2a),g_MenuAnimPtr + 4,0,
               0xffffffff,0xffffffff);
  if ((g_PadButtons & 0x60) == 0) {
    if ((g_PadButtons & 0x90) != 0) {
      iVar3 = GetCarData();
      *(undefined1 *)(iVar3 + 7) = 1;
      g_GameState = 0xe;
      PlaySFX(0x11);
    }
  }
  else {
    PlaySFX(0x10);
    g_GameState = 0x12;
  }
  g_TimeAttackFlag = g_TimeAttackFlag + 1;
  if (0x400 < g_TimeAttackFlag) {
    g_TimeAttackFlag = 0x400;
  }
  DAT_800cdd04 = DAT_800cdd04 + -6;
  if (DAT_800cdd04 < 0x40) {
    DAT_800cdd04 = 0xa0;
  }
  return;
}


