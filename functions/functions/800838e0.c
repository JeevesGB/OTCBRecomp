/* Function: UpdateCarTuning */
/* Address: 800838e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * UpdateCarTuning(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar auStack_28 [8];
  
  iVar5 = *param_1;
  memset(auStack_28,'\0',6);
  iVar3 = param_1[0x32];
  if (iVar3 < 0x18) {
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    auStack_28[iVar3 >> 3] = 0xff;
    iVar3 = param_1[0x32];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    auStack_28[(iVar3 >> 3) + 3] = 0xff;
    param_1[0x32] = param_1[0x32] + 1;
  }
  if (((int)(short)g_PadButtons & 0x8000U) != 0) {
    if ((*param_1 != 0) && (*param_1 != 3)) {
      PlaySFX(0xf);
      *param_1 = *param_1 + -1;
    }
LAB_80083c10:
    if (iVar5 != *param_1) {
      auStack_28[iVar5] = 0xff;
    }
    auStack_28[*param_1] = 0xff;
    FUN_8008299c(_g_CarTuningFlag & 0xff,param_1,auStack_28,*param_1);
    _g_CarTuningFlag = _g_CarTuningFlag + 8;
    if (0xff < (int)_g_CarTuningFlag) {
      _g_CarTuningFlag = 0xff;
    }
    if (0x3f < DAT_800cdd50 + -6) {
      DAT_800cdd50 = DAT_800cdd50 + -6;
      return UpdateCarTuning;
    }
    DAT_800cdd50 = 0xa0;
    return UpdateCarTuning;
  }
  if ((g_PadButtons & 0x2000) != 0) {
    if ((*param_1 != 2) && (*param_1 != 5)) {
      PlaySFX(0xf);
      *param_1 = *param_1 + 1;
    }
    goto LAB_80083c10;
  }
  if ((g_PadButtons & 0x4000) != 0) {
    if (*param_1 < 3) {
      PlaySFX(0xf);
      *param_1 = *param_1 + 3;
    }
    goto LAB_80083c10;
  }
  if ((g_PadButtons & 0x1000) != 0) {
    if (2 < *param_1) {
      PlaySFX(0xf);
      *param_1 = *param_1 + -3;
    }
    goto LAB_80083c10;
  }
  if ((g_PadButtons & 0x60) == 0) {
    if ((g_PadButtons & 0x90) != 0) {
      PlaySFX(0x11);
      g_GameState = 0x15;
    }
    goto LAB_80083c10;
  }
  if (*param_1 == 5) {
    PlaySFX(0x11);
    g_GameState = 0x15;
    return UpdateCarTuning;
  }
  if (*(char *)((int)param_1 + *param_1 + 0xb8) == '\0') {
    PlaySFX(0x13);
    goto LAB_80083c10;
  }
  PlaySFX(0x10);
  iVar3 = FUN_800671d8();
  ClearImage2((RECT *)(iVar3 + 0x150),'\0','\0','\0');
  VsyncWait();
  ClearVRAMRegion(&g_TuningPaletteRegion2);
  iVar5 = 0;
  iVar3 = *param_1 * 0x18;
  do {
    iVar4 = iVar5 << 4;
    puVar1 = (undefined4 *)((int)&g_TuningPaletteTable2 + iVar3);
    iVar3 = iVar3 + 4;
    iVar5 = iVar5 + 1;
    LoadPalette(&g_TuningPaletteRegion2,0,iVar4,*puVar1);
  } while (iVar5 != 5);
  VsyncWait();
  switch(*param_1) {
  case 0:
    param_1[0x2c] = (int)(param_1 + 2);
    piVar2 = param_1 + 0xc;
    break;
  case 1:
    param_1[0x2c] = (int)(param_1 + 4);
    piVar2 = param_1 + 0x18;
    break;
  case 2:
    param_1[0x2c] = (int)(param_1 + 6);
    piVar2 = param_1 + 0x20;
    break;
  case 3:
    param_1[0x2c] = (int)(param_1 + 8);
    piVar2 = param_1 + 0x24;
    break;
  case 4:
    param_1[0x2c] = (int)(param_1 + 10);
    piVar2 = param_1 + 0x28;
    break;
  default:
    goto switchD_80083b74_default;
  }
  param_1[0x2d] = (int)piVar2;
switchD_80083b74_default:
  param_1[1] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  return (code *)&DAT_80083cc0;
}


