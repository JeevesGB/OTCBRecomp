/* Function: FUN_8007d6a0 */
/* Address: 8007d6a0 */

void FUN_8007d6a0(int param_1,undefined1 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  char acStack_68 [64];
  
  iVar2 = GetReplaySpritePositions2();
  iVar3 = FUN_800673bc();
  iVar4 = GetRaceSprite1();
  iVar5 = FUN_8006719c();
  iVar9 = **(int **)(param_1 + 0xc) + -1;
  FUN_8007d07c(param_2);
  if (param_4 != 0) {
    iVar6 = FUN_800673bc();
    iVar7 = GetReplaySpritePositions2();
    if (param_3 == 0) {
      bVar1 = *(byte *)(iVar6 + 0x1f);
    }
    else {
      bVar1 = *(byte *)(iVar6 + 0x20);
    }
    DrawSpriteEx(g_CarModelBuffer + (uint)bVar1 * 0x14,(int)*(short *)(iVar7 + 0x4c),
                 (int)*(short *)(iVar7 + 0x4e),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  }
  iVar6 = FUN_800673bc();
  iVar7 = GetReplaySpritePositions2();
  if (param_3 == 0) {
    bVar1 = *(byte *)(iVar6 + 0x1f);
  }
  else {
    bVar1 = *(byte *)(iVar6 + 0x20);
  }
  DrawSpriteEx(g_CarModelBuffer + (uint)bVar1 * 0x14,(int)*(short *)(iVar7 + 0x4c),
               (int)*(short *)(iVar7 + 0x4e),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  uVar8 = GetCarBaseColor();
  FUN_800650e0(iVar5 + 0xb0,iVar5 + 0xb0,4,3,iVar4 + 0x1c,iVar4 + 0x20,uVar8,g_MenuAnimPtr + 4);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar3 + iVar9 + 7) * 0x14,
               (int)*(short *)(iVar2 + 0x50),(int)*(short *)(iVar2 + 0x52),DAT_800cbba0 + 4,0,
               0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar3 + 1) * 0x14,(int)*(short *)(iVar2 + 0x7c),
               (int)*(short *)(iVar2 + 0x7e),g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteFlipped((int)*(short *)(iVar2 + 0x80),(int)*(short *)(iVar2 + 0x82),
                    &g_ReplayPaletteRegion,g_RaceOTPtr1 + 4);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar3 + 0xf) * 0x14,(int)*(short *)(iVar2 + 0x54),
               (int)*(short *)(iVar2 + 0x56),g_RaceOTPtr1 + 4,0,0xffffffff,0xffffffff);
  iVar9 = iVar9 * 10;
  DrawSpriteEx(g_CarModelBuffer +
               (uint)*(byte *)(iVar3 + (uint)*(byte *)(iVar9 + *(int *)(*(int *)(param_1 + 0xc) + 4)
                                                      + 1) + 0x10) * 0x14,
               (int)*(short *)(iVar2 + 0x58),(int)*(short *)(iVar2 + 0x5a),g_RaceOTPtr1 + 4,0,
               0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar3 + 0x1c) * 0x14,(int)*(short *)(iVar2 + 100),
               (int)*(short *)(iVar2 + 0x66),g_RaceOTPtr1 + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar3 + 0x1d) * 0x14,(int)*(short *)(iVar2 + 0x5c)
               ,(int)*(short *)(iVar2 + 0x5e),g_RaceOTPtr1 + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)*(byte *)(iVar3 + 0x1e) * 0x14,(int)*(short *)(iVar2 + 0x60)
               ,(int)*(short *)(iVar2 + 0x62),g_RaceOTPtr1 + 4,0,0xffffffff,0xffffffff);
  sprintf(acStack_68,"%d",(uint)*(ushort *)(iVar9 + *(int *)(*(int *)(param_1 + 0xc) + 4) + 2));
  DrawText(acStack_68,(int)*(short *)(iVar2 + 0x68),(int)*(short *)(iVar2 + 0x6a));
  sprintf(acStack_68,"%d",(uint)*(ushort *)(iVar9 + *(int *)(*(int *)(param_1 + 0xc) + 4) + 4));
  DrawText(acStack_68,(int)*(short *)(iVar2 + 0x6c),(int)*(short *)(iVar2 + 0x6e));
  return;
}


