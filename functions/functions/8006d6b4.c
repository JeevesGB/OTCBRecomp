/* Function: UpdateReplayCarSelect */
/* Address: 8006d6b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UpdateReplayCarSelect(void)

{
  bool bVar1;
  undefined1 *puVar2;
  
  if ((g_PadButtons & 0x1000) != 0) {
    PlaySFX(0xf);
    bVar1 = g_ReplayCarSelectInit == 0;
    g_ReplayCarSelectInit = g_ReplayCarSelectInit + -1;
    if (bVar1) {
      g_ReplayCarSelectInit = 4;
    }
    goto switchD_8006d780_default;
  }
  if ((g_PadButtons & 0x4000) != 0) {
    PlaySFX(0xf);
    bVar1 = g_ReplayCarSelectInit == 4;
    g_ReplayCarSelectInit = g_ReplayCarSelectInit + 1;
    if (bVar1) {
      g_ReplayCarSelectInit = 0;
    }
    goto switchD_8006d780_default;
  }
  if ((g_PadButtons & 0x60) == 0) {
    if ((g_PadButtons & 0x90) == 0) goto switchD_8006d780_default;
    FUN_800463dc();
    PlaySFX(0x11);
LAB_8006d814:
    g_GameState = 0xc;
  }
  else {
    puVar2 = (undefined1 *)GetCarData();
    PlaySFX(0x10);
    switch(g_ReplayCarSelectInit) {
    case 0:
      puVar2[4] = 2;
      State_RaceSetup();
      g_GameState = 0x1a;
      break;
    case 1:
      g_GameState = 9;
      break;
    case 2:
      FUN_800463dc();
      *puVar2 = 3;
      g_GameState = 0xe;
      break;
    case 3:
      FUN_800463dc();
      puVar2[2] = 3;
      g_GameState = 0x10;
      break;
    case 4:
      FUN_800463dc();
      goto LAB_8006d814;
    }
  }
switchD_8006d780_default:
  FUN_8006d150(_DAT_800c3908 & 0xff,g_ReplayCarSelectInit);
  DAT_800cdcd8 = DAT_800cdcd8 + -6;
  if (DAT_800cdcd8 < 0x40) {
    DAT_800cdcd8 = 0xa0;
  }
  _DAT_800c3908 = _DAT_800c3908 + 8;
  if (0xff < (int)_DAT_800c3908) {
    _DAT_800c3908 = 0xff;
  }
  return;
}


