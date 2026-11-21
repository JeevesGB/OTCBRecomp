/* Function: UpdateRaceResults */
/* Address: 8008de9c */

void UpdateRaceResults(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  puVar4 = (undefined1 *)GetProgressionPtr();
  uVar3 = *puVar4;
  if (DAT_800cde38 == 0) {
    uVar1 = GetChampionshipTrackIndex(uVar3,0xffffffff);
    uVar2 = GetChampionshipCarIndex(*puVar4);
    FUN_80066d68(&g_TimeAttackBuffer,uVar1,uVar2,0,0);
  }
  iVar5 = FUN_80066d8c(&g_TimeAttackBuffer);
  if (iVar5 == -1) {
    FUN_80067090(&g_TimeAttackBuffer);
    FUN_80067008(&g_TimeAttackBuffer,DAT_800cbb9c + 4);
    g_TimeAttackVRAMY2 = g_TimeAttackVRAMY2 + 4;
  }
  iVar5 = GetRaceSprite1();
  iVar6 = GetResultsSpriteData();
  iVar7 = FUN_800673e0();
  iVar8 = (uint)*(ushort *)(iVar6 + 0x66) << 0x10;
  iVar8 = (iVar8 >> 0x10) - (iVar8 >> 0x1f) >> 1;
  FUN_80066010(g_CarModelBuffer + (uint)*(byte *)(iVar7 + 10) * 0x14,(int)*(short *)(iVar6 + 0x60),
               (int)(((uint)*(ushort *)(iVar6 + 0x62) + iVar8 + 8) * 0x10000) >> 0x10,
               (int)*(short *)(iVar6 + 100),iVar8,g_RaceOTPtr1 + 4);
  DrawSpriteScaled(iVar5 + 4,iVar6 + 0x60,g_RaceOTPtr1 + 4);
  iVar5 = GetCarReplayData();
  uVar3 = GetDefaultCarIndex(uVar3);
  uVar3 = FUN_80067870(uVar3);
  FUN_8008d8cc(DAT_800cde38 & 0xff,(byte)puVar4[1] - 1,*(undefined1 *)(iVar5 + 0x10),uVar3);
  DAT_800cde40 = DAT_800cde40 + -6;
  if (DAT_800cde40 < 0x40) {
    DAT_800cde40 = 0xa0;
  }
  DAT_800cde38 = DAT_800cde38 + 8;
  if (0xff < (int)DAT_800cde38) {
    DAT_800cde38 = 0xff;
  }
  if ((g_PadButtons & 0x60) != 0) {
    PlaySFX(0x10);
    g_GameState = 0x1f;
  }
  return;
}


