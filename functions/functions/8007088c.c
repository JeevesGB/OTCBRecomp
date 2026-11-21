/* Function: FUN_8007088c */
/* Address: 8007088c */

void FUN_8007088c(undefined1 *param_1,undefined1 param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  short *psVar7;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  
  iVar2 = GetCarPositionData();
  local_30 = GetSelectedCarData();
  iVar3 = FUN_800679a4(*param_1,param_1[1]);
  iVar4 = GetRaceSprite2();
  iVar5 = GetRaceSprite1();
  DrawRaceSprite(iVar4,iVar4 + 8,iVar5 + 0xc,iVar5 + 0x10,param_2,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar4 + 0x10,iVar4 + 0x18,iVar5 + 0xc,iVar5 + 0x10,param_2,g_MenuAnimPtr + 4);
  iVar4 = GetRaceSprite2();
  iVar5 = GetRaceSprite1();
  DrawRaceSprite(iVar4 + 0x20,iVar4 + 0x28,iVar5 + 0x14,iVar5 + 0x18,param_2,g_MenuAnimPtr + 4);
  pbVar6 = (byte *)GetSelectedCarData();
  psVar7 = (short *)GetCarPositionData();
  DrawSpriteEx(g_CarModelBuffer + (uint)*pbVar6 * 0x14,(int)*psVar7,(int)psVar7[1],g_RaceOTPtr2 + 4,
               0,0xffffffff,0xffffffff);
  if (param_5 != 0) {
    iVar4 = GetSelectedCarData();
    iVar5 = GetCarPositionData();
    if (param_4 == 0) {
      bVar1 = *(byte *)(iVar4 + 0x31);
    }
    else {
      bVar1 = *(byte *)(iVar4 + 0x32);
    }
    DrawSpriteEx(g_CarModelBuffer + (uint)bVar1 * 0x14,(int)*(short *)(iVar5 + 0x11c),
                 (int)*(short *)(iVar5 + 0x11e),g_RaceOTPtr2 + 4,0,0xffffffff,0xffffffff);
  }
  local_40 = DAT_80022958;
  local_3f = DAT_80022959;
  local_3e = DAT_8002295a;
  CalcFadeValue(&local_40,*param_1,param_1[1],
                *(undefined1 *)(*(int *)(iVar3 + 4) + (uint)(byte)param_1[2]));
  DrawSpriteFlipped((int)*(short *)(iVar2 + 0x68),(int)*(short *)(iVar2 + 0x6a),&g_RacePaletteRegion
                    ,g_MenuAnimPtr + 4);
  GetMenuItemColor(&local_38,&local_34,g_RaceColorCycle,param_3 == 0);
  if (param_3 == 0) {
    local_38 = 2;
  }
  else {
    local_38 = 0;
  }
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_30 + 0x2f) * 0x14,
               (int)*(short *)(iVar2 + 0x74),(int)*(short *)(iVar2 + 0x76),g_RaceOTPtr2 + 4,local_38
               ,0xffffffff,local_34);
  GetMenuItemColor(&local_38,&local_34,g_RaceColorCycle,param_3 == 1);
  if (param_3 == 1) {
    local_38 = 2;
  }
  else {
    local_38 = 0;
  }
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_30 + 0x30) * 0x14,
               (int)*(short *)(iVar2 + 0x78),(int)*(short *)(iVar2 + 0x7a),g_RaceOTPtr2 + 4,local_38
               ,0xffffffff,local_34);
  return;
}


