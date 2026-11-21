/* Function: MenuRender_VolumeBars */
/* Address: 800244f4 */

void MenuRender_VolumeBars(void)

{
  undefined1 *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined1 local_20 [4];
  undefined4 uStack_1c;
  
  puVar1 = local_20 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | g_BGMBarSpritePos >> (3 - uVar2) * 8;
  local_20 = (undefined1  [4])g_BGMBarSpritePos;
  uVar2 = (int)&uStack_1c + 3U & 3;
  puVar3 = (uint *)(((int)&uStack_1c + 3U) - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | g_BGMBarSpriteData >> (3 - uVar2) * 8;
  uStack_1c = g_BGMBarSpriteData;
  iVar4 = (int)((uint)g_PlayerVolume << 0x10) >> 0x13;
  iVar5 = iVar4 << 0x10;
  if (0x10 < iVar4) {
    iVar5 = 0x100000;
  }
  iVar4 = 0;
  if (0 < iVar5 >> 0x10) {
    do {
      local_20._0_2_ = (short)((iVar4 << 0x10) >> 0xc) + -8;
      DrawSpriteScaled(&g_VolumeBarFull,local_20,g_MenuAnimPtr + 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 * 0x10000 >> 0x10 < iVar5 >> 0x10);
  }
  iVar4 = 0;
  do {
    local_20._0_2_ = (short)((iVar4 << 0x10) >> 0xc) + -8;
    DrawSpriteScaled(&g_VolumeBarEmpty,local_20,g_MenuAnimPtr + 4);
    iVar4 = iVar4 + 1;
  } while (iVar4 * 0x10000 >> 0x10 < 0x10);
  puVar1 = local_20 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | g_SFXBarSpritePos >> (3 - uVar2) * 8;
  local_20 = (undefined1  [4])g_SFXBarSpritePos;
  uVar2 = (int)&uStack_1c + 3U & 3;
  puVar3 = (uint *)(((int)&uStack_1c + 3U) - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | g_SFXBarSpriteData >> (3 - uVar2) * 8;
  uStack_1c = g_SFXBarSpriteData;
  iVar4 = (int)((uint)g_PlayerSFXVolume << 0x10) >> 0x13;
  iVar5 = iVar4 << 0x10;
  if (0x10 < iVar4) {
    iVar5 = 0x100000;
  }
  iVar4 = 0;
  if (0 < iVar5 >> 0x10) {
    do {
      local_20._0_2_ = (short)((iVar4 << 0x10) >> 0xc) + -8;
      DrawSpriteScaled(&g_VolumeBarFull,local_20,g_MenuAnimPtr + 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 * 0x10000 >> 0x10 < iVar5 >> 0x10);
  }
  iVar4 = 0;
  do {
    local_20._0_2_ = (short)((iVar4 << 0x10) >> 0xc) + -8;
    DrawSpriteScaled(&g_VolumeBarEmpty,local_20,g_MenuAnimPtr + 4);
    iVar4 = iVar4 + 1;
  } while (iVar4 * 0x10000 >> 0x10 < 0x10);
  return;
}


