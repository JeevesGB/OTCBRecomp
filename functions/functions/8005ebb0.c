/* Function: FUN_8005ebb0 */
/* Address: 8005ebb0 */

void FUN_8005ebb0(void)

{
  int iVar1;
  
  iVar1 = (int)DAT_800cd9d6;
  if (DAT_800cd9d8 != iVar1) {
    DAT_800cd9d8 = DAT_800cd9d6;
    ClearVRAMRegion(&DAT_800b57ac);
    FUN_8005def4((&PTR_DAT_800b56ec)[iVar1 * 2],
                 (int)(((uint)DAT_800b57ac + (uint)*(ushort *)(&DAT_800b56e8 + iVar1 * 8)) * 0x10000
                      ) >> 0x10,
                 (int)(((uint)DAT_800b57ae + (uint)*(ushort *)(&DAT_800b56ea + iVar1 * 8)) * 0x10000
                      ) >> 0x10,(int)DAT_800b57b4,(int)DAT_800b57b6,8);
  }
  g_PaletteIndex = 0;
  DrawSpriteFlipped(0xffffff40,0xffffff88,&DAT_800b57bc,g_MenuAnimPtr + 4);
  DrawSpriteFlipped(0x40,0xffffff88,&DAT_800b57cc,g_MenuAnimPtr + 4);
  return;
}


