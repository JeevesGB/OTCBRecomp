/* Function: DrawVSCourseInfo */
/* Address: 80026aa0 */

void DrawVSCourseInfo(void)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  uchar auStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  
  puVar1 = auStack_38 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_8001bcfc >> (3 - uVar2) * 8;
  auStack_38 = (undefined1  [4])DAT_8001bcfc;
  puVar1 = auStack_34 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_8001bd00 >> (3 - uVar2) * 8;
  auStack_34 = (undefined1  [4])DAT_8001bd00;
  memset(auStack_30,'\0',4);
  GetMenuItemColor(&local_28,&local_24,g_ColorCycle,g_VSDetailMode == 0);
  if ((&g_PadState)[g_RaceInitFlag] != 2) {
    local_28 = 1;
  }
  DrawSpriteEx(g_MenuSpriteBuffer + 0xb4,0xffffffa8,0xffffff8c,g_MenuAnimPtr + 4,local_28,0xffffffff
               ,local_24);
  DrawSpriteEx(g_MenuSpriteBuffer + g_RaceInitFlag * 0x14 + 0x78,0x40,0xffffff8c,g_MenuAnimPtr + 4,
               local_28,0xffffffff,local_24);
  DrawSpriteScaled(auStack_30,auStack_38,g_MenuAnimPtr + 4);
  DrawSpriteEx(g_MenuSpriteBuffer + 0x244,0xffffff90,0xffffff90,g_MenuAnimPtr + 4,local_28,
               0xffffffff,0xffffffff);
  DrawSpriteEx(g_MenuSpriteBuffer + 600,0x68,0xffffff90,g_MenuAnimPtr + 4,local_28,0xffffffff,
               0xffffffff);
  return;
}


