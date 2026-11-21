/* Function: FUN_80060a6c */
/* Address: 80060a6c */

void FUN_80060a6c(void)

{
  short sVar1;
  int iVar2;
  
  sVar1 = DAT_800cda16;
  if (0 < DAT_800cda1c) {
    sVar1 = DAT_800cda1a;
    DAT_800cda1c = DAT_800cda1c + -1;
  }
  iVar2 = (int)sVar1;
  if (DAT_800cda18 == iVar2) {
    if (g_PadButtons != 0) {
      DAT_800cda1c = 0;
    }
  }
  else {
    DAT_800cda18 = sVar1;
    ClearVRAMRegion(&DAT_800b5aec);
    FUN_8005def4((&PTR_DAT_800b56ec)[iVar2 * 2],
                 (int)(((uint)DAT_800b5aec + (uint)*(ushort *)(&DAT_800b56e8 + iVar2 * 8)) * 0x10000
                      ) >> 0x10,
                 (int)(((uint)DAT_800b5aee + (uint)*(ushort *)(&DAT_800b56ea + iVar2 * 8)) * 0x10000
                      ) >> 0x10,(int)DAT_800b5af4,(int)DAT_800b5af6,8);
  }
  g_PaletteIndex = 0;
  DrawSpriteFlipped(0xffffff40,0xffffff74,&DAT_800b5afc,g_MenuAnimPtr + 4);
  DrawSpriteFlipped(0x40,0xffffff74,&DAT_800b5b0c,g_MenuAnimPtr + 4);
  return;
}


