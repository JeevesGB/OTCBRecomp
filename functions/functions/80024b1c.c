/* Function: MenuRender_Options */
/* Address: 80024b1c */

void MenuRender_Options(void)

{
  undefined1 *puVar1;
  undefined1 auVar2 [4];
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint in_t2;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [4];
  undefined1 local_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  
  puVar1 = auStack_48 + 3;
  uVar6 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar6) =
       *(uint *)(puVar1 + -uVar6) & -1 << (uVar6 + 1) * 8 | g_MenuSpriteData1 >> (3 - uVar6) * 8;
  auStack_48 = (undefined1  [4])g_MenuSpriteData1;
  puVar1 = local_44 + 3;
  uVar6 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar6) =
       *(uint *)(puVar1 + -uVar6) & -1 << (uVar6 + 1) * 8 | g_MenuSpriteData2 >> (3 - uVar6) * 8;
  local_44 = (undefined1  [4])g_MenuSpriteData2;
  puVar10 = &g_MenuSpriteData3;
  puVar1 = auStack_50 + 3;
  uVar6 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar6) =
       *(uint *)(puVar1 + -uVar6) & -1 << (uVar6 + 1) * 8 | g_MenuSpriteData3 >> (3 - uVar6) * 8;
  auStack_50._0_4_ = g_MenuSpriteData3;
  uVar6 = g_MenuSpriteData3;
  uVar7 = g_MenuSpriteData2;
  if (g_MenuFlag < 0xba) {
    g_MenuAnimX1 = g_MenuFlag;
    g_MenuAnimX2 = g_MenuFlag;
    DrawSpriteScaled(&g_MenuAnimBase,&DAT_800acb38,g_MenuAnimPtr + 4);
    DrawSpriteScaled(&g_MenuAnimBase,&DAT_800acb40,g_MenuAnimPtr + 4);
    if (g_MenuFlag < 0xba) {
      g_MenuAnimX3 = g_MenuFlag;
      g_MenuAnimX4 = g_MenuFlag;
      g_MenuAnimY1 = 0x142 - g_MenuFlag;
      g_MenuAnimY2 = g_MenuAnimY1;
      DrawSpriteScaled(&g_MenuAnimBase,&g_MenuAnimY1,g_MenuAnimPtr + 4);
      DrawSpriteScaled(&g_MenuAnimBase,&g_MenuAnimY2,g_MenuAnimPtr + 4);
      g_MenuFlag = g_MenuFlag + 8;
    }
  }
  uVar3 = g_MenuItemTable * 0x14 + g_MenuSpriteBuffer;
  uVar8 = uVar3 + 3 & 3;
  uVar9 = uVar3 & 3;
  auStack_40 = (undefined1  [4])
               ((*(int *)((uVar3 + 3) - uVar8) << (3 - uVar8) * 8 |
                uVar6 & 0xffffffffU >> (uVar8 + 1) * 8) & -1 << (4 - uVar9) * 8 |
               *(uint *)(uVar3 - uVar9) >> uVar9 * 8);
  uVar6 = uVar3 + 7 & 3;
  uVar8 = uVar3 + 4 & 3;
  uVar8 = (*(int *)((uVar3 + 7) - uVar6) << (3 - uVar6) * 8 | uVar7 & 0xffffffffU >> (uVar6 + 1) * 8
          ) & -1 << (4 - uVar8) * 8 | *(uint *)((uVar3 + 4) - uVar8) >> uVar8 * 8;
  uVar6 = uVar3 + 0xb & 3;
  uVar7 = uVar3 + 8 & 3;
  uVar9 = (*(int *)((uVar3 + 0xb) - uVar6) << (3 - uVar6) * 8 |
          in_t2 & 0xffffffffU >> (uVar6 + 1) * 8) & -1 << (4 - uVar7) * 8 |
          *(uint *)((uVar3 + 8) - uVar7) >> uVar7 * 8;
  uVar6 = uVar3 + 0xf & 3;
  uVar7 = uVar3 + 0xc & 3;
  uVar11 = (*(int *)((uVar3 + 0xf) - uVar6) << (3 - uVar6) * 8 |
           (uint)puVar10 & 0xffffffffU >> (uVar6 + 1) * 8) & -1 << (4 - uVar7) * 8 |
           *(uint *)((uVar3 + 0xc) - uVar7) >> uVar7 * 8;
  puVar1 = auStack_40 + 3;
  uVar6 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar6) =
       *(uint *)(puVar1 + -uVar6) & -1 << (uVar6 + 1) * 8 | (uint)auStack_40 >> (3 - uVar6) * 8;
  puVar1 = auStack_3c + 3;
  uVar6 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar6) =
       *(uint *)(puVar1 + -uVar6) & -1 << (uVar6 + 1) * 8 | uVar8 >> (3 - uVar6) * 8;
  auStack_3c = (undefined1  [4])uVar8;
  auVar2 = auStack_3c;
  puVar1 = auStack_38 + 3;
  uVar6 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar6) =
       *(uint *)(puVar1 + -uVar6) & -1 << (uVar6 + 1) * 8 | uVar9 >> (3 - uVar6) * 8;
  auStack_38 = (undefined1  [4])uVar9;
  puVar1 = auStack_34 + 3;
  uVar6 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar6) =
       *(uint *)(puVar1 + -uVar6) & -1 << (uVar6 + 1) * 8 | uVar11 >> (3 - uVar6) * 8;
  auStack_34 = (undefined1  [4])uVar11;
  uVar6 = uVar3 + 0x13 & 3;
  uVar7 = uVar3 + 0x10 & 3;
  uVar7 = (*(int *)((uVar3 + 0x13) - uVar6) << (3 - uVar6) * 8 |
          (uint)auStack_40 & 0xffffffffU >> (uVar6 + 1) * 8) & -1 << (4 - uVar7) * 8 |
          *(uint *)((uVar3 + 0x10) - uVar7) >> uVar7 * 8;
  puVar1 = auStack_30 + 3;
  uVar6 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar6) =
       *(uint *)(puVar1 + -uVar6) & -1 << (uVar6 + 1) * 8 | uVar7 >> (3 - uVar6) * 8;
  if ((g_MenuVisible != 0) && (g_MenuTimer = g_MenuTimer + 1, 0x11 < g_MenuTimer)) {
    auStack_3c._2_2_ = (undefined2)(uVar8 >> 0x10);
    g_MenuActive = g_MenuActive + 1;
    if ((int)(uint)(ushort)auStack_3c._2_2_ <= (int)(short)g_MenuActive) {
      g_MenuVisible = 0;
      g_MenuActive = auStack_3c._2_2_;
    }
  }
  iVar5 = 0;
  auStack_3c = auVar2;
  auStack_30._0_4_ = uVar7;
  do {
    iVar12 = (int)(short)iVar5;
    GetMenuItemColor(&local_28,&local_24,g_ColorCycle,g_MenuSelection == (short)iVar5);
    uVar4 = (&g_MenuItemTable)[iVar12] * 0x14 + g_MenuSpriteBuffer;
    uVar6 = uVar4 + 3 & 3;
    uVar3 = uVar4 & 3;
    auStack_40 = (undefined1  [4])
                 ((*(int *)((uVar4 + 3) - uVar6) << (3 - uVar6) * 8 |
                  uVar7 & 0xffffffffU >> (uVar6 + 1) * 8) & -1 << (4 - uVar3) * 8 |
                 *(uint *)(uVar4 - uVar3) >> uVar3 * 8);
    uVar6 = uVar4 + 7 & 3;
    uVar7 = uVar4 + 4 & 3;
    uVar8 = (*(int *)((uVar4 + 7) - uVar6) << (3 - uVar6) * 8 |
            uVar8 & 0xffffffffU >> (uVar6 + 1) * 8) & -1 << (4 - uVar7) * 8 |
            *(uint *)((uVar4 + 4) - uVar7) >> uVar7 * 8;
    uVar6 = uVar4 + 0xb & 3;
    uVar7 = uVar4 + 8 & 3;
    uVar9 = (*(int *)((uVar4 + 0xb) - uVar6) << (3 - uVar6) * 8 |
            uVar9 & 0xffffffffU >> (uVar6 + 1) * 8) & -1 << (4 - uVar7) * 8 |
            *(uint *)((uVar4 + 8) - uVar7) >> uVar7 * 8;
    uVar6 = uVar4 + 0xf & 3;
    uVar7 = uVar4 + 0xc & 3;
    uVar11 = (*(int *)((uVar4 + 0xf) - uVar6) << (3 - uVar6) * 8 |
             uVar11 & 0xffffffffU >> (uVar6 + 1) * 8) & -1 << (4 - uVar7) * 8 |
             *(uint *)((uVar4 + 0xc) - uVar7) >> uVar7 * 8;
    puVar1 = auStack_40 + 3;
    uVar6 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar6) =
         *(uint *)(puVar1 + -uVar6) & -1 << (uVar6 + 1) * 8 | (uint)auStack_40 >> (3 - uVar6) * 8;
    puVar1 = auStack_3c + 3;
    uVar6 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar6) =
         *(uint *)(puVar1 + -uVar6) & -1 << (uVar6 + 1) * 8 | uVar8 >> (3 - uVar6) * 8;
    auStack_3c = (undefined1  [4])uVar8;
    puVar1 = auStack_38 + 3;
    uVar6 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar6) =
         *(uint *)(puVar1 + -uVar6) & -1 << (uVar6 + 1) * 8 | uVar9 >> (3 - uVar6) * 8;
    auStack_38 = (undefined1  [4])uVar9;
    puVar1 = auStack_34 + 3;
    uVar6 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar6) =
         *(uint *)(puVar1 + -uVar6) & -1 << (uVar6 + 1) * 8 | uVar11 >> (3 - uVar6) * 8;
    auStack_34 = (undefined1  [4])uVar11;
    uVar6 = uVar4 + 0x13 & 3;
    uVar7 = uVar4 + 0x10 & 3;
    uVar7 = (*(int *)((uVar4 + 0x13) - uVar6) << (3 - uVar6) * 8 |
            (uint)auStack_40 & 0xffffffffU >> (uVar6 + 1) * 8) & -1 << (4 - uVar7) * 8 |
            *(uint *)((uVar4 + 0x10) - uVar7) >> uVar7 * 8;
    puVar1 = auStack_30 + 3;
    uVar6 = (uint)puVar1 & 3;
    *(uint *)(puVar1 + -uVar6) =
         *(uint *)(puVar1 + -uVar6) & -1 << (uVar6 + 1) * 8 | uVar7 >> (3 - uVar6) * 8;
    if (g_MenuVisible != 0) {
      auStack_3c._0_2_ = (undefined2)uVar8;
      auStack_3c._2_2_ = g_MenuActive;
    }
    if (((iVar12 == 8) && (g_PadState != 2)) && (g_PadState2 != 2)) {
      local_28 = 1;
    }
    auStack_30._0_4_ = uVar7;
    DrawSpriteEx(auStack_40,0xfffffef0,(iVar12 * 0x20 + -0x84) * 0x10000 >> 0x10,g_MenuAnimPtr + 4,
                 local_28,0xffffffff,local_24);
    iVar5 = iVar5 + 1;
  } while (iVar5 * 0x10000 >> 0x10 < 10);
  GetMenuItemColor(&local_28,&local_24,g_ColorCycle,g_MenuSelection == 5);
  DrawSpriteEx(g_MenuSpriteBuffer + 0x78,0xffffff70,0x1c,g_MenuAnimPtr + 4,local_28,0xffffffff,
               local_24);
  GetMenuItemColor(&local_28,&local_24,g_ColorCycle,g_MenuSelection == 6);
  DrawSpriteEx(g_MenuSpriteBuffer + 0x8c,0xffffff70,0x3c,g_MenuAnimPtr + 4,local_28,0xffffffff,
               local_24);
  iVar5 = 0;
  if (g_MenuPage < 0x208) {
    g_MenuPage = g_MenuPage + 8;
    local_44._0_2_ = g_MenuPage;
    do {
      auStack_48._2_2_ = (short)((iVar5 << 0x10) >> 0xb) + -0x68;
      DrawSpriteScaled(auStack_50,auStack_48,g_MenuAnimPtr + 4);
      iVar5 = iVar5 + 1;
    } while (iVar5 * 0x10000 >> 0x10 < 10);
  }
  MenuRender_Options_Items();
  MenuRender_VolumeBars();
  return;
}


