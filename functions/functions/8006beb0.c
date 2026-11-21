/* Function: State_CarSelect */
/* Address: 8006beb0 */

void State_CarSelect(void)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  
  iVar3 = g_GameState;
  InitCarSelect();
  DrawSync(0);
  iVar11 = 0;
  BreakDraw();
  InitGameSystems();
  InitMenuHeap();
  InitMemoryState();
  InitRenderer(&g_CarSelectDisplayConfig);
  ActivateDisplay();
  InitRenderQueue();
  psVar4 = (short *)GetCarSpritePositions();
  iVar5 = GetCarModelData();
  iVar6 = MemAllocTemp(0x140);
  uVar7 = GsGetWorkBase();
  LoadCDFile(0x137,uVar7);
  uVar7 = GsGetWorkBase();
  RelocateData(uVar7,iVar6);
  do {
    iVar10 = 0;
    psVar9 = psVar4;
    do {
      sVar2 = *psVar9;
      psVar1 = psVar9 + 1;
      psVar9 = psVar9 + 2;
      pbVar8 = (byte *)(iVar5 + iVar10);
      iVar10 = iVar10 + 1;
      DrawSprite(iVar6 + (uint)*pbVar8 * 0x14,(int)sVar2,(int)*psVar1,g_MenuAnimPtr + 4);
      VsyncWait();
    } while (iVar10 != 6);
    iVar11 = iVar11 + 1;
  } while (iVar11 != 2);
  VsyncWait();
  MemFreeTemp(iVar6);
  g_CarModelBuffer = MemAllocTemp(0xa00);
  uVar7 = GsGetWorkBase();
  LoadCDFile(0x124,uVar7);
  uVar7 = GsGetWorkBase();
  g_CarModelData = RelocateData(uVar7,g_CarModelBuffer);
  g_CarSelectFlag1 = 0;
  g_CarSelectFlag2 = 0;
  LoadAudioBank();
  FadeAudioVolume(0x100);
  if (g_CarDisplayInit == 0) {
    g_CarDisplayInit = -1;
    InitCarDisplay();
  }
  g_DisplayActive = 0;
  while (g_GameState == iVar3) {
    UpdateCarSelect();
    if ((g_PadButtons3 & 4) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      if (((g_PadButtons3 & 0x8000) != 0) && (iVar5 = 0, (g_PadButtons2_Alt & 0x10) != 0)) {
        PlaySFX(0x16);
        SelectPrevCar(0xffffffff);
        iVar5 = -1;
      }
    }
    if (iVar5 == 0) {
      iVar5 = 0;
      if (((g_PadButtons3 & 0x1004) == 0x1004) && (iVar5 = 0, (g_PadButtons2_Alt & 0x10) != 0)) {
        PlaySFX(0x17);
        SelectNextCar(0xffffffff);
        iVar5 = -1;
      }
      if (iVar5 == 0) {
        iVar5 = 0;
        if (((g_PadButtons3 & 0x2004) == 0x2004) && ((g_PadButtons2_Alt & 0x10) != 0)) {
          iVar6 = GetCarData();
          iVar5 = -1;
          *(undefined1 *)(iVar6 + 6) = 2;
          g_GameState = 6;
        }
        if (((iVar5 == 0) && ((g_PadButtons3 & 0x804) == 0x804)) &&
           ((g_PadButtons2_Alt & 0x10) != 0)) {
          PlaySFX(0x14);
          ConfirmCarSelect();
        }
      }
    }
    rand();
    ProcessRenderQueue();
    VsyncWait();
  }
  FadeOutTransition();
  return;
}


