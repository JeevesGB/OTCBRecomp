/* Function: UpdateRace_1P */
/* Address: 800720dc */

code * UpdateRace_1P(byte *param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  code *local_30;
  
  local_30 = UpdateRace_1P;
  if ((g_PadButtons & 0x4000) == 0) {
    if ((g_PadButtons & 0x1000) == 0) {
      if ((g_PadButtons & 0x60) == 0) {
        if ((g_PadButtons & 0x90) != 0) {
          param_1[0x14] = 0;
          param_1[0x15] = 0;
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          puVar4 = (undefined1 *)GetCarData();
          switch(*puVar4) {
          case 0:
          case 1:
          case 2:
            g_GameState = 0xc;
            break;
          case 3:
            g_GameState = 0xd;
            break;
          case 4:
            g_GameState = 0xb;
            break;
          case 5:
            iVar8 = GetCarReplayData();
            uVar3 = *(undefined1 *)(iVar8 + 0x11);
            iVar9 = GetReplayCarData(uVar3);
            uVar3 = GetReplayCarIndex(uVar3);
            if (*(short *)(iVar9 + 0xae) == 0) {
              *(undefined1 *)(iVar8 + 0xf) = 0;
              *(undefined1 *)(iVar8 + 0x11) = uVar3;
              uVar3 = GetReplayTrackIndex();
              *(undefined1 *)(iVar8 + 0x12) = uVar3;
            }
            g_GameState = 0x12;
          }
          PlaySFX(0x11);
          return local_30;
        }
      }
      else {
        iVar8 = IsCarUnlocked(*param_1);
        if (iVar8 != 0) {
          iVar8 = 0;
          local_30 = (code *)&g_UpdateRace_2P;
          param_1[0x14] = 0;
          param_1[0x15] = 0;
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          param_1[0x1c] = 0;
          param_1[0x1d] = 0;
          param_1[0x1e] = 0;
          param_1[0x1f] = 0;
          param_1[0x18] = 0xff;
          param_1[0x19] = 0;
          param_1[0x1a] = 0;
          param_1[0x1b] = 0;
          param_1[1] = 0;
          do {
            iVar13 = 0;
            iVar9 = GetRaceSprite1();
            iVar11 = GetRaceSprite2();
            iVar12 = 0xe8;
            iVar10 = 0xb8;
            DrawSpriteScaled(iVar9 + 4,iVar11 + 0x148,g_RaceOTPtr1 + 4);
            iVar9 = GetRaceSprite2();
            iVar11 = GetRaceSprite1();
            iVar5 = iVar9 + 0xb8;
            do {
              iVar6 = iVar9 + iVar12;
              iVar12 = iVar12 + 8;
              iVar10 = iVar10 + 8;
              iVar13 = iVar13 + 1;
              DrawRaceSprite(iVar5,iVar6,iVar11 + 4,iVar11 + 4,0xff,g_MenuAnimPtr + 4);
              iVar5 = iVar9 + iVar10;
            } while (iVar13 != 6);
            iVar8 = iVar8 + 1;
            VsyncWait();
            iVar9 = 0;
          } while (iVar8 != 2);
          bVar2 = *param_1;
          iVar8 = (uint)param_1[1] * 0x14;
          do {
            iVar5 = iVar9 << 4;
            iVar11 = iVar8 + (uint)bVar2 * 0x50;
            iVar8 = iVar8 + 4;
            iVar9 = iVar9 + 1;
            LoadPalette(&g_RacePaletteRegion,0,iVar5,
                        *(undefined4 *)((int)&g_CarPaletteTable_A + iVar11));
          } while (iVar9 != 5);
          VsyncWait();
          VsyncWait();
          PlaySFX(0x10);
          return local_30;
        }
        PlaySFX(0x13);
      }
      goto LAB_800724b0;
    }
    bVar2 = *param_1 - 1;
    if (*param_1 == 0) {
      bVar2 = 3;
    }
    *param_1 = bVar2;
    PlaySFX(0xf);
    iVar11 = 0;
    bVar2 = *param_1;
    iVar9 = 0;
    cVar1 = IsCarUnlocked((uint)bVar2);
    iVar8 = (uint)bVar2 * 0x28;
    do {
      if (cVar1 == '\0') {
        uVar7 = *(undefined4 *)(iVar8 + -0x7ff488dc);
      }
      else {
        uVar7 = *(undefined4 *)((int)&g_CarPaletteTable_B + iVar8);
      }
      LoadPalette(&g_RacePaletteRegion,0,iVar9,uVar7);
      iVar8 = iVar8 + 4;
      iVar11 = iVar11 + 1;
      iVar9 = iVar9 + 0x10;
    } while (iVar11 != 5);
  }
  else {
    if (*param_1 == 3) {
      *param_1 = 0;
    }
    else {
      *param_1 = *param_1 + 1;
    }
    PlaySFX(0xf);
    iVar11 = 0;
    bVar2 = *param_1;
    iVar9 = 0;
    cVar1 = IsCarUnlocked((uint)bVar2);
    iVar8 = (uint)bVar2 * 0x28;
    do {
      if (cVar1 == '\0') {
        uVar7 = *(undefined4 *)(iVar8 + -0x7ff488dc);
      }
      else {
        uVar7 = *(undefined4 *)((int)&g_CarPaletteTable_B + iVar8);
      }
      LoadPalette(&g_RacePaletteRegion,0,iVar9,uVar7);
      iVar8 = iVar8 + 4;
      iVar11 = iVar11 + 1;
      iVar9 = iVar9 + 0x10;
    } while (iVar11 != 5);
  }
  VsyncWait();
  VsyncWait();
LAB_800724b0:
  UpdateCarFadeIn(param_1,param_1[0x10],param_1[0x18],param_1[0x14],*param_1);
  iVar8 = *(int *)(param_1 + 0x14);
  if (iVar8 == 0) {
    iVar8 = GetSelectedCarData();
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar8 + 0x34) * 0x14,0xfffffed4,0xffffffa0,
                 g_RaceOTPtr1 + 4,0,0xffffffff,0xffffffff);
    iVar8 = *(int *)(param_1 + 0x14);
  }
  *(int *)(param_1 + 0x14) = iVar8 + 8;
  if (0xff < iVar8 + 8) {
    param_1[0x14] = 0xff;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  iVar8 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar8 + 8;
  if (0xff < iVar8 + 8) {
    param_1[0x10] = 0xff;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  iVar8 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar8 + 8;
  if (0xff < iVar8 + 8) {
    param_1[0x18] = 0xff;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  return local_30;
}


