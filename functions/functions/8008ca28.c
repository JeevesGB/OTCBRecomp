/* Function: FUN_8008ca28 */
/* Address: 8008ca28 */

void FUN_8008ca28(undefined4 param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  byte *pbVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar5 = GetRaceSprite1();
  puVar6 = (uint *)FUN_8006728c();
  pbVar7 = (byte *)FUN_800673d4();
  auStack_38 = (undefined1  [4])*puVar6;
  local_30 = (uint)auStack_38;
  local_2c = CONCAT22(*(undefined2 *)((uint)*pbVar7 * 0x14 + g_CarModelBuffer + 6),
                      *(undefined2 *)((uint)*pbVar7 * 0x14 + g_CarModelBuffer + 4));
  uVar4 = local_2c;
  puVar1 = auStack_38 + 3;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | (uint)auStack_38 >> (3 - uVar3) * 8;
  puVar1 = auStack_34 + 3;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | uVar4 >> (3 - uVar3) * 8;
  auStack_34 = (undefined1  [4])uVar4;
  uVar8 = GetCarBaseColor();
  FUN_80065cb8(g_CarModelBuffer + (uint)*pbVar7 * 0x14,auStack_38,auStack_38,iVar5 + 0x5c,
               iVar5 + 0x60,uVar8,g_MenuAnimPtr + 4);
  DrawText("YOU MADE YOU COMPLETE MAXIMUM TUNING",(int)(short)puVar6[1],
           (int)*(short *)((int)puVar6 + 6));
  GetMenuItemColor(&local_28,&local_24,DAT_800cde30,param_2 == 0);
  if (param_2 == 0) {
    local_28 = 2;
  }
  else {
    local_28 = 0;
  }
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar7[1] * 0x14,(int)(short)puVar6[4],
               (int)*(short *)((int)puVar6 + 0x12),g_MenuAnimPtr + 4,local_28,0xffffffff,local_24);
  GetMenuItemColor(&local_28,&local_24,DAT_800cde30,param_2 == 1);
  if (param_2 == 1) {
    local_28 = 2;
  }
  else {
    local_28 = 0;
  }
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar7[2] * 0x14,(int)(short)puVar6[5],
               (int)*(short *)((int)puVar6 + 0x16),g_MenuAnimPtr + 4,local_28,0xffffffff,local_24);
  bVar2 = pbVar7[5];
  iVar5 = 0;
  if (param_3 != 0) {
    bVar2 = pbVar7[6];
  }
  DrawSpriteEx(g_CarModelBuffer + (uint)bVar2 * 0x14,(int)(short)puVar6[8],
               (int)*(short *)((int)puVar6 + 0x22),g_RaceOTPtr2 + 4,0,0xffffffff,0xffffffff);
  puVar11 = &g_UnlockPaletteRegions;
  do {
    iVar10 = iVar5 / 2;
    iVar9 = iVar5 % 2;
    iVar5 = iVar5 + 1;
    DrawSpriteFlipped((int)(short)puVar6[6] + iVar9 * 0x100,
                      (int)*(short *)((int)puVar6 + 0x1a) + iVar10 * 0x10,puVar11,g_MenuAnimPtr + 4)
    ;
    puVar11 = puVar11 + 7;
  } while (iVar5 != 4);
  return;
}


