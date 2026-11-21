/* Function: RenderCourseSelect */
/* Address: 8006c548 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RenderCourseSelect(undefined4 param_1,int param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  undefined4 *local_34;
  uint local_30;
  
  local_38 = param_3;
  iVar1 = GetCourseSpritePositions();
  iVar2 = GetRaceSprite1();
  iVar3 = FUN_80067154();
  pbVar4 = (byte *)FUN_80067368();
  iVar8 = iVar2 + 0xc;
  iVar9 = iVar2 + 0x10;
  DrawRaceSprite(iVar3,iVar3 + 8,iVar8,iVar9,_g_CourseDisplayInit,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x10,iVar3 + 0x18,iVar8,iVar9,_g_CourseDisplayInit,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x20,iVar3 + 0x28,iVar8,iVar9,_g_CourseDisplayInit,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x30,iVar3 + 0x38,iVar8,iVar9,_g_CourseDisplayInit,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar3 + 0x40,iVar3 + 0x48,iVar2 + 0x14,iVar2 + 0x18,_g_CourseDisplayInit,
                 g_MenuAnimPtr + 4);
  DrawSpriteEx(g_CarModelBuffer + (uint)*pbVar4 * 0x14,(int)*(short *)(iVar1 + 0x18),
               (int)*(short *)(iVar1 + 0x1a),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  local_34 = &local_40;
  local_30 = (uint)local_38;
  GetMenuItemColor(local_34,&local_3c,local_30,param_2 == 0);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[1] * 0x14,(int)*(short *)(iVar1 + 0x1c),
               (int)*(short *)(iVar1 + 0x1e),g_MenuAnimPtr + 4,local_40,0xffffffff,local_3c);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[2] * 0x14,(int)*(short *)(iVar1 + 0x20),
               (int)*(short *)(iVar1 + 0x22),g_MenuAnimPtr + 4,local_40,0xffffffff,local_3c);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[4] * 0x14,(int)*(short *)(iVar1 + 0x24),
               (int)*(short *)(iVar1 + 0x26),g_MenuAnimPtr + 4,local_40,0xffffffff,local_3c);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[5] * 0x14,(int)*(short *)(iVar1 + 0x28),
               (int)*(short *)(iVar1 + 0x2a),g_MenuAnimPtr + 4,local_40,0xffffffff,local_3c);
  GetMenuItemColor(local_34,&local_3c,local_30,param_2 == 1);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[1] * 0x14,(int)*(short *)(iVar1 + 0x2c),
               (int)*(short *)(iVar1 + 0x2e),g_MenuAnimPtr + 4,local_40,0xffffffff,local_3c);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[3] * 0x14,(int)*(short *)(iVar1 + 0x30),
               (int)*(short *)(iVar1 + 0x32),g_MenuAnimPtr + 4,local_40,0xffffffff,local_3c);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[4] * 0x14,(int)*(short *)(iVar1 + 0x34),
               (int)*(short *)(iVar1 + 0x36),g_MenuAnimPtr + 4,local_40,0xffffffff,local_3c);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[5] * 0x14,(int)*(short *)(iVar1 + 0x38),
               (int)*(short *)(iVar1 + 0x3a),g_MenuAnimPtr + 4,local_40,0xffffffff,local_3c);
  GetMenuItemColor(local_34,&local_3c,local_30,param_2 == 2);
  iVar9 = 0;
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[6] * 0x14,(int)*(short *)(iVar1 + 0x3c),
               (int)*(short *)(iVar1 + 0x3e),g_MenuAnimPtr + 4,local_40,0xffffffff,local_3c);
  iVar8 = 0;
  do {
    if (iVar9 == param_2) {
      iVar6 = iVar2 + 0x1c;
      iVar7 = iVar2 + 0x20;
      iVar5 = param_2 * 8;
    }
    else {
      iVar6 = iVar2 + 0x2c;
      iVar7 = iVar2 + 0x30;
      iVar5 = iVar8;
    }
    DrawRaceSprite(iVar3 + iVar5 + 0x50,iVar3 + iVar5 + 0x68,iVar6,iVar7,_g_CourseDisplayInit,
                   g_MenuAnimPtr + 4);
    iVar5 = iVar8 + 0x80;
    iVar6 = iVar8 + 0x98;
    iVar8 = iVar8 + 8;
    iVar9 = iVar9 + 1;
    DrawRaceSpriteEx(iVar3 + iVar5,iVar3 + iVar6,iVar2 + 0xc4,iVar2 + 0xd4,_g_CourseDisplayInit,
                     g_MenuAnimPtr + 4);
  } while (iVar9 != 3);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[7] * 0x14,(int)*(short *)(iVar1 + 0x40),
               (int)*(short *)(iVar1 + 0x42),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar4[param_2 + 8] * 0x14,(int)*(short *)(iVar1 + 0x44),
               (int)*(short *)(iVar1 + 0x46),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  return;
}


