/* Function: DrawVSPlayer2Info */
/* Address: 80026e60 */

void DrawVSPlayer2Info(void)

{
  undefined1 *puVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined1 local_28 [4];
  undefined1 auStack_24 [4];
  undefined1 local_20 [8];
  
  iVar5 = 0;
  puVar1 = local_28 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_8001bd10 >> (3 - uVar2) * 8;
  local_28 = (undefined1  [4])DAT_8001bd10;
  puVar1 = auStack_24 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_8001bd14 >> (3 - uVar2) * 8;
  auStack_24 = (undefined1  [4])DAT_8001bd14;
  puVar1 = local_20 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_8001bd0c >> (3 - uVar2) * 8;
  local_20._0_4_ = DAT_8001bd0c;
  do {
    sVar3 = (short)iVar5;
    if ((&g_MenuCarIndex1)[g_RaceInitFlag] == sVar3) {
      g_ActiveSpriteOffset = 0x100;
    }
    else {
      g_ActiveSpriteOffset = 0;
    }
    DrawText((&PTR_DAT_800ad0d4)[sVar3],sVar3 * 0x40 + -0x68,0xffffffe0);
    iVar5 = iVar5 + 1;
  } while (iVar5 * 0x10000 >> 0x10 < 4);
  g_ActiveSpriteOffset = 0;
  iVar5 = 0;
  iVar4 = 0;
  do {
    DrawSpriteEx(g_MenuSpriteBuffer + 0x230,(iVar4 >> 0x10) * 0x40 + -0x60,0xffffffde,
                 g_MenuAnimPtr + 4,
                 (uint)((int)(short)(&g_MenuCarIndex1)[g_RaceInitFlag] == iVar4 >> 0x10) << 1,
                 0xffffffff,0xffffffff);
    iVar5 = iVar5 + 1;
    iVar4 = iVar5 * 0x10000;
  } while (iVar5 * 0x10000 >> 0x10 < 4);
  iVar5 = 0;
  local_20._0_4_ = local_20._0_4_ & 0xffff0000;
  do {
    local_28._0_2_ = (short)((iVar5 << 0x10) >> 10) + -0x70;
    FUN_800579f0(local_20,local_28,g_MenuAnimPtr + 4);
    iVar5 = iVar5 + 1;
  } while (iVar5 * 0x10000 >> 0x10 < 4);
  return;
}


