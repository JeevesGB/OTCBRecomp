/* Function: MenuInput_Options */
/* Address: 80023e8c */

void MenuInput_Options(void)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((g_PadButtons & 0x4000) != 0) {
    g_MenuSelection = g_MenuSelection + 1;
    if (9 < (short)g_MenuSelection) {
      g_MenuSelection = 0;
    }
    PlaySFX(0xf);
  }
  if ((g_PadButtons & 0x1000) != 0) {
    g_MenuSelection = g_MenuSelection - 1;
    if ((int)((uint)g_MenuSelection << 0x10) < 0) {
      g_MenuSelection = 9;
    }
    PlaySFX(0xf);
  }
  if (g_MenuSelection == 0) {
    if ((((int)(short)g_PadButtons2 & 0x8000U) != 0) && (g_PlayerVolume != 0)) {
      g_PlayerVolume = g_PlayerVolume - 1;
      *(ushort *)(g_DisplayParams + 0x12) = g_PlayerVolume;
      UpdateBGMVolume();
      if ((g_PlayerVolume & 7) == 7) {
        PlaySFX(0xf);
      }
    }
    if (((g_PadButtons2 & 0x2000) != 0) && ((short)g_PlayerVolume < 0x80)) {
      g_PlayerVolume = g_PlayerVolume + 1;
      *(ushort *)(g_DisplayParams + 0x12) = g_PlayerVolume;
      UpdateBGMVolume();
      if ((g_PlayerVolume & 7) == 0) {
        PlaySFX(0xf);
      }
    }
  }
  if (g_MenuSelection == 1) {
    if ((((int)(short)g_PadButtons2 & 0x8000U) != 0) &&
       (uVar2 = (uint)g_PlayerSFXVolume, g_PlayerSFXVolume != 0)) {
      g_PlayerSFXVolume = (ushort)(uVar2 - 1);
      UpdateAudioParams(0xffffffff,0xffffffff,0xffffffff,(int)((uVar2 - 1) * 0x10000) >> 0x10,
                        0xffffffff);
      if ((g_PlayerSFXVolume & 7) == 7) {
        PlaySFX(0xf);
      }
    }
    if ((((g_PadButtons2 & 0x2000) != 0) &&
        (uVar1 = g_PlayerSFXVolume + 1, (short)g_PlayerSFXVolume < 0x80)) &&
       (g_PlayerSFXVolume = uVar1,
       UpdateAudioParams(0xffffffff,0xffffffff,0xffffffff,(int)(short)uVar1,0xffffffff),
       (g_PlayerSFXVolume & 7) == 0)) {
      PlaySFX(0xf);
    }
  }
  if (g_MenuSelection == 2) {
    if ((((int)(short)g_PadButtons & 0x8000U) != 0) && (g_PlayerCar != 0)) {
      g_PlayerCar = g_PlayerCar + -1;
      PlaySFX(0xf);
    }
    if (((g_PadButtons & 0x2000) != 0) && (g_PlayerCar < 3)) {
      g_PlayerCar = g_PlayerCar + 1;
      PlaySFX(0xf);
    }
  }
  if (g_MenuSelection == 3) {
    if ((((int)(short)g_PadButtons & 0x8000U) != 0) && (g_PlayerCourse == 0)) {
      g_PlayerCourse = 1;
      PlaySFX(0xf);
    }
    if (((g_PadButtons & 0x2000) != 0) && (g_PlayerCourse != 0)) {
      g_PlayerCourse = 0;
      PlaySFX(0xf);
    }
  }
  if (g_MenuSelection == 4) {
    if ((((int)(short)g_PadButtons & 0x8000U) != 0) && (g_PlayerClass == 0)) {
      g_PlayerClass = 1;
      PlaySFX(0xf);
    }
    if (((g_PadButtons & 0x2000) != 0) && (g_PlayerClass != 0)) {
      g_PlayerClass = 0;
      PlaySFX(0xf);
    }
  }
  if (g_MenuSelection == 5) {
    if ((((int)(short)g_PadButtons & 0x8000U) != 0) && (g_PlayerCarColor3 == 0)) {
      g_PlayerCarColor3 = 1;
      PlaySFX(0xf);
    }
    if (((g_PadButtons & 0x2000) != 0) && (g_PlayerCarColor3 != 0)) {
      g_PlayerCarColor3 = 0;
      PlaySFX(0xf);
    }
  }
  if (g_MenuSelection == 6) {
    if ((((int)(short)g_PadButtons & 0x8000U) != 0) && (g_PlayerCarColor4 == 0)) {
      g_PlayerCarColor4 = 1;
      PlaySFX(0xf);
    }
    if (((g_PadButtons & 0x2000) != 0) && (g_PlayerCarColor4 != 0)) {
      g_PlayerCarColor4 = 0;
      PlaySFX(0xf);
    }
  }
  if (((g_MenuSelection == 7) && ((g_PadButtons & 0x60) != 0)) && (g_SubState2 != 0)) {
    g_SubState1 = 1;
    g_SubState2 = 2;
    g_RaceInitFlag = 0;
    g_VSConfirmed = 0;
    g_VSDetailMode = 0;
    g_SelectedPlayer = 0xffff;
    g_PlayerTransmission2 = (ushort)(byte)(&g_SavedTransmission)[g_PadState];
    g_PlayerTransmission = g_PlayerTransmission2;
    PlaySFX(0x10);
  }
  if ((g_MenuSelection == 8) && ((g_PadButtons & 0x60) != 0)) {
    if ((g_PadState == 2) || (uVar3 = 0x11, g_PadState2 == 2)) {
      uVar3 = 0x10;
      g_SubState1 = 2;
      g_SubState2 = g_MenuSelection;
      g_RaceInitFlag = 0;
      g_VSDetailIndex = 0;
      g_VSDetailMode = 0;
    }
    PlaySFX(uVar3);
  }
  if ((g_MenuSelection == 9) && ((g_PadButtons & 0x60) != 0)) {
    g_GameState = 0xb;
    SaveMenuSettings();
    PlaySFX(0x10);
  }
  if ((g_PadButtons & 0x90) != 0) {
    g_GameState = 0xb;
    SaveMenuSettings();
    PlaySFX(0x11);
  }
  return;
}


