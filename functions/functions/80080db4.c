/* Function: UpdatePartsSelect */
/* Address: 80080db4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UpdatePartsSelect(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((g_PadButtons & 0x1000) != 0) {
    PlaySFX(0xf);
    bVar1 = g_PartsSelectFlag1 == 0;
    g_PartsSelectFlag1 = g_PartsSelectFlag1 + -1;
    if (bVar1) {
      g_PartsSelectFlag1 = 4;
    }
    goto switchD_80080e88_default;
  }
  if ((g_PadButtons & 0x4000) != 0) {
    PlaySFX(0xf);
    bVar1 = g_PartsSelectFlag1 == 4;
    g_PartsSelectFlag1 = g_PartsSelectFlag1 + 1;
    if (bVar1) {
      g_PartsSelectFlag1 = 0;
    }
    goto switchD_80080e88_default;
  }
  if ((g_PadButtons & 0x60) == 0) {
    uVar4 = 0x11;
    if ((g_PadButtons & 0x90) == 0) goto switchD_80080e88_default;
LAB_80080f30:
    PlaySFX(uVar4);
    g_GameState = 0x12;
    goto switchD_80080e88_default;
  }
  iVar2 = GetCarData();
  iVar3 = GetCarReplayData();
  iVar3 = GetReplayCarData(*(undefined1 *)(iVar3 + 0x11));
  switch(g_PartsSelectFlag1) {
  case 0:
    if (*(short *)(iVar3 + 0xae) == 0) {
      PlaySFX(0x10);
      g_GameState = 0x16;
      break;
    }
    goto LAB_80080ee0;
  case 1:
    if (*(short *)(iVar3 + 0xae) == 0) {
      PlaySFX(0x10);
      *(undefined1 *)(iVar2 + 3) = 1;
      g_GameState = 0x18;
      break;
    }
LAB_80080ee0:
    PlaySFX(0x13);
    break;
  case 2:
    PlaySFX(0x10);
    g_GameState = 0x17;
    break;
  case 3:
    PlaySFX(0x10);
    *(undefined1 *)(iVar2 + 2) = 4;
    g_GameState = 0x10;
    break;
  case 4:
    uVar4 = 0x10;
    goto LAB_80080f30;
  }
switchD_80080e88_default:
  FUN_80080ab0(_g_PartsSelectFlag2 & 0xff,g_PartsSelectFlag1);
  DAT_800cdd38 = DAT_800cdd38 + -6;
  if (DAT_800cdd38 < 0x40) {
    DAT_800cdd38 = 0xa0;
  }
  _g_PartsSelectFlag2 = _g_PartsSelectFlag2 + 8;
  if (0xff < (int)_g_PartsSelectFlag2) {
    _g_PartsSelectFlag2 = 0xff;
  }
  return;
}


