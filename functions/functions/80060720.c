/* Function: FUN_80060720 */
/* Address: 80060720 */

void FUN_80060720(void)

{
  short sVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_28 [24];
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  sVar1 = DAT_800cda0a + -1;
  if (DAT_800cda0a != 0) {
    DAT_800cda0a = sVar1;
    if (sVar1 < 2) {
      SetActiveSpriteSlot(1,4);
      DrawText("REC.CAR",0xffffff10,0xaa);
      SetActiveSpriteSlot(1,0);
      iVar2 = HasSavedReplay();
      if (iVar2 == 0) {
        pcVar3 = "-- NONE --";
        uVar4 = 0xffffff6a;
      }
      else {
        LoadReplayData2(g_ReplayData,auStack_28);
        DrawText(auStack_28,0xffffff62,0xaa);
        pcVar3 = (char *)GetCarName(g_ReplayCarIndex._1_1_);
        uVar4 = 0x32;
      }
      DrawText(pcVar3,uVar4,0xaa);
    }
    else {
      local_10 = 0xff62;
      local_e = 0xaa;
      local_c = 300;
      local_a = 0xe;
      DrawSpriteScaled(&DAT_800b59b0,&local_10,g_MenuAnimPtr + 4);
    }
  }
  return;
}


