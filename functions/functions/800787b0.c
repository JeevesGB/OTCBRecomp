/* Function: UpdateChampionshipRace */
/* Address: 800787b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UpdateChampionshipRace(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  uint local_90 [3];
  u_long *local_84;
  u_long *local_78;
  char acStack_70 [64];
  undefined4 local_30;
  undefined4 local_2c;
  
  local_30 = 0;
  local_2c = 0;
  iVar6 = param_1[1];
  iVar8 = *param_1;
  iVar10 = 0;
  if (((int)(short)g_PadButtons & 0x8000U) == 0) {
    if ((g_PadButtons & 0x2000) == 0) {
      if ((g_PadButtons & 0x4000) == 0) {
        if ((g_PadButtons & 0x1000) == 0) {
          if ((g_PadButtons & 0x60) == 0) {
            if ((g_PadButtons & 0x90) != 0) {
              PlaySFX(0x11);
              iVar5 = GetCarData();
              *(undefined1 *)(iVar5 + 7) = 1;
              g_GameState = 0xe;
            }
          }
          else {
            cVar2 = *(char *)(iVar8 * 6 + *(int *)(param_1[3] + 4) + iVar6);
            if (cVar2 == 'N') {
              PlaySFX(0x13);
            }
            else {
              PlaySFX(0x10);
              iVar5 = GetCarData();
              switch(*(undefined1 *)(iVar5 + 1)) {
              case 0:
                g_GameState = 0x10;
                *(undefined1 *)(iVar5 + 2) = 0;
                break;
              case 1:
                *(undefined1 *)(iVar5 + 2) = 2;
                g_GameState = 0x10;
                break;
              case 2:
                g_GameState = 0xd;
                break;
              case 3:
              case 4:
                g_GameState = 0x11;
              }
              FUN_80069b98(*(undefined1 *)(param_1[2] + 2),cVar2);
            }
          }
        }
        else if (iVar8 == 0) {
          *param_1 = *(int *)param_1[3] + -1;
        }
        else {
          *param_1 = iVar8 + -1;
        }
      }
      else if (iVar8 == *(int *)param_1[3] + -1) {
        *param_1 = 0;
      }
      else {
        *param_1 = iVar8 + 1;
      }
    }
    else if (iVar6 == 5) {
      if (iVar8 != *(int *)param_1[3] + -1) {
        *param_1 = iVar8 + 1;
        param_1[1] = 0;
      }
    }
    else {
      param_1[1] = iVar6 + 1;
    }
  }
  else if (iVar6 == 0) {
    if (iVar8 != 0) {
      *param_1 = iVar8 + -1;
      param_1[1] = 5;
    }
  }
  else {
    param_1[1] = iVar6 + -1;
  }
  iVar5 = param_1[1];
  cVar2 = *(char *)(*param_1 * 6 + *(int *)(param_1[3] + 4) + iVar5);
  while (cVar2 == 'N') {
    iVar5 = iVar5 + -1;
    param_1[1] = iVar5;
    cVar2 = *(char *)(*param_1 * 6 + *(int *)(param_1[3] + 4) + iVar5);
  }
  if (iVar6 != param_1[1]) {
    uVar7 = (uint)*(byte *)(*param_1 * 6 + *(int *)(param_1[3] + 4) + param_1[1]);
    iVar10 = -1;
    iVar6 = GetChampionshipModelData();
    puVar1 = auStack_a0 + 3;
    uVar3 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar3) =
         *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_800229e8 >> (3 - uVar3) * 8;
    auStack_a0._0_4_ = DAT_800229e8;
    puVar1 = auStack_a0 + 7;
    uVar3 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar3) =
         *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_800229ec >> (3 - uVar3) * 8;
    auStack_a0._4_4_ = DAT_800229ec;
    puVar1 = auStack_98 + 3;
    uVar3 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar3) =
         *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_800229f0 >> (3 - uVar3) * 8;
    auStack_98._0_4_ = DAT_800229f0;
    puVar1 = auStack_98 + 7;
    uVar3 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar3) =
         *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_800229f4 >> (3 - uVar3) * 8;
    auStack_98._4_4_ = DAT_800229f4;
    if (uVar7 != 0x4e) {
      GetCarTextureData(g_ChampionshipModelBuffer +
                        *(int *)((uint)*(byte *)(iVar6 + uVar7) * 4 + g_ChampionshipModelBuffer + 4)
                        ,local_90);
      LoadImage((RECT *)auStack_a0,local_84);
      DrawSync(0);
      if ((local_90[0] & 8) != 0) {
        LoadImage((RECT *)auStack_98,local_78);
        DrawSync(0);
      }
    }
    VsyncWait();
  }
  iVar6 = 0;
  if (iVar8 != *param_1) {
    iVar10 = -1;
    pbVar9 = (byte *)(*param_1 * 6 + *(int *)(param_1[3] + 4));
    iVar8 = GetChampionshipCarData();
    iVar5 = GetChampionshipModelData();
    pbVar4 = pbVar9;
    do {
      if (*pbVar4 != 0x4e) {
        InitGhostCarDisplay(g_ChampionshipModelBuffer,*(undefined1 *)(iVar5 + (uint)*pbVar4),
                            g_CarModelBuffer + (uint)*(byte *)(iVar8 + iVar6 + 0xe) * 0x14);
      }
      iVar6 = iVar6 + 1;
      pbVar4 = pbVar9 + iVar6;
    } while (iVar6 != 6);
    VsyncWait();
    uVar7 = (uint)*(byte *)(*param_1 * 6 + *(int *)(param_1[3] + 4) + param_1[1]);
    iVar6 = GetChampionshipModelData();
    puVar1 = auStack_a0 + 3;
    uVar3 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar3) =
         *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_800229e8 >> (3 - uVar3) * 8;
    auStack_a0._0_4_ = DAT_800229e8;
    puVar1 = auStack_a0 + 7;
    uVar3 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar3) =
         *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_800229ec >> (3 - uVar3) * 8;
    auStack_a0._4_4_ = DAT_800229ec;
    puVar1 = auStack_98 + 3;
    uVar3 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar3) =
         *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_800229f0 >> (3 - uVar3) * 8;
    auStack_98._0_4_ = DAT_800229f0;
    puVar1 = auStack_98 + 7;
    uVar3 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar3) =
         *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_800229f4 >> (3 - uVar3) * 8;
    auStack_98._4_4_ = DAT_800229f4;
    if (uVar7 != 0x4e) {
      GetCarTextureData(g_ChampionshipModelBuffer +
                        *(int *)((uint)*(byte *)(iVar6 + uVar7) * 4 + g_ChampionshipModelBuffer + 4)
                        ,local_90);
      LoadImage((RECT *)auStack_a0,local_84);
      DrawSync(0);
      if ((local_90[0] & 8) != 0) {
        LoadImage((RECT *)auStack_98,local_78);
        DrawSync(0);
      }
    }
    InitChampionshipDisplay(*(int *)(param_1[3] + 4) + *param_1 * 6);
    VsyncWait();
  }
  if (iVar10 != 0) {
    PlaySFX(0xf);
  }
  g_TimeAttackVRAMX = 0x68;
  g_TimeAttackFlag2 = 0;
  g_TimeAttackVRAMW = 0x780;
  FUN_80067090(&g_TimeAttackBuffer);
  FUN_80067008(&g_TimeAttackBuffer,DAT_800cbb9c + 4);
  g_TimeAttackVRAMY2 = g_TimeAttackVRAMY2 + 8;
  if (0x1000 < g_TimeAttackVRAMY2) {
    g_TimeAttackVRAMY2 = 0;
  }
  iVar6 = GetRaceSprite1();
  iVar8 = FUN_80067178();
  iVar10 = GetChampionshipCarData();
  iVar5 = (uint)*(ushort *)(iVar8 + 0x7e) << 0x10;
  iVar5 = (iVar5 >> 0x10) - (iVar5 >> 0x1f) >> 1;
  FUN_80066010(g_CarModelBuffer + (uint)*(byte *)(iVar10 + 0x17) * 0x14,
               (int)*(short *)(iVar8 + 0x78),
               (int)(((uint)*(ushort *)(iVar8 + 0x7a) + iVar5 + 10) * 0x10000) >> 0x10,
               (int)*(short *)(iVar8 + 0x7c),iVar5,g_RaceOTPtr1 + 4);
  DrawSpriteScaled(iVar6 + 4,iVar8 + 0x78,g_RaceOTPtr1 + 4);
  iVar6 = GetChampionshipSpriteData();
  iVar8 = FUN_80067178();
  iVar10 = GetRaceSprite1();
  sprintf(acStack_70,"PAGE %d/%d",*param_1 + 1,*(undefined4 *)param_1[3]);
  DrawText(acStack_70,(int)*(short *)(iVar6 + 0x48),(int)*(short *)(iVar6 + 0x4a));
  DrawSpriteScaled(iVar10 + 4,iVar8 + 0x80,g_RaceOTPtr1 + 4);
  if (*(int *)param_1[3] != 1) {
    local_30 = 0xffffffff;
    local_2c = 0xffffffff;
  }
  FUN_80078448(_DAT_800c393c & 0xff,param_1[1],local_30,local_2c,*(undefined1 *)param_1[2],
               *(undefined1 *)(param_1[2] + 1),*(undefined1 *)(param_1[2] + 2));
  _DAT_800c393c = _DAT_800c393c + 8;
  if (0xff < (int)_DAT_800c393c) {
    _DAT_800c393c = 0xff;
  }
  return;
}


