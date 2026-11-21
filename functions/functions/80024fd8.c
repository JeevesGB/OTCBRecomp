/* Function: MenuInput_Transmission */
/* Address: 80024fd8 */

void MenuInput_Transmission(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((g_PadButtons & 0x90) != 0) {
    iVar2 = (int)(short)g_RaceInitFlag;
    if ((iVar2 < 2) && ((short)(&g_PadState)[iVar2] != 3)) {
      (&g_SavedTransmission)[(int)(short)(&g_PadState)[iVar2] + iVar2 * 3] =
           (undefined1)g_PlayerTransmission;
    }
    g_SubState2 = 5;
    uVar3 = 0x11;
LAB_80025394:
    PlaySFX(uVar3);
    return;
  }
  iVar2 = (int)(short)g_RaceInitFlag;
  if (iVar2 == 2) {
    if ((g_PadButtons & 0x60) != 0) {
      g_SubState2 = 5;
      uVar3 = 0x10;
      goto LAB_80025394;
    }
  }
  else if (((g_SubState2 == 4) && ((short)(&g_PadState)[iVar2] != 3)) &&
          ((int)(short)(&g_PadState)[iVar2] != (int)g_SelectedPlayer)) {
    (&g_SavedTransmission)[(int)g_SelectedPlayer + iVar2 * 3] = (undefined1)g_PlayerTransmission;
    uVar3 = 0x11;
    g_SubState2 = 7;
    g_PlayerTransmission =
         (ushort)(byte)(&g_SavedTransmission)
                       [(int)(short)(&g_PadState)[(short)g_RaceInitFlag] + (short)g_RaceInitFlag * 3
                       ];
    goto LAB_80025394;
  }
  if (((g_PadButtons & 0x4000) == 0) || (g_SubState2 != 4)) {
    if (((g_PadButtons & 0x1000) == 0) || (g_SubState2 != 4)) {
      uVar1 = g_PadButtons;
      if (g_RaceInitFlag == 1) {
        uVar1 = g_PadButtons2_Alt;
      }
      if ((((int)(short)uVar1 & 0x2000U) != 0) && (g_RaceInitFlag != 2)) {
        g_SubState2 = 3;
        g_VSConfirmed = 1;
        g_TransmissionAnimTimer = 0;
        g_PlayerTransmission2 = g_PlayerTransmission;
        g_PlayerTransmission = g_PlayerTransmission + 1 & 7;
        PlaySFX(0xf);
      }
      if (((int)(short)uVar1 & 0x8000U) == 0) {
        return;
      }
      uVar3 = 0xf;
      if (g_RaceInitFlag == 2) {
        return;
      }
      g_SubState2 = 3;
      g_VSConfirmed = 1;
      g_TransmissionAnimTimer = 0;
      g_PlayerTransmission2 = g_PlayerTransmission;
      g_PlayerTransmission = g_PlayerTransmission - 1 & 7;
      goto LAB_80025394;
    }
    PlaySFX(0xf);
    iVar2 = (int)(short)g_RaceInitFlag;
    if ((iVar2 < 2) && ((short)(&g_PadState)[iVar2] != 3)) {
      (&g_SavedTransmission)[(int)(short)(&g_PadState)[iVar2] + iVar2 * 3] =
           (undefined1)g_PlayerTransmission;
    }
    g_RaceInitFlag = g_RaceInitFlag - 1;
    if ((int)((uint)g_RaceInitFlag << 0x10) < 0) {
      g_RaceInitFlag = 2;
    }
  }
  else {
    PlaySFX(0xf);
    iVar2 = (int)(short)g_RaceInitFlag;
    if ((iVar2 < 2) && ((short)(&g_PadState)[iVar2] != 3)) {
      (&g_SavedTransmission)[(int)(short)(&g_PadState)[iVar2] + iVar2 * 3] =
           (undefined1)g_PlayerTransmission;
    }
    g_RaceInitFlag = g_RaceInitFlag + 1;
    if (2 < (short)g_RaceInitFlag) {
      g_RaceInitFlag = 0;
    }
  }
  iVar2 = (int)(short)g_RaceInitFlag;
  if (1 < iVar2) {
    return;
  }
  if ((short)(&g_PadState)[iVar2] == 3) {
    return;
  }
  g_PlayerTransmission =
       (ushort)(byte)(&g_SavedTransmission)[(int)(short)(&g_PadState)[iVar2] + iVar2 * 3];
  g_SubState2 = 7;
  return;
}


