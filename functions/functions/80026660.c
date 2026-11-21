/* Function: MenuInput_VSRaceSetup */
/* Address: 80026660 */

void MenuInput_VSRaceSetup(void)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  short *psVar6;
  undefined4 uVar7;
  uint uVar8;
  
  uVar2 = g_PadButtons;
  uVar8 = (uint)(short)g_PadButtons;
  if (((uVar8 & 0x8000) != 0) && (g_VSDetailMode == 0)) {
    g_RaceInitFlag = g_RaceInitFlag + 1;
    if (1 < (short)g_RaceInitFlag) {
      g_RaceInitFlag = 0;
    }
    PlaySFX(0xf);
  }
  if (((g_PadButtons & 0x2000) != 0) && (g_VSDetailMode == 0)) {
    g_RaceInitFlag = g_RaceInitFlag - 1;
    if ((int)((uint)g_RaceInitFlag << 0x10) < 0) {
      g_RaceInitFlag = 1;
    }
    PlaySFX(0xf);
  }
  uVar3 = uVar8 & 0x1000;
  uVar4 = uVar8;
  if (g_VSDetailMode == 1) {
    if ((&g_PadState)[(short)g_RaceInitFlag] != 2) {
      g_VSDetailMode = 0;
      PlaySFX(0x11);
    }
    uVar3 = uVar8 & 0x1000;
    if ((g_VSDetailMode == 1) && (uVar3 = uVar8 & 0x1000, g_RaceInitFlag == 1)) {
      uVar4 = (uint)(short)g_PadButtons2_Alt;
      uVar8 = (uint)(short)(uVar2 | g_PadButtons2_Alt);
      uVar3 = uVar8 & 0x1000;
    }
  }
  if ((uVar3 != 0) && (g_VSDetailMode == 1)) {
    g_VSDetailIndex = g_VSDetailIndex - 1;
    if ((int)((uint)g_VSDetailIndex << 0x10) < 0) {
      g_VSDetailIndex = 3;
    }
    PlaySFX(0xf);
  }
  if ((uVar8 & 0x4000) != 0) {
    if (g_VSDetailMode != 1) goto LAB_800269d4;
    g_VSDetailIndex = g_VSDetailIndex + 1;
    if (3 < (short)g_VSDetailIndex) {
      g_VSDetailIndex = 0;
    }
    PlaySFX(0xf);
  }
  if (g_VSDetailMode != 1) goto LAB_800269d4;
  if (g_VSDetailIndex == 0) {
    if ((uVar8 & 0x8000) != 0) {
      psVar6 = &g_MenuCourseIndex1 + (short)g_RaceInitFlag;
      if (*psVar6 != 0) {
        *psVar6 = *psVar6 + -1;
        PlaySFX(0xf);
      }
    }
    if ((uVar8 & 0x2000) != 0) {
      psVar6 = &g_MenuCourseIndex1 + (short)g_RaceInitFlag;
      sVar5 = *psVar6;
      bVar1 = *psVar6 < 4;
LAB_8002694c:
      if (bVar1) {
        *psVar6 = sVar5 + 1;
        PlaySFX(0xf);
      }
    }
  }
  else if (g_VSDetailIndex == 1) {
    if ((uVar8 & 0x8000) != 0) {
      psVar6 = &g_MenuCarIndex1 + (short)g_RaceInitFlag;
      if (*psVar6 != 0) {
        *psVar6 = *psVar6 + -1;
        PlaySFX(0xf);
      }
    }
    if ((uVar8 & 0x2000) != 0) {
      psVar6 = &g_MenuCarIndex1 + (short)g_RaceInitFlag;
      sVar5 = *psVar6;
      bVar1 = *psVar6 < 3;
      goto LAB_8002694c;
    }
  }
  if (((g_VSDetailMode == 1) && (g_VSDetailIndex == 2)) && ((uVar4 & 0x820) != 0)) {
    (&g_PlayerCarColor1)[(short)g_RaceInitFlag] =
         *(undefined1 *)((&g_PadRawState)[(short)g_RaceInitFlag * 3] + 4);
    PlaySFX(0x10);
  }
LAB_800269d4:
  if ((uVar8 & 0x90) != 0) {
    if (g_VSDetailMode == 0) {
      g_SubState2 = 5;
    }
    else {
      g_VSDetailMode = 0;
    }
    PlaySFX(0x11);
  }
  if ((uVar8 & 0x60) != 0) {
    if (g_VSDetailMode == 0) {
      if ((&g_PadState)[(short)g_RaceInitFlag] == 2) {
        g_VSDetailMode = 1;
        uVar7 = 0x10;
      }
      else {
        uVar7 = 0x11;
      }
    }
    else {
      if (g_VSDetailIndex != 3) {
        return;
      }
      g_SubState2 = 5;
      uVar7 = 0x10;
    }
    PlaySFX(uVar7);
  }
  return;
}


