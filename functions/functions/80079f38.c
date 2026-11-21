/* Function: RenderGhostCarSelect */
/* Address: 80079f38 */

void RenderGhostCarSelect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte local_40 [16];
  uint local_30;
  
  iVar2 = FUN_80067250();
  iVar3 = GetGhostCarData();
  iVar4 = GetGhostCarTable(param_3);
  local_30 = (uint)*(byte *)(iVar4 + param_4);
  iVar4 = GetRaceSprite1();
  iVar5 = FUN_80067184();
  iVar4 = iVar4 + 4;
  DrawSpriteScaled(iVar4,iVar5 + 0x60,g_RaceOTPtr1 + 4);
  DrawSpriteScaled(iVar4,iVar5 + 0x68,g_RaceOTPtr1 + 4);
  DrawSpriteScaled(iVar4,iVar5 + 0x78,g_RaceOTPtr1 + 4);
  DrawSpriteScaled(iVar4,iVar5 + 0x80,g_RaceOTPtr1 + 4);
  if (param_5 == 0) {
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar3 + 0x2d) * 0x14,
                 *(short *)(iVar2 + 0x18) + -0x40,*(short *)(iVar2 + 0x1a) + -4,g_MenuAnimPtr + 4,0,
                 0xffffffff,0xffffffff);
    iVar5 = 0;
    DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar3 + 0x2e) * 0x14,
                 *(short *)(iVar2 + 0x20) + -0x40,*(short *)(iVar2 + 0x22) + -4,g_MenuAnimPtr + 4,0,
                 0xffffffff,0xffffffff);
    uVar6 = GetResultSavePtr1(local_30);
    sVar1 = *(short *)(iVar2 + 0x1e);
    iVar9 = *(short *)(iVar2 + 0x1c) + -0x40;
    FUN_80079764(uVar6,local_40);
    iVar4 = iVar9;
    do {
      if (iVar5 == 0) {
        uVar7 = (uint)local_40[0];
        iVar8 = iVar9;
        if (uVar7 != 0) goto LAB_8007a140;
      }
      else {
        uVar7 = (uint)local_40[iVar5];
        iVar8 = iVar4;
LAB_8007a140:
        DrawSpriteEx(g_CarModelBuffer + uVar7 * 0x14,iVar8,(int)sVar1,g_MenuAnimPtr + 4,0,0xffffffff
                     ,0xffffffff);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar5 != 9);
    iVar5 = 0;
    uVar6 = GetResultSavePtr2(local_30);
    sVar1 = *(short *)(iVar2 + 0x26);
    iVar9 = *(short *)(iVar2 + 0x24) + -0x40;
    FUN_80079764(uVar6,local_40);
    iVar4 = iVar9;
    do {
      if (iVar5 == 0) {
        uVar7 = (uint)local_40[0];
        iVar8 = iVar9;
        if (uVar7 != 0) goto LAB_8007a20c;
      }
      else {
        uVar7 = (uint)local_40[iVar5];
        iVar8 = iVar4;
LAB_8007a20c:
        DrawSpriteEx(g_CarModelBuffer + uVar7 * 0x14,iVar8,(int)sVar1,g_MenuAnimPtr + 4,0,0xffffffff
                     ,0xffffffff);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar5 != 9);
  }
  FUN_80066010(g_CarModelBuffer + (uint)*(byte *)(iVar3 + 0x2a) * 0x14,
               (int)((*(ushort *)(iVar2 + 0x14) + 0x38) * 0x10000) >> 0x10,
               (int)((*(ushort *)(iVar2 + 0x16) - 0x30) * 0x10000) >> 0x10,0x140,0xf0,
               g_RaceOTPtr1 + 4);
  iVar5 = iVar3 + local_30;
  FUN_80066010(g_CarModelBuffer + (uint)*(byte *)(iVar5 + 6) * 0x14,
               (int)((*(ushort *)(iVar2 + 0x28) - 0x112) * 0x10000) >> 0x10,
               (int)((*(ushort *)(iVar2 + 0x2a) + 0x90) * 0x10000) >> 0x10,0x66,0x4e,
               g_RaceOTPtr2 + 4);
  iVar4 = iVar2 + local_30 * 4;
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar5 + 0x12) * 0x14,
               (int)*(short *)(iVar2 + 0x2c) + (int)*(short *)(iVar4 + 0x30),
               (int)*(short *)(iVar2 + 0x2e) + (int)*(short *)(iVar4 + 0x32),g_MenuAnimPtr + 4,0,
               0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar3 + 5) * 0x14,*(short *)(iVar2 + 0x60) + -0x2c
               ,*(short *)(iVar2 + 0x62) + 0x18,g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar5 + 0x1e) * 0x14,
               *(short *)(iVar2 + 100) + -0x2c,*(short *)(iVar2 + 0x66) + 0x18,g_MenuAnimPtr + 4,0,
               0xffffffff,0xffffffff);
  return;
}


