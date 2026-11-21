/* Function: FUN_8008b878 */
/* Address: 8008b878 */

void FUN_8008b878(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte local_40 [16];
  byte *local_30;
  int local_2c;
  
  psVar1 = (short *)FUN_800672d4();
  iVar2 = GetRaceSprite1();
  iVar3 = FUN_800671e4();
  local_30 = (byte *)FUN_8006741c();
  iVar4 = GetChampionshipData();
  if (param_2 == 1) {
    g_StandingsRoundCount = (uint)*(ushort *)(iVar4 + 6);
    DrawSpriteEx(g_CarModelBuffer + (uint)*local_30 * 0x14,(int)*psVar1,(int)psVar1[1],
                 DAT_800cbba0 + 4,7,0xffffffff,0xffffffff);
    param_1 = param_1 & 0xff;
    if (param_1 == 0xff) {
      param_1 = GetCarBaseColor();
      iVar4 = iVar3 + 0x38;
    }
    else {
      iVar4 = iVar3 + 0x30;
    }
    DrawRaceSprite(iVar4,iVar3 + 0x38,iVar2 + 0x1c,iVar2 + 0x20,param_1,DAT_800cbba0 + 4);
    iVar4 = iVar3 + 0x10;
    iVar6 = iVar3 + 0x18;
    local_2c = 0;
  }
  else {
    local_2c = 1;
    DrawSpriteEx(g_CarModelBuffer + (uint)local_30[1] * 0x14,(int)*psVar1,(int)psVar1[1],
                 DAT_800cbba0 + 4,9,0xffffffff,0xffffffff);
    DrawRaceSprite(iVar3 + 0x30,iVar3 + 0x38,iVar2 + 0x2c,iVar2 + 0x30,g_StandingsFlag2,
                   DAT_800cbba0 + 4);
    iVar4 = iVar3 + 0x20;
    iVar6 = iVar3 + 0x28;
  }
  DrawRaceSprite(iVar4,iVar6,iVar2 + 0x14,iVar2 + 0x18,g_StandingsFlag2,DAT_800cbba0 + 4);
  iVar4 = local_2c;
  DrawSpriteEx(g_CarModelBuffer + (uint)local_30[3] * 0x14,
               (int)psVar1[8] + (int)psVar1[local_2c * 2 + 0x28],
               (int)psVar1[9] + (int)psVar1[local_2c * 2 + 0x29],DAT_800cbba0 + 4,0,0xffffffff,
               0xffffffff);
  if (param_4 / 10 != 0) {
    DrawSpriteEx(g_CarModelBuffer + (uint)local_30[param_4 / 10 + 8] * 0x14,
                 (int)psVar1[4] + (int)psVar1[iVar4 * 2 + 0x24],
                 (int)psVar1[5] + (int)psVar1[iVar4 * 2 + 0x25],DAT_800cbba0 + 4,0,0xffffffff,
                 0xffffffff);
  }
  iVar6 = 0;
  DrawSpriteEx(g_CarModelBuffer + (uint)local_30[param_4 % 10 + 8] * 0x14,
               (int)psVar1[6] + (int)psVar1[iVar4 * 2 + 0x24],
               (int)psVar1[7] + (int)psVar1[iVar4 * 2 + 0x25],DAT_800cbba0 + 4,0,0xffffffff,
               0xffffffff);
  DrawSpriteScaled(iVar2 + 4,iVar3 + local_2c * 8 + 0x48,g_RaceOTPtr1 + 4);
  FUN_8008b170(param_3,local_40);
  do {
    if (iVar6 == 0) {
      uVar5 = (uint)local_40[0];
      if (uVar5 != 0) {
        iVar2 = (int)psVar1[10] + (int)psVar1[iVar4 * 2 + 0x28];
        iVar3 = (int)psVar1[0xb] + (int)psVar1[iVar4 * 2 + 0x29];
        goto LAB_8008bca4;
      }
    }
    else {
      uVar5 = (uint)local_40[iVar6];
      iVar3 = (int)psVar1[0xb] + (int)psVar1[iVar4 * 2 + 0x29];
      iVar2 = (int)psVar1[10] + iVar6 * 0x10 + (int)psVar1[iVar4 * 2 + 0x28];
LAB_8008bca4:
      DrawSpriteEx(g_CarModelBuffer + uVar5 * 0x14,iVar2,iVar3,DAT_800cbba0 + 4,0,0xffffffff,
                   0xffffffff);
    }
    iVar6 = iVar6 + 1;
    if (iVar6 == 9) {
      return;
    }
  } while( true );
}


