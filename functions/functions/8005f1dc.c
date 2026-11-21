/* Function: FUN_8005f1dc */
/* Address: 8005f1dc */

void FUN_8005f1dc(void)

{
  short *psVar1;
  RECT *rect;
  int iVar2;
  
  InitRenderer(&g_CarSelectDisplayConfig);
  iVar2 = 1;
  ActivateDisplay();
  VSync(2);
  rect = g_VRAMRectPtr;
  psVar1 = &g_VRAMRectPtr->w;
  g_VRAMRectPtr = g_VRAMRectPtr + 1;
  *psVar1 = 0x280;
  rect->y = 0;
  rect->x = 0;
  rect->h = 0x1e0;
  ClearImage2(rect,'\0','\0','\0');
  DrawSync(0);
  do {
    iVar2 = iVar2 + -1;
    DrawSprite(DAT_800cd9e0 + 0x78,0xffffff92,0xffffff38,g_MenuAnimPtr + 4);
    DrawSprite(DAT_800cd9e0 + 0x8c,0xffffffec,0xffffff38,g_MenuAnimPtr + 4);
    DrawSprite(DAT_800cd9e0 + 0x50,8,0xffffff38,g_MenuAnimPtr + 4);
    DrawSpriteEx(DAT_800cd9e0 + 0xa0,0xffffff74,0xffffffec,g_MenuAnimPtr + 4,0,0xffffffff,0x80);
    DrawSpriteEx(DAT_800cd9e0 + 0xb4,0x30,0xffffffec,g_MenuAnimPtr + 4,0,0xffffffff,0x80);
    DrawSpriteEx(DAT_800cd9e0 + 0xa0,0xffffff74,0x14,g_MenuAnimPtr + 4,0,0xffffffff,0x80);
    DrawSpriteEx(DAT_800cd9e0 + 200,0x30,0x14,g_MenuAnimPtr + 4,0,0xffffffff,0x80);
    DrawSpriteEx(DAT_800cd9e0 + 100,0xffffffe2,0x50,g_MenuAnimPtr + 4,0,0xffffffff,0x80);
    VsyncWait();
  } while (iVar2 != -1);
  iVar2 = 2;
  do {
    iVar2 = iVar2 + -1;
    VsyncWait();
  } while (iVar2 != -1);
  AddRenderQueueItem(0xc,&LAB_8005e9a8);
  DAT_800cd9e4 = 0;
  return;
}


