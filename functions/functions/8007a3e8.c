/* Function: FUN_8007a3e8 */
/* Address: 8007a3e8 */

void FUN_8007a3e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte local_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  
  iVar2 = FUN_80067250();
  local_30 = GetGhostCarData();
  iVar3 = GetGhostCarTable(param_3);
  uVar9 = (uint)*(byte *)(iVar3 + param_4);
  iVar3 = GetRaceSprite1();
  iVar4 = FUN_80067184();
  iVar3 = iVar3 + 4;
  DrawSpriteScaled(iVar3,iVar4 + 0x68,g_RaceOTPtr1 + 4);
  DrawSpriteScaled(iVar3,iVar4 + 0x78,g_RaceOTPtr1 + 4);
  DrawSpriteScaled(iVar3,iVar4 + 0x80,g_RaceOTPtr1 + 4);
  if (param_5 == 0) {
    iVar4 = 0;
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_30 + 0x2d) * 0x14,
                 *(short *)(iVar2 + 0x18) + -0x40,*(short *)(iVar2 + 0x1a) + -4,g_MenuAnimPtr + 4,0,
                 0xffffffff,0xffffffff);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_30 + 0x2e) * 0x14,
                 *(short *)(iVar2 + 0x20) + -0x40,*(short *)(iVar2 + 0x22) + -4,g_MenuAnimPtr + 4,0,
                 0xffffffff,0xffffffff);
    uVar5 = GetResultSavePtr1(uVar9);
    sVar1 = *(short *)(iVar2 + 0x1e);
    iVar8 = *(short *)(iVar2 + 0x1c) + -0x40;
    FUN_80079764(uVar5,local_50);
    iVar3 = iVar8;
    do {
      if (iVar4 == 0) {
        uVar6 = (uint)local_50[0];
        iVar7 = iVar8;
        if (uVar6 != 0) goto LAB_8007a5e4;
      }
      else {
        uVar6 = (uint)local_50[iVar4];
        iVar7 = iVar3;
LAB_8007a5e4:
        DrawSpriteEx(g_CarModelBuffer + uVar6 * 0x14,iVar7,(int)sVar1,g_MenuAnimPtr + 4,0,0xffffffff
                     ,0xffffffff);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar4 != 9);
    uVar5 = GetResultSavePtr2(uVar9);
    iVar4 = 0;
    sVar1 = *(short *)(iVar2 + 0x26);
    iVar8 = *(short *)(iVar2 + 0x24) + -0x40;
    FUN_80079764(uVar5,local_50);
    iVar3 = iVar8;
    do {
      if (iVar4 == 0) {
        uVar6 = (uint)local_50[0];
        iVar7 = iVar8;
        if (uVar6 != 0) goto LAB_8007a6b0;
      }
      else {
        uVar6 = (uint)local_50[iVar4];
        iVar7 = iVar3;
LAB_8007a6b0:
        DrawSpriteEx(g_CarModelBuffer + uVar6 * 0x14,iVar7,(int)sVar1,g_MenuAnimPtr + 4,0,0xffffffff
                     ,0xffffffff);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar4 != 9);
  }
  iVar3 = iVar2 + uVar9 * 4;
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_30 + uVar9 + 0x12) * 0x14,
               (int)*(short *)(iVar2 + 0x2c) + (int)*(short *)(iVar3 + 0x30),
               (int)*(short *)(iVar2 + 0x2e) + (int)*(short *)(iVar3 + 0x32),g_MenuAnimPtr + 4,0,
               0xffffffff,0xffffffff);
  if (param_6 != 0) {
    GetMenuItemColor(&local_40,&local_3c,param_2,0xffffffff);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_30 + 0x2b) * 0x14,
                 (int)*(short *)(iVar2 + 0x70),(int)*(short *)(iVar2 + 0x72),g_MenuAnimPtr + 4,
                 local_40,0xffffffff,local_3c);
  }
  if (param_7 != 0) {
    GetMenuItemColor(&local_38,&local_34,param_2,0xffffffff);
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(local_30 + 0x2c) * 0x14,
                 (int)*(short *)(iVar2 + 0x74),(int)*(short *)(iVar2 + 0x76),g_MenuAnimPtr + 4,
                 local_38,0xffffffff,local_34);
  }
  return;
}


