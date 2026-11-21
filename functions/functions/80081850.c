/* Function: FUN_80081850 */
/* Address: 80081850 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80081850(undefined1 param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  int local_34;
  byte *local_30;
  
  local_38 = param_1;
  local_34 = GetRaceSprite1();
  psVar1 = (short *)FUN_800672b0();
  iVar2 = FUN_800671c0();
  pbVar3 = (byte *)FUN_800673f8();
  DrawSpriteEx(g_CarModelBuffer + (uint)*pbVar3 * 0x14,(int)*psVar1,(int)psVar1[1],g_MenuAnimPtr + 4
               ,0,0xffffffff,0xffffffff);
  iVar4 = local_34 + 0xc;
  iVar5 = local_34 + 0x10;
  DrawRaceSprite(iVar2,iVar2 + 8,iVar4,iVar5,_g_AnimTimer,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar2 + 0x10,iVar2 + 0x18,iVar4,iVar5,_g_AnimTimer,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar2 + 0x20,iVar2 + 0x28,iVar4,iVar5,_g_AnimTimer,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar2 + 0x30,iVar2 + 0x38,iVar4,iVar5,_g_AnimTimer,g_MenuAnimPtr + 4);
  DrawRaceSprite(iVar2 + 0x40,iVar2 + 0x48,local_34 + 0x14,local_34 + 0x18,_g_AnimTimer,
                 g_MenuAnimPtr + 4);
  DrawSpriteScaled(local_34 + 4,iVar2 + 0xe0,g_RaceOTPtr1 + 4);
  local_30 = pbVar3 + param_2;
  FUN_80066010(g_CarModelBuffer + (uint)local_30[5] * 0x14,
               (int)(((ushort)psVar1[0x1c] - 0x20) * 0x10000) >> 0x10,
               (int)(((ushort)psVar1[0x1d] - 0x10) * 0x10000) >> 0x10,0xc0,0x60,g_MenuAnimPtr + 4);
  GetMenuItemColor(&local_40,&local_3c,DAT_800cdd44,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar3[0x1a] * 0x14,(int)psVar1[0x2c],(int)psVar1[0x2d],
               g_MenuAnimPtr + 4,local_40,0xffffffff,local_3c);
  GetMenuItemColor(&local_40,&local_3c,DAT_800cdd44,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar3[0x1b] * 0x14,(int)psVar1[0x2e],(int)psVar1[0x2f],
               g_MenuAnimPtr + 4,local_40,0xffffffff,local_3c);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar3[4] * 0x14,(int)psVar1[0x20],(int)psVar1[0x21],
               g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar3[0x11] * 0x14,psVar1[0x1e] + -8,psVar1[0x1f] + -8,
               g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar3[0x13] * 0x14,psVar1[0x1e] + 0x100,psVar1[0x1f] + -8,
               g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar3[0x16] * 0x14,psVar1[0x1e] + -8,psVar1[0x1f] + 0x90,
               g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar3[0x18] * 0x14,psVar1[0x1e] + 0x100,psVar1[0x1f] + 0x90
               ,g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  iVar5 = (int)psVar1[0x1f];
  iVar4 = iVar5 + 0x90;
  if (iVar5 != iVar4) {
    do {
      DrawSpriteEx(g_CarModelBuffer + (uint)pbVar3[0x14] * 0x14,psVar1[0x1e] + -8,iVar5,
                   g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
      iVar5 = iVar5 + 8;
    } while (iVar5 != psVar1[0x1f] + 0x90);
    iVar5 = (int)psVar1[0x1f];
    iVar4 = iVar5 + 0x90;
  }
  if (iVar5 != iVar4) {
    do {
      DrawSpriteEx(g_CarModelBuffer + (uint)pbVar3[0x15] * 0x14,psVar1[0x1e] + 0x100,iVar5,
                   g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
      iVar5 = iVar5 + 8;
    } while (iVar5 != psVar1[0x1f] + 0x90);
  }
  iVar5 = (int)psVar1[0x1e];
  iVar4 = iVar5 + 0x100;
  if (iVar5 != iVar4) {
    do {
      DrawSpriteEx(g_CarModelBuffer + (uint)pbVar3[0x12] * 0x14,iVar5,psVar1[0x1f] + -8,
                   g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
      iVar5 = iVar5 + 8;
    } while (iVar5 != psVar1[0x1e] + 0x100);
    iVar5 = (int)psVar1[0x1e];
    iVar4 = iVar5 + 0x100;
  }
  if (iVar5 != iVar4) {
    do {
      DrawSpriteEx(g_CarModelBuffer + (uint)pbVar3[0x17] * 0x14,iVar5,psVar1[0x1f] + 0x90,
                   g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
      iVar5 = iVar5 + 8;
    } while (iVar5 != psVar1[0x1e] + 0x100);
  }
  DrawSpriteFlipped((int)psVar1[0x26],(int)psVar1[0x27],&DAT_800c3a20,g_MenuAnimPtr + 4);
  DrawSpriteEx(g_CarModelBuffer + (uint)pbVar3[1] * 0x14,(int)psVar1[2],(int)psVar1[3],
               g_MenuAnimPtr + 4,0,0xffffffff,0xffffffff);
  DrawRaceSpriteEx(iVar2 + 0x50,iVar2 + 0x58,local_34 + 0xc4,local_34 + 0xd4,local_38,
                   g_MenuAnimPtr + 4);
  return;
}


