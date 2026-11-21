/* Function: MenuRender_VSRaceSetup */
/* Address: 8002737c */

void MenuRender_VSRaceSetup(void)

{
  undefined1 *puVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  uchar auStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  
  puVar1 = auStack_38 + 3;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_8001bd3c >> (3 - uVar3) * 8;
  auStack_38 = (undefined1  [4])DAT_8001bd3c;
  puVar1 = auStack_34 + 3;
  uVar3 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar3) =
       *(uint *)(puVar1 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_8001bd40 >> (3 - uVar3) * 8;
  auStack_34 = (undefined1  [4])DAT_8001bd40;
  memset(auStack_30,'\0',4);
  if ((g_VSDetailMode == 1) && (g_VSDetailIndex == 2)) {
    LoadPalette(&g_MenuVRAMRegion,0,0,g_ColourPickerPalette);
    g_PaletteIndex = 0;
    DrawSpriteFlipped(0xffffff70,0x1c,&g_ColourPickerSpriteL,g_MenuAnimPtr + 4);
    DrawSpriteFlipped(0x70,0x1c,&g_ColourPickerSpriteR,g_MenuAnimPtr + 4);
  }
  else {
    DrawMenuBackground(auStack_30,auStack_38,g_MenuAnimPtr + 4);
  }
  iVar4 = 0;
  psVar5 = &g_VSMenuItemSprites;
  iVar6 = -0x4c;
  do {
    GetMenuItemColor(&local_28,&local_24,g_ColorCycle,
                     g_VSDetailIndex == iVar4 && g_VSDetailMode == 1);
    sVar2 = *psVar5;
    psVar5 = psVar5 + 1;
    iVar4 = iVar4 + 1;
    DrawSpriteEx(g_MenuSpriteBuffer + sVar2 * 0x14,0xfffffef0,iVar6,g_MenuAnimPtr + 4,local_28,
                 0xffffffff,local_24);
    iVar6 = iVar6 + 0x20;
  } while (iVar4 < 4);
  DrawVSCourseInfo();
  DrawVSCarInfo();
  DrawVSPlayer1Info();
  DrawVSPlayer2Info();
  DrawVSConfirmButton();
  return;
}


