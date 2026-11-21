/* Function: FUN_8006fffc */
/* Address: 8006fffc */

void FUN_8006fffc(undefined1 *param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4,
                 int param_5,int param_6,int param_7,int param_8)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  short *psVar10;
  undefined1 *puVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 uVar16;
  int iVar17;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_48 [4];
  undefined1 local_44;
  undefined1 local_43;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  int local_34;
  int local_30;
  
  local_38 = param_4;
  local_34 = GetCarPositionData();
  iVar4 = GetRaceSprite2();
  iVar5 = GetRaceSprite1();
  local_30 = GetSelectedCarData();
  piVar6 = (int *)FUN_800679a4(*param_1,param_1[1]);
  iVar7 = GetRaceSprite2();
  iVar8 = GetRaceSprite1();
  DrawRaceSprite(iVar7,iVar7 + 8,iVar8 + 0xc,iVar8 + 0x10,param_2,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar7 + 0x10,iVar7 + 0x18,iVar8 + 0xc,iVar8 + 0x10,param_2,g_MenuAnimPtr + 4);
  iVar7 = GetRaceSprite2();
  iVar8 = GetRaceSprite1();
  DrawRaceSprite(iVar7 + 0x20,iVar7 + 0x28,iVar8 + 0x14,iVar8 + 0x18,param_2,g_MenuAnimPtr + 4);
  pbVar9 = (byte *)GetSelectedCarData();
  psVar10 = (short *)GetCarPositionData();
  DrawSpriteEx(g_CarModelBuffer + (uint)*pbVar9 * 0x14,(int)*psVar10,(int)psVar10[1],
               g_RaceOTPtr2 + 4,0,0xffffffff,0xffffffff);
  if (param_7 != 0) {
    iVar7 = GetSelectedCarData();
    iVar8 = GetCarPositionData();
    if (param_6 == 0) {
      bVar1 = *(byte *)(iVar7 + 0x31);
    }
    else {
      bVar1 = *(byte *)(iVar7 + 0x32);
    }
    DrawSpriteEx(g_CarModelBuffer + (uint)bVar1 * 0x14,(int)*(short *)(iVar8 + 0x11c),
                 (int)*(short *)(iVar8 + 0x11e),g_RaceOTPtr2 + 4,0,0xffffffff,0xffffffff);
  }
  pbVar9 = (byte *)GetCarData();
  uVar16 = *(undefined1 *)(piVar6[1] + (uint)(byte)param_1[2]);
  if (*pbVar9 - 4 < 2) {
    iVar7 = GetReplayCarData(uVar16);
    uVar2 = FUN_8006781c(uVar16);
    if (*(short *)(iVar7 + 0xae) != 0) {
      DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_30 + 0x35) * 0x14,
                   (int)*(short *)(local_34 + 0x120),(int)*(short *)(local_34 + 0x122),
                   g_RaceOTPtr2 + 4,0,0xffffffff,0xffffffff);
      uVar16 = uVar2;
    }
  }
  FUN_8006e570(uVar16);
  local_50 = 0xff;
  local_4f = 0xff;
  local_56 = GetCarBaseColor();
  local_58 = local_50;
  local_57 = local_4f;
  local_4e = local_56;
  CalcFadeValue(&local_58,*param_1,param_1[1],*(undefined1 *)(piVar6[1] + param_5));
  uVar16 = local_38;
  iVar7 = 0;
  if (*piVar6 != 0) {
    iVar17 = 0x88;
    iVar8 = 0x58;
    do {
      if (iVar7 == param_5) {
        iVar14 = iVar5 + 0x1c;
        iVar15 = iVar5 + 0x20;
      }
      else {
        iVar14 = iVar5 + 0x2c;
        iVar15 = iVar5 + 0x30;
      }
      DrawRaceSprite(iVar4 + iVar8,iVar4 + iVar17,iVar14,iVar15,uVar16,g_MenuAnimPtr + 4);
      iVar17 = iVar17 + 8;
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 8;
    } while (iVar7 != *piVar6);
  }
  local_48[0] = local_38;
  local_48[1] = local_38;
  local_48[2] = local_38;
  local_48[3] = local_38;
  local_44 = local_38;
  local_43 = local_38;
  iVar8 = *piVar6;
  iVar7 = 0;
  iVar4 = GetRaceSprite2();
  iVar5 = GetRaceSprite1();
  if (iVar8 != 0) {
    iVar15 = 0xe8;
    iVar14 = 0xb8;
    iVar17 = iVar4 + 0xb8;
    do {
      iVar13 = iVar4 + iVar15;
      iVar15 = iVar15 + 8;
      iVar14 = iVar14 + 8;
      puVar11 = local_48 + iVar7;
      iVar7 = iVar7 + 1;
      DrawRaceSpriteEx(iVar17,iVar13,iVar5 + 0xc4,iVar5 + 0xd4,*puVar11,g_MenuAnimPtr + 4);
      iVar17 = iVar4 + iVar14;
    } while (iVar7 != iVar8);
  }
  iVar5 = 0;
  iVar4 = local_34;
  if (*piVar6 != 0) {
    do {
      if (*(char *)(param_8 + iVar5) != '\0') {
        bVar1 = *(byte *)(local_30 + iVar5 + 0x1f);
        GetMenuItemColor(&local_40,&local_3c,g_RaceColorCycle,param_5 == iVar5);
        cVar3 = IsReplaySlotFull(*(undefined1 *)(piVar6[1] + iVar5));
        if (cVar3 == '\0') {
          local_40 = 1;
        }
        pbVar9 = (byte *)GetCarData();
        if ((*pbVar9 - 4 < 2) &&
           (pcVar12 = (char *)GetReplayCarData(*(undefined1 *)(piVar6[1] + iVar5)),
           *pcVar12 == '\x02')) {
          local_40 = 3;
        }
        DrawSpriteEx(g_CarModelBuffer + (uint)bVar1 * 0x14,(int)*(short *)(iVar4 + 4),
                     (int)*(short *)(iVar4 + 6),g_RaceOTPtr2 + 4,local_40,0xffffffff,local_3c);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 != *piVar6);
  }
  return;
}


