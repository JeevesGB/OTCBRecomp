/* Function: MenuRender_Options_Items */
/* Address: 80024720 */

void MenuRender_Options_Items(void)

{
  undefined4 local_28;
  undefined1 auStack_24 [4];
  
  GetMenuItemColor(&local_28,auStack_24,0,g_PlayerCar == 0);
  DrawSpriteEx(g_MenuSpriteBuffer + g_CarSprite0 * 0x14,0xfffffff4,0xffffffbc,g_MenuAnimPtr + 4,
               local_28,0xffffffff,0xffffffff);
  GetMenuItemColor(&local_28,auStack_24,0,g_PlayerCar == 1);
  DrawSpriteEx(g_MenuSpriteBuffer + g_CarSprite1 * 0x14,0x3e,0xffffffc2,g_MenuAnimPtr + 4,local_28,
               0xffffffff,0xffffffff);
  GetMenuItemColor(&local_28,auStack_24,0,g_PlayerCar == 2);
  DrawSpriteEx(g_MenuSpriteBuffer + g_CarSprite2 * 0x14,0x76,0xffffffbc,g_MenuAnimPtr + 4,local_28,
               0xffffffff,0xffffffff);
  GetMenuItemColor(&local_28,auStack_24,0,g_PlayerCar == 3);
  DrawSpriteEx(g_MenuSpriteBuffer + g_CarSprite3 * 0x14,0xcc,0xffffffbc,g_MenuAnimPtr + 4,local_28,
               0xffffffff,0xffffffff);
  GetMenuItemColor(&local_28,auStack_24,0,g_PlayerCourse != 0);
  DrawSpriteEx(g_MenuSpriteBuffer + 0x104,0xc,0xffffffdc,g_MenuAnimPtr + 4,local_28,0xffffffff,
               0xffffffff);
  GetMenuItemColor(&local_28,auStack_24,0,g_PlayerCourse == 0);
  DrawSpriteEx(g_MenuSpriteBuffer + 0x118,0xa8,0xffffffdc,g_MenuAnimPtr + 4,local_28,0xffffffff,
               0xffffffff);
  GetMenuItemColor(&local_28,auStack_24,0,g_PlayerClass != 0);
  DrawSpriteEx(g_MenuSpriteBuffer + 0x104,0xc,0xfffffffc,g_MenuAnimPtr + 4,local_28,0xffffffff,
               0xffffffff);
  GetMenuItemColor(&local_28,auStack_24,0,g_PlayerClass == 0);
  DrawSpriteEx(g_MenuSpriteBuffer + 0x118,0xa8,0xfffffffc,g_MenuAnimPtr + 4,local_28,0xffffffff,
               0xffffffff);
  GetMenuItemColor(&local_28,auStack_24,0,g_PlayerCarColor3 != 0);
  DrawSpriteEx(g_MenuSpriteBuffer + 0x104,0xc,0x1c,g_MenuAnimPtr + 4,local_28,0xffffffff,0xffffffff)
  ;
  GetMenuItemColor(&local_28,auStack_24,0,g_PlayerCarColor3 == 0);
  DrawSpriteEx(g_MenuSpriteBuffer + 0x118,0xa8,0x1c,g_MenuAnimPtr + 4,local_28,0xffffffff,0xffffffff
              );
  GetMenuItemColor(&local_28,auStack_24,0,g_PlayerCarColor4 != 0);
  DrawSpriteEx(g_MenuSpriteBuffer + 0x104,0xc,0x3c,g_MenuAnimPtr + 4,local_28,0xffffffff,0xffffffff)
  ;
  GetMenuItemColor(&local_28,auStack_24,0,g_PlayerCarColor4 == 0);
  DrawSpriteEx(g_MenuSpriteBuffer + 0x118,0xa8,0x3c,g_MenuAnimPtr + 4,local_28,0xffffffff,0xffffffff
              );
  return;
}


