/* Function: UpdateRace_Replay */
/* Address: 80073764 */

code * UpdateRace_Replay(undefined1 *param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  code *local_30;
  
  local_30 = UpdateRace_Replay;
  iVar6 = FUN_800679a4(*param_1,param_1[1]);
  if ((g_PadButtons & 0x2000) == 0) {
    if ((g_PadButtons & 0x8000) == 0) {
      if ((g_PadButtons & 0x60) != 0) {
        iVar6 = 0;
        local_30 = (code *)&LAB_80073d60;
        *(undefined4 *)(param_1 + 0x14) = 0;
        param_1[5] = 1;
        do {
          iVar16 = 0;
          iVar7 = GetRaceSprite1();
          iVar9 = GetRaceSprite2();
          iVar14 = 0xe8;
          iVar13 = 0xb8;
          DrawSpriteScaled(iVar7 + 4,iVar9 + 0x170,g_RaceOTPtr1 + 4);
          iVar7 = GetRaceSprite2();
          iVar9 = GetRaceSprite1();
          iVar10 = iVar7 + 0xb8;
          do {
            iVar11 = iVar7 + iVar14;
            iVar14 = iVar14 + 8;
            iVar13 = iVar13 + 8;
            iVar16 = iVar16 + 1;
            DrawRaceSprite(iVar10,iVar11,iVar9 + 4,iVar9 + 4,0xff,g_MenuAnimPtr + 4);
            iVar10 = iVar7 + iVar13;
          } while (iVar16 != 6);
          iVar6 = iVar6 + 1;
          VsyncWait();
        } while (iVar6 != 2);
        ClearVRAMRegion(&g_RacePaletteRegion);
        DrawSync(0);
        LoadPalette(&g_RacePaletteRegion,0,0,&DAT_800228f8);
        VsyncWait();
        PlaySFX(0x10);
        return local_30;
      }
      if ((g_PadButtons & 0x90) != 0) {
        PlaySFX(0x11);
        iVar7 = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        uVar5 = GetReplayTrackIndex(*(undefined1 *)(*(int *)(iVar6 + 4) + (uint)(byte)param_1[2]));
        local_30 = (code *)&LAB_80072c90;
        param_1[3] = uVar5;
        do {
          iVar16 = 0;
          iVar6 = GetRaceSprite1();
          iVar9 = GetRaceSprite2();
          iVar14 = 0xe8;
          iVar13 = 0xb8;
          DrawSpriteScaled(iVar6 + 4,iVar9 + 0x170,g_RaceOTPtr1 + 4);
          iVar6 = GetRaceSprite2();
          iVar9 = GetRaceSprite1();
          iVar10 = iVar6 + 0xb8;
          do {
            iVar11 = iVar6 + iVar14;
            iVar14 = iVar14 + 8;
            iVar13 = iVar13 + 8;
            iVar16 = iVar16 + 1;
            DrawRaceSprite(iVar10,iVar11,iVar9 + 4,iVar9 + 4,0xff,g_MenuAnimPtr + 4);
            iVar10 = iVar6 + iVar13;
          } while (iVar16 != 6);
          iVar7 = iVar7 + 1;
          VsyncWait();
        } while (iVar7 != 2);
        ClearVRAMRegion(&g_RacePaletteRegion);
        DrawSync(0);
        LoadPalette(&DAT_800c3920,0,0,&DAT_80022910);
        LoadPalette(&DAT_800c392e,0,0,&DAT_80022934);
        VsyncWait();
        return local_30;
      }
    }
    else if (param_1[4] != '\0') {
      param_1[4] = param_1[4] + -1;
      goto LAB_80073800;
    }
  }
  else if (param_1[4] != '\x01') {
    param_1[4] = param_1[4] + '\x01';
LAB_80073800:
    PlaySFX(0xf);
  }
  iVar7 = FUN_80066d8c(&g_RaceBuffer1);
  uVar1 = g_PadButtons;
  if (iVar7 != -1) {
    DrawText("LOADING...",0x40,0x70);
    goto LAB_80073bc0;
  }
  iVar7 = FUN_800679a4(*param_1,param_1[1]);
  pbVar8 = (byte *)GetCarData();
  uVar5 = *(undefined1 *)(*(int *)(iVar7 + 4) + (uint)(byte)param_1[2]);
  if (*pbVar8 - 4 < 2) {
    iVar7 = GetReplayCarData(uVar5);
    uVar2 = FUN_8006781c(uVar5);
    if (*(short *)(iVar7 + 0xae) != 0) {
      uVar5 = uVar2;
    }
  }
  cVar3 = FUN_80067644(uVar5);
  if (cVar3 != '\0') {
    cVar3 = param_1[3];
    if ((uVar1 & 0x4000) == 0) {
      if ((uVar1 & 0x1000) != 0) {
        cVar4 = cVar3 + -1;
        if (cVar3 == '\0') {
          cVar4 = '\x02';
        }
        goto LAB_80073b14;
      }
    }
    else {
      cVar4 = cVar3 + '\x01';
      if (cVar3 == '\x02') {
        param_1[3] = 0;
      }
      else {
LAB_80073b14:
        param_1[3] = cVar4;
      }
      PlaySFX(0xf);
    }
    if (cVar3 != param_1[3]) {
      FUN_80063a34(&g_RaceBuffer1,DAT_800cdb04);
    }
  }
  iVar7 = GetCarPositionData();
  DAT_800cdae0 = *(undefined2 *)(iVar7 + 0x88);
  DAT_800cdae4 = 0x6f8;
  DAT_800cdae2 = *(short *)(iVar7 + 0x8a) + 0x20;
  FUN_80067090(&g_RaceBuffer1);
  FUN_8006704c(&g_RaceBuffer1,DAT_800cbb9c + 4);
  g_RaceVRAMY1 = g_RaceVRAMY1 + 10;
  if (0x1000 < g_RaceVRAMY1) {
    g_RaceVRAMY1 = 0;
  }
LAB_80073bc0:
  iVar7 = GetRaceSprite1();
  iVar9 = GetRaceSprite2();
  iVar10 = GetSelectedCarData();
  DrawSpriteScaled(iVar7 + 4,iVar9 + 0x1c8,g_RaceOTPtr1 + 4);
  FUN_80066010(g_CarModelBuffer + (uint)*(byte *)(iVar10 + 0x2b) * 0x14,0xffffff98,0x4c,0x1c8,0x50,
               g_MenuAnimPtr + 4);
  pbVar8 = (byte *)GetCarData();
  uVar5 = *(undefined1 *)(*(int *)(iVar6 + 4) + (uint)(byte)param_1[2]);
  if (*pbVar8 - 4 < 2) {
    iVar6 = GetReplayCarData(uVar5);
    uVar2 = FUN_8006781c(uVar5);
    if (*(short *)(iVar6 + 0xae) != 0) {
      uVar5 = uVar2;
    }
  }
  cVar3 = FUN_80067854(uVar5);
  uVar12 = 0xffffffff;
  if (cVar3 == '\0') {
    uVar12 = 0;
    uVar15 = 0xffffffff;
  }
  else {
    uVar15 = 0;
  }
  uVar5 = GetDefaultCarIndex(uVar5);
  uVar5 = FUN_80067870(uVar5);
  FUN_8007053c(param_1,param_1[0x10],param_1[0x14],param_1[0x14],param_1[4],uVar12,uVar5,uVar15);
  iVar6 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar6 + 8;
  if (0xff < iVar6 + 8) {
    *(undefined4 *)(param_1 + 0x14) = 0xff;
  }
  iVar6 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar6 + 8;
  if (0xff < iVar6 + 8) {
    *(undefined4 *)(param_1 + 0x10) = 0xff;
  }
  return local_30;
}


