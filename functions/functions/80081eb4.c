/* Function: UpdatePartsInstall */
/* Address: 80081eb4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * UpdatePartsInstall(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (((int)(short)g_PadButtons & 0x8000U) == 0) {
    if ((g_PadButtons & 0x2000) == 0) {
      if ((g_PadButtons & 0x4000) == 0) {
        if ((g_PadButtons & 0x1000) == 0) {
          if ((g_PadButtons & 0x60) == 0) {
            if ((g_PadButtons & 0x90) == 0) {
              if ((g_PadButtons & 0x800) != 0) {
                if (*param_1 != 0xc) {
                  iVar6 = 0;
                  iVar4 = FUN_800673f8();
                  PlaySFX(0x10);
                  iVar2 = FUN_800671c0();
                  ClearImage2((RECT *)(iVar2 + 0xe8),'\0','\0','\0');
                  VsyncWait();
                  do {
                    ClearVRAMRegion(&DAT_800c3a20);
                    iVar6 = iVar6 + 1;
                  } while (iVar6 != 2);
                  iVar2 = 0;
                  iVar6 = *param_1 << 4;
                  do {
                    iVar5 = iVar2 << 4;
                    puVar3 = (undefined4 *)((int)&PTR_DAT_800b7a94 + iVar6);
                    iVar6 = iVar6 + 4;
                    iVar2 = iVar2 + 1;
                    LoadPalette(&DAT_800c3a20,0,iVar5,*puVar3);
                  } while (iVar2 != 4);
                  VsyncWait();
                  InitGhostCarDisplay(DAT_800cdd40,(&DAT_800c3a14)[*param_1],
                                      g_CarModelBuffer + (uint)*(byte *)(iVar4 + 4) * 0x14);
                  return (code *)&LAB_80082228;
                }
                PlaySFX(0x13);
              }
            }
            else {
              PlaySFX(0x11);
              g_GameState = 0x15;
            }
          }
          else if (*param_1 == 0xc) {
            PlaySFX(0x10);
            g_GameState = 0x13;
          }
          else {
            puVar1 = (undefined1 *)GetSelectedCarPtr();
            iVar4 = GetCarData();
            PlaySFX(0x10);
            *(undefined1 *)(iVar4 + 3) = 0;
            *puVar1 = (char)*param_1;
            g_GameState = 0x18;
          }
        }
        else if (3 < *param_1) {
          PlaySFX(0xf);
          *param_1 = *param_1 + -4;
        }
      }
      else if (*param_1 < 8) {
        PlaySFX(0xf);
        *param_1 = *param_1 + 4;
      }
      else if (*param_1 != 0xc) {
        PlaySFX(0xf);
        *param_1 = 0xc;
      }
    }
    else {
      iVar4 = *param_1;
      if ((((iVar4 != 3) && (iVar4 != 7)) && (iVar4 != 0xb)) && (iVar4 != 0xc)) {
        PlaySFX(0xf);
        *param_1 = *param_1 + 1;
      }
    }
  }
  else {
    iVar4 = *param_1;
    if (((iVar4 != 0) && (iVar4 != 4)) && ((iVar4 != 8 && (iVar4 != 0xc)))) {
      PlaySFX(0xf);
      *param_1 = *param_1 + -1;
    }
  }
  FUN_800813c0(_g_AnimTimer & 0xff,*param_1);
  DAT_800cdd44 = DAT_800cdd44 + -6;
  if (DAT_800cdd44 < 0x40) {
    DAT_800cdd44 = 0xa0;
  }
  _g_AnimTimer = _g_AnimTimer + 8;
  if (0xff < (int)_g_AnimTimer) {
    _g_AnimTimer = 0xff;
  }
  return UpdatePartsInstall;
}


