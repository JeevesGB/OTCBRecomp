/* Function: DrawVSCarInfo */
/* Address: 80027048 */

void DrawVSCarInfo(void)

{
  undefined1 *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [4];
  undefined1 local_1c [4];
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  puVar1 = auStack_20 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_8001bd18 >> (3 - uVar2) * 8;
  auStack_20 = (undefined1  [4])DAT_8001bd18;
  puVar1 = local_1c + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_8001bd1c >> (3 - uVar2) * 8;
  local_1c = (undefined1  [4])DAT_8001bd1c;
  puVar1 = auStack_18 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_8001bd20 >> (3 - uVar2) * 8;
  auStack_18 = (undefined1  [4])DAT_8001bd20;
  uVar2 = (int)&uStack_14 + 3U & 3;
  puVar3 = (uint *)(((int)&uStack_14 + 3U) - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | DAT_8001bd24 >> (3 - uVar2) * 8;
  uStack_14 = DAT_8001bd24;
  puVar1 = auStack_28 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | g_MenuSpriteData3 >> (3 - uVar2) * 8;
  auStack_28._0_4_ = g_MenuSpriteData3;
  iVar4 = 0;
  if (g_MenuPage < 0x220) {
    g_MenuPage = g_MenuPage + 8;
    local_1c._0_2_ = g_MenuPage;
    do {
      auStack_20._2_2_ = (short)((iVar4 << 0x10) >> 0xb) + -0x30;
      DrawSpriteScaled(auStack_28,auStack_20,g_MenuAnimPtr + 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 * 0x10000 >> 0x10 < 3);
  }
  DrawSpriteScaled(auStack_28,auStack_18,g_MenuAnimPtr + 4);
  return;
}


