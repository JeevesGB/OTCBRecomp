/* Function: MenuRender_TransmissionSelect */
/* Address: 80025dc8 */

void MenuRender_TransmissionSelect(void)

{
  undefined1 *puVar1;
  uint uVar2;
  short sVar3;
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
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  uchar auStack_38 [8];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  
  puVar10 = &g_TransmissionBGSprite;
  puVar1 = auStack_40 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 |
       g_TransmissionBGSprite >> (3 - uVar2) * 8;
  auStack_40 = (undefined1  [4])g_TransmissionBGSprite;
  puVar1 = auStack_3c + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_8001bcb4 >> (3 - uVar2) * 8;
  auStack_3c = (undefined1  [4])DAT_8001bcb4;
  uVar6 = g_TransmissionBGSprite;
  uVar8 = DAT_8001bcb4;
  memset(auStack_38,'\0',4);
  uVar2 = g_MenuSpriteBuffer + 0x12fU & 3;
  uVar7 = g_MenuSpriteBuffer + 300U & 3;
  uVar6 = (*(int *)((g_MenuSpriteBuffer + 0x12fU) - uVar2) << (3 - uVar2) * 8 |
          uVar6 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar7) * 8 |
          *(uint *)((g_MenuSpriteBuffer + 300U) - uVar7) >> uVar7 * 8;
  uVar2 = g_MenuSpriteBuffer + 0x133U & 3;
  uVar7 = g_MenuSpriteBuffer + 0x130U & 3;
  uVar8 = (*(int *)((g_MenuSpriteBuffer + 0x133U) - uVar2) << (3 - uVar2) * 8 |
          uVar8 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar7) * 8 |
          *(uint *)((g_MenuSpriteBuffer + 0x130U) - uVar7) >> uVar7 * 8;
  uVar2 = g_MenuSpriteBuffer + 0x137U & 3;
  uVar7 = g_MenuSpriteBuffer + 0x134U & 3;
  uVar9 = (*(int *)((g_MenuSpriteBuffer + 0x137U) - uVar2) << (3 - uVar2) * 8 |
          in_t2 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar7) * 8 |
          *(uint *)((g_MenuSpriteBuffer + 0x134U) - uVar7) >> uVar7 * 8;
  uVar2 = g_MenuSpriteBuffer + 0x13bU & 3;
  uVar7 = g_MenuSpriteBuffer + 0x138U & 3;
  uVar11 = (*(int *)((g_MenuSpriteBuffer + 0x13bU) - uVar2) << (3 - uVar2) * 8 |
           (uint)puVar10 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar7) * 8 |
           *(uint *)((g_MenuSpriteBuffer + 0x138U) - uVar7) >> uVar7 * 8;
  puVar1 = auStack_30 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uVar6 >> (3 - uVar2) * 8;
  auStack_30 = (undefined1  [4])uVar6;
  puVar1 = auStack_2c + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uVar8 >> (3 - uVar2) * 8;
  auStack_2c = (undefined1  [4])uVar8;
  puVar1 = auStack_28 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uVar9 >> (3 - uVar2) * 8;
  auStack_28 = (undefined1  [4])uVar9;
  puVar1 = auStack_24 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uVar11 >> (3 - uVar2) * 8;
  auStack_24 = (undefined1  [4])uVar11;
  uVar2 = g_MenuSpriteBuffer + 0x13fU & 3;
  uVar7 = g_MenuSpriteBuffer + 0x13cU & 3;
  uVar7 = (*(int *)((g_MenuSpriteBuffer + 0x13fU) - uVar2) << (3 - uVar2) * 8 |
          uVar6 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar7) * 8 |
          *(uint *)((g_MenuSpriteBuffer + 0x13cU) - uVar7) >> uVar7 * 8;
  puVar1 = auStack_20 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uVar7 >> (3 - uVar2) * 8;
  iVar12 = -0x70;
  if (g_VSConfirmed != 0) {
    auStack_2c._2_2_ = (undefined2)(uVar8 >> 0x10);
    if ((g_VSConfirmed & 1) == 0) {
      g_TransmissionAnimTimer = g_TransmissionAnimTimer - 4;
      if ((int)((uint)g_TransmissionAnimTimer << 0x10) < 1) {
        g_VSConfirmed = 0;
      }
    }
    else {
      g_TransmissionAnimTimer = g_TransmissionAnimTimer + 4;
      if ((int)((ushort)auStack_2c._2_2_ - 1) <= (int)(short)g_TransmissionAnimTimer) {
        g_VSConfirmed = g_VSConfirmed + 1;
      }
    }
    auStack_2c._2_2_ = auStack_2c._2_2_ - g_TransmissionAnimTimer;
    auStack_2c._0_2_ = (undefined2)uVar8;
    if (auStack_2c._2_2_ == 0) {
      auStack_2c._2_2_ = 1;
    }
    iVar5 = ((int)((uint)g_TransmissionAnimTimer << 0x10) >> 0x10) -
            ((int)((uint)g_TransmissionAnimTimer << 0x10) >> 0x1f) >> 1;
    auStack_30._2_2_ = (undefined2)(uVar6 >> 0x10);
    iVar12 = iVar5 + -0x70;
    auStack_30._0_2_ = (undefined2)uVar6;
    auStack_30._2_2_ = auStack_30._2_2_ + (short)iVar5;
  }
  auStack_20._0_4_ = uVar7;
  GetMenuItemColor(&local_18,&local_14,g_ColorCycle,g_RaceInitFlag < 2);
  if ((&g_PadState)[g_RaceInitFlag] == 3) {
    local_18 = 1;
    local_14 = 0xffffffff;
  }
  iVar5 = -0x70;
  DrawSpriteEx(auStack_30,0xffffffd0,iVar12,g_MenuAnimPtr + 4,local_18,0xffffffff,0xffffffff);
  uVar4 = *(short *)(&g_TransmissionSpriteTable + g_PlayerTransmission * 2) * 0x14 +
          g_MenuSpriteBuffer;
  uVar2 = uVar4 + 3 & 3;
  uVar6 = uVar4 & 3;
  auStack_30 = (undefined1  [4])
               ((*(int *)((uVar4 + 3) - uVar2) << (3 - uVar2) * 8 |
                uVar7 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar6) * 8 |
               *(uint *)(uVar4 - uVar6) >> uVar6 * 8);
  uVar2 = uVar4 + 7 & 3;
  uVar7 = uVar4 + 4 & 3;
  uVar6 = (*(int *)((uVar4 + 7) - uVar2) << (3 - uVar2) * 8 | uVar8 & 0xffffffffU >> (uVar2 + 1) * 8
          ) & -1 << (4 - uVar7) * 8 | *(uint *)((uVar4 + 4) - uVar7) >> uVar7 * 8;
  uVar2 = uVar4 + 0xb & 3;
  uVar7 = uVar4 + 8 & 3;
  uVar8 = (*(int *)((uVar4 + 0xb) - uVar2) << (3 - uVar2) * 8 |
          uVar9 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar7) * 8 |
          *(uint *)((uVar4 + 8) - uVar7) >> uVar7 * 8;
  uVar2 = uVar4 + 0xf & 3;
  uVar7 = uVar4 + 0xc & 3;
  uVar9 = (*(int *)((uVar4 + 0xf) - uVar2) << (3 - uVar2) * 8 |
          uVar11 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar7) * 8 |
          *(uint *)((uVar4 + 0xc) - uVar7) >> uVar7 * 8;
  puVar1 = auStack_30 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | (uint)auStack_30 >> (3 - uVar2) * 8;
  puVar1 = auStack_2c + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uVar6 >> (3 - uVar2) * 8;
  auStack_2c = (undefined1  [4])uVar6;
  puVar1 = auStack_28 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uVar8 >> (3 - uVar2) * 8;
  auStack_28 = (undefined1  [4])uVar8;
  puVar1 = auStack_24 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uVar9 >> (3 - uVar2) * 8;
  auStack_24 = (undefined1  [4])uVar9;
  uVar2 = uVar4 + 0x13 & 3;
  uVar7 = uVar4 + 0x10 & 3;
  auStack_20._0_4_ =
       (*(int *)((uVar4 + 0x13) - uVar2) << (3 - uVar2) * 8 |
       (uint)auStack_30 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar7) * 8 |
       *(uint *)((uVar4 + 0x10) - uVar7) >> uVar7 * 8;
  puVar1 = auStack_20 + 3;
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 |
       (uint)auStack_20._0_4_ >> (3 - uVar2) * 8;
  if (g_VSConfirmed != 0) {
    if ((g_VSConfirmed & 1) != 0) {
      uVar11 = *(short *)(&g_TransmissionSpriteTable + g_PlayerTransmission2 * 2) * 0x14 +
               g_MenuSpriteBuffer;
      uVar2 = uVar11 + 3 & 3;
      uVar7 = uVar11 & 3;
      auStack_30 = (undefined1  [4])
                   ((*(int *)((uVar11 + 3) - uVar2) << (3 - uVar2) * 8 |
                    auStack_20._0_4_ & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar7) * 8 |
                   *(uint *)(uVar11 - uVar7) >> uVar7 * 8);
      uVar2 = uVar11 + 7 & 3;
      uVar7 = uVar11 + 4 & 3;
      uVar6 = (*(int *)((uVar11 + 7) - uVar2) << (3 - uVar2) * 8 |
              uVar6 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar7) * 8 |
              *(uint *)((uVar11 + 4) - uVar7) >> uVar7 * 8;
      uVar2 = uVar11 + 0xb & 3;
      uVar7 = uVar11 + 8 & 3;
      uVar8 = (*(int *)((uVar11 + 0xb) - uVar2) << (3 - uVar2) * 8 |
              uVar8 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar7) * 8 |
              *(uint *)((uVar11 + 8) - uVar7) >> uVar7 * 8;
      uVar2 = uVar11 + 0xf & 3;
      uVar7 = uVar11 + 0xc & 3;
      uVar7 = (*(int *)((uVar11 + 0xf) - uVar2) << (3 - uVar2) * 8 |
              uVar9 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar7) * 8 |
              *(uint *)((uVar11 + 0xc) - uVar7) >> uVar7 * 8;
      puVar1 = auStack_30 + 3;
      uVar2 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar2) =
           *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | (uint)auStack_30 >> (3 - uVar2) * 8;
      puVar1 = auStack_2c + 3;
      uVar2 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar2) =
           *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uVar6 >> (3 - uVar2) * 8;
      auStack_2c = (undefined1  [4])uVar6;
      puVar1 = auStack_28 + 3;
      uVar2 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar2) =
           *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uVar8 >> (3 - uVar2) * 8;
      auStack_28 = (undefined1  [4])uVar8;
      puVar1 = auStack_24 + 3;
      uVar2 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar2) =
           *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | uVar7 >> (3 - uVar2) * 8;
      auStack_24 = (undefined1  [4])uVar7;
      uVar2 = uVar11 + 0x13 & 3;
      uVar7 = uVar11 + 0x10 & 3;
      auStack_20._0_4_ =
           (*(int *)((uVar11 + 0x13) - uVar2) << (3 - uVar2) * 8 |
           (uint)auStack_30 & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar7) * 8 |
           *(uint *)((uVar11 + 0x10) - uVar7) >> uVar7 * 8;
      puVar1 = auStack_20 + 3;
      uVar2 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar2) =
           *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 |
           (uint)auStack_20._0_4_ >> (3 - uVar2) * 8;
    }
    sVar3 = auStack_2c._2_2_ - g_TransmissionAnimTimer;
    auStack_2c._2_2_ = sVar3;
    if (sVar3 == 0) {
      auStack_2c._2_2_ = 1;
    }
    iVar12 = ((int)((uint)g_TransmissionAnimTimer << 0x10) >> 0x10) -
             ((int)((uint)g_TransmissionAnimTimer << 0x10) >> 0x1f) >> 1;
    iVar5 = iVar12 + -0x70;
    auStack_30._2_2_ = auStack_30._2_2_ + (short)iVar12;
  }
  DrawSpriteEx(auStack_30,0x22,iVar5,g_MenuAnimPtr + 4,local_18,0xffffffff,0xffffffff);
  DrawMenuBackground(auStack_38,auStack_40,g_MenuAnimPtr + 4);
  DrawSpriteEx(g_MenuSpriteBuffer + 0x244,0xffffffb0,0xffffff94,g_MenuAnimPtr + 4,local_18,
               0xffffffff,local_14);
  DrawSpriteEx(g_MenuSpriteBuffer + 600,0x44,0xffffff94,g_MenuAnimPtr + 4,local_18,0xffffffff,
               local_14);
  return;
}


