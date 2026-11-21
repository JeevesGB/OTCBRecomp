/* Function: FUN_80061e2c */
/* Address: 80061e2c */

void FUN_80061e2c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  RECT local_20;
  
  InitRenderer(&g_CarSelectDisplayConfig);
  iVar3 = 1;
  ActivateDisplay();
  VSync(2);
  local_20.w = 0x280;
  local_20.y = 0;
  local_20.x = 0;
  local_20.h = 0x1e0;
  ClearImage2(&local_20,'\0','\0','\0');
  do {
    DrawSprite(DAT_800cda28 + 0x78,0xffffff86,0xffffff4c,g_MenuAnimPtr + 4);
    if (g_ReplayInitFlag1 == 0) {
      iVar2 = DAT_800cda28 + 0xb4;
    }
    else {
      iVar2 = DAT_800cda28 + 0x8c;
    }
    DrawSprite(iVar2,0x1c,0xffffff4c,g_MenuAnimPtr + 4);
    SetActiveSpriteSlot(1,3);
    DrawText("PLAYER",0xffffff10,0x96);
    SetActiveSpriteSlot(1,0);
    iVar3 = iVar3 + -1;
    iVar2 = FUN_800675f0();
    DrawText(*(undefined4 *)(DAT_800cda02 * 4 + iVar2),0xffffff6a,0x96);
    uVar1 = GetCarName((int)DAT_800cda04);
    DrawText(uVar1,0x32,0x96);
    FUN_80060720();
    VsyncWait();
  } while (iVar3 != -1);
  iVar3 = 1;
  do {
    iVar3 = iVar3 + -1;
    VsyncWait();
  } while (iVar3 != -1);
  AddRenderQueueItem(0xc,&LAB_800605d4);
  DAT_800cda2c = 0;
  return;
}


