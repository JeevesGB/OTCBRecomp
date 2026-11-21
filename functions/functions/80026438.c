/* Function: MenuRender_VSPlayerSelect */
/* Address: 80026438 */

void MenuRender_VSPlayerSelect(void)

{
  short sVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar2 = 0;
  do {
    sVar1 = (short)iVar2;
    GetMenuItemColor(&local_30,&local_2c,g_ColorCycle,g_RaceInitFlag == sVar1);
    if (((&g_PadState)[sVar1] == 3) && (sVar1 < 2)) {
      local_30 = 1;
    }
    DrawSpriteEx(g_MenuSpriteBuffer + (short)(&g_VSPlayerSprites)[sVar1] * 0x14,0xfffffed0,
                 sVar1 * 0x20 + -0x98,g_MenuAnimPtr + 4,local_30,0xffffffff,local_2c);
    iVar2 = iVar2 + 1;
  } while (iVar2 * 0x10000 >> 0x10 < 3);
  GetMenuItemColor(&local_30,&local_2c,g_ColorCycle,g_RaceInitFlag == 0);
  if (g_PadState == 3) {
    local_30 = 1;
  }
  DrawSpriteEx(g_MenuSpriteBuffer + 0x78,0xffffff60,0xffffff68,g_MenuAnimPtr + 4,local_30,0xffffffff
               ,local_2c);
  GetMenuItemColor(&local_30,&local_2c,g_ColorCycle,g_RaceInitFlag == 1);
  if (g_PadState2 == 3) {
    local_30 = 1;
  }
  DrawSpriteEx(g_MenuSpriteBuffer + 0x8c,0xffffff60,0xffffff88,g_MenuAnimPtr + 4,local_30,0xffffffff
               ,local_2c);
  MenuRender_TransmissionSelect();
  return;
}


