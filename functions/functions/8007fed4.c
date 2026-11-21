/* Function: UpdateTuningShop */
/* Address: 8007fed4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * UpdateTuningShop(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar3 = GetCarReplayData();
  uVar7 = 0;
  iVar4 = GetReplayCarData(*(undefined1 *)(iVar3 + 0x11));
  if (_g_TuningShopFlag1 != 0) {
    if ((g_PadButtons & 0x2000) == 0) {
      if ((g_PadButtons & 0x8000) == 0) {
        if ((g_PadButtons & 0x60) == 0) {
          if ((g_PadButtons & 0x90) != 0) goto LAB_80080010;
        }
        else if (DAT_800cdd24 == 0) {
          piVar5 = (int *)FUN_80069778();
          if ((*(int *)(param_1 + 4) <= *piVar5) && (*(short *)(iVar4 + 0xac) != 0)) {
            PlaySFX(0x10);
            return (code *)&LAB_8007fc54;
          }
          PlaySFX(0x13);
        }
        else {
LAB_80080010:
          PlaySFX(0x11);
          g_GameState = 0x12;
        }
      }
      else {
        DAT_800cdd24 = DAT_800cdd24 + -1;
        if (-1 < DAT_800cdd24) goto LAB_8007ff88;
        DAT_800cdd24 = 0;
      }
    }
    else {
      DAT_800cdd24 = DAT_800cdd24 + 1;
      if (DAT_800cdd24 < 2) {
LAB_8007ff88:
        PlaySFX(0xf);
      }
      else {
        DAT_800cdd24 = 1;
      }
    }
    if (_g_TuningShopFlag1 != 0) goto LAB_80080088;
  }
  iVar6 = GetReplayCarData(*(undefined1 *)(iVar3 + 0x11));
  uVar2 = *(undefined1 *)(iVar3 + 0x11);
  uVar1 = GetChampionshipTrackIndex(uVar2,0xffffffff);
  uVar2 = GetChampionshipCarIndex(uVar2);
  FUN_80066d68(&g_TimeAttackBuffer,uVar1,uVar2,*(undefined1 *)(iVar3 + 0x12),
               (int)*(short *)(iVar6 + 0xac));
LAB_80080088:
  iVar3 = FUN_80066d8c(&g_TimeAttackBuffer);
  if (iVar3 == -1) {
    FUN_80067090(&g_TimeAttackBuffer);
    FUN_80067008(&g_TimeAttackBuffer,DAT_800cbb9c + 4);
  }
  iVar3 = FUN_800673c8();
  FUN_80066010(g_CarModelBuffer + (uint)*(byte *)(iVar3 + 0x11) * 0x14,0xffffffe8,10,0x140,0x3c,
               g_RaceOTPtr1 + 4);
  iVar3 = GetRaceSprite1();
  iVar6 = FUN_80067190();
  DrawSpriteScaled(iVar3 + 4,iVar6 + 0x40,g_RaceOTPtr1 + 4);
  if (_g_TuningShopFlag1 == 0) {
    uVar7 = 0xffffffff;
  }
  FUN_8007f520(param_1,_g_TuningShopFlag1 & 0xff,DAT_800cdd24,(int)*(short *)(iVar4 + 0xac),
               *(undefined4 *)(param_1 + 4),uVar7);
  DAT_800cdd28 = DAT_800cdd28 + -6;
  if (DAT_800cdd28 < 0x40) {
    DAT_800cdd28 = 0xa0;
  }
  _g_TuningShopFlag1 = _g_TuningShopFlag1 + 8;
  if (0xff < (int)_g_TuningShopFlag1) {
    _g_TuningShopFlag1 = 0xff;
  }
  g_TimeAttackVRAMY2 = g_TimeAttackVRAMY2 + 10;
  return UpdateTuningShop;
}


