/* Function: UpdateGearTuning */
/* Address: 80086028 */

code * UpdateGearTuning(int *param_1)

{
  uchar *puVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uchar local_38 [16];
  
  iVar7 = param_1[1];
  memset(local_38,'\0',0xc);
  iVar5 = 0;
  if (*param_1 != 0) {
    do {
      puVar1 = local_38 + iVar5;
      iVar5 = iVar5 + 1;
      *puVar1 = 0xff;
    } while (iVar5 != 0xc);
    *param_1 = 0;
  }
  if (((int)(short)g_PadButtons & 0x8000U) == 0) {
    if ((g_PadButtons & 0x2000) == 0) {
      if ((g_PadButtons & 0x4000) == 0) {
        if ((g_PadButtons & 0x1000) == 0) {
          if ((g_PadButtons & 0x60) == 0) {
            if ((g_PadButtons & 0x90) == 0) goto LAB_800862ac;
            PlaySFX(0x11);
            iVar5 = GetCarData();
            cVar4 = *(char *)(iVar5 + 3);
            if (cVar4 == '\0') {
              g_GameState = 0x16;
              goto LAB_800862ac;
            }
          }
          else {
            if (param_1[1] != 0xb) {
              iVar5 = HasCustomGearRatios(param_1 + 0xc,param_1[0x38]);
              if (iVar5 == -1) {
                PlaySFX(0x10);
                iVar5 = FUN_800671cc();
                ClearImage2((RECT *)(iVar5 + 0xf0),'\0','\0','\0');
                VsyncWait();
                return (code *)&LAB_8008649c;
              }
              PlaySFX(0x13);
              goto LAB_800862ac;
            }
            PlaySFX(0x11);
            iVar5 = GetCarData();
            cVar4 = *(char *)(iVar5 + 3);
            if (cVar4 == '\0') {
              g_GameState = 0x16;
              goto LAB_800862ac;
            }
          }
          if (cVar4 == '\x01') {
            g_GameState = 0x15;
          }
        }
        else {
          PlaySFX(0xf);
          iVar5 = param_1[1];
          if (iVar5 < 4) {
            param_1[1] = iVar5 + 8;
          }
          else {
            param_1[1] = iVar5 + -4;
          }
        }
      }
      else {
        PlaySFX(0xf);
        iVar5 = param_1[1];
        if (iVar5 < 8) {
          param_1[1] = iVar5 + 4;
        }
        else {
          param_1[1] = iVar5 + -8;
        }
      }
    }
    else {
      PlaySFX(0xf);
      iVar5 = param_1[1];
      if (((iVar5 == 3) || (iVar5 == 7)) || (iVar5 == 0xb)) {
        param_1[1] = param_1[1] + -3;
      }
      else {
        param_1[1] = iVar5 + 1;
      }
    }
  }
  else {
    PlaySFX(0xf);
    iVar5 = param_1[1];
    if (((iVar5 == 0) || (iVar5 == 4)) || (iVar5 == 8)) {
      param_1[1] = param_1[1] + 3;
    }
    else {
      param_1[1] = iVar5 + -1;
    }
  }
LAB_800862ac:
  if (param_1[1] != iVar7) {
    if (param_1[1] == 0xb) {
      ClearVRAMRegion(&g_GearTuningPaletteRegion);
    }
    else {
      iVar5 = GetCarSpriteData();
      iVar2 = GetCarModelOffset();
      InitGhostCarDisplay(g_GearTuningModelBuffer,*(undefined1 *)(iVar2 + param_1[1]),
                          g_CarModelBuffer + (uint)*(byte *)(iVar5 + 0x3a) * 0x14);
      VsyncWait();
      ClearVRAMRegion(&g_GearTuningPaletteRegion);
      iVar5 = HasCustomGearRatios(param_1 + 0xc,param_1[0x38],param_1[1]);
      if (iVar5 == 0) {
        iVar5 = 0;
        iVar2 = 0xb0;
        do {
          iVar6 = iVar5 << 4;
          puVar3 = (undefined4 *)((int)&g_GearTuningPaletteTable + iVar2);
          iVar2 = iVar2 + 4;
          iVar5 = iVar5 + 1;
          LoadPalette(&g_GearTuningPaletteRegion,0,iVar6,*puVar3);
        } while (iVar5 != 4);
        VsyncWait();
      }
      else {
        iVar5 = 0;
        iVar2 = param_1[1] << 4;
        do {
          iVar6 = iVar5 << 4;
          puVar3 = (undefined4 *)((int)&g_GearTuningPaletteTable + iVar2);
          iVar2 = iVar2 + 4;
          iVar5 = iVar5 + 1;
          LoadPalette(&g_GearTuningPaletteRegion,0,iVar6,*puVar3);
        } while (iVar5 != 4);
        VsyncWait();
      }
    }
    local_38[iVar7] = 0xff;
  }
  local_38[param_1[1]] = 0xff;
  FUN_800846fc();
  FUN_80084b74(local_38,DAT_800cddf0 & 0xff,(char)param_1[5],param_1[0x38],param_1 + 0xc,param_1[1])
  ;
  iVar5 = param_1[5];
  param_1[5] = iVar5 + 8;
  if (0xff < iVar5 + 8) {
    param_1[5] = 0xff;
  }
  DAT_800cddf0 = DAT_800cddf0 + 8;
  if (0xff < (int)DAT_800cddf0) {
    DAT_800cddf0 = 0xff;
  }
  return UpdateGearTuning;
}


