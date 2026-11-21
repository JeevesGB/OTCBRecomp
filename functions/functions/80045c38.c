/* Function: UpdateTransmission */
/* Address: 80045c38 */

/* WARNING: Removing unreachable block (ram,0x80046208) */
/* WARNING: Removing unreachable block (ram,0x8004620c) */
/* WARNING: Removing unreachable block (ram,0x80046258) */
/* WARNING: Removing unreachable block (ram,0x80045f7c) */
/* WARNING: Removing unreachable block (ram,0x80045f80) */
/* WARNING: Removing unreachable block (ram,0x80045fcc) */
/* WARNING: Removing unreachable block (ram,0x80046058) */
/* WARNING: Removing unreachable block (ram,0x8004605c) */
/* WARNING: Removing unreachable block (ram,0x800460a8) */
/* WARNING: Removing unreachable block (ram,0x80045dac) */
/* WARNING: Removing unreachable block (ram,0x80045db0) */
/* WARNING: Removing unreachable block (ram,0x80045dfc) */
/* WARNING: Removing unreachable block (ram,0x800462e8) */
/* WARNING: Removing unreachable block (ram,0x800462ec) */
/* WARNING: Removing unreachable block (ram,0x80046338) */
/* WARNING: Removing unreachable block (ram,0x80045e84) */
/* WARNING: Removing unreachable block (ram,0x80045e88) */
/* WARNING: Removing unreachable block (ram,0x80045ed4) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00000020 : 0x80045f14 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void UpdateTransmission(void)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  uint *puVar5;
  byte *pbVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if ((DAT_800aea6e != 0) && (g_RacePosition == 0)) {
    DAT_800aea6e = 0;
    DAT_800aea70 = 0xffff;
    MoveImage((RECT *)&g_CarRenderDataA,(int)g_CarRenderDataB,(int)DAT_800ae9be);
    DrawSync(0);
    if (DAT_800aea68 == 0) {
      pbVar4 = &g_TrackCollisionData;
      DAT_800aea6c = -1;
      DAT_800aea68 = -1;
      bVar1 = g_TrackCollisionData;
      while (bVar1 < 100) {
        switch(bVar1) {
        case 0:
          pbVar4 = (byte *)((int)pbVar4 + 0x2c);
          break;
        default:
          goto LAB_8004618c;
        case 2:
        case 3:
          pbVar4 = (byte *)((int)pbVar4 + 0x28);
          break;
        case 4:
          pbVar4 = (byte *)((int)pbVar4 + 4);
        }
        bVar1 = (byte)*(uint *)pbVar4;
      }
      pbVar4 = (byte *)0x0;
LAB_8004618c:
      pbVar6 = &g_TrackCollisionData;
      bVar1 = g_TrackCollisionData;
      while (bVar1 < 100) {
        switch(bVar1) {
        case 0:
        case 1:
          pbVar6 = (byte *)((int)pbVar6 + 0x2c);
          break;
        case 2:
        case 3:
          pbVar6 = (byte *)((int)pbVar6 + 0x28);
          break;
        case 4:
          pbVar6 = (byte *)((int)pbVar6 + 4);
        }
        bVar1 = (byte)*(uint *)pbVar6;
      }
      puVar7 = (uint *)pbVar4;
      puVar3 = (uint *)pbVar6;
      do {
        puVar8 = puVar3;
        puVar5 = puVar7;
        uVar9 = puVar5[1];
        uVar10 = puVar5[2];
        uVar11 = puVar5[3];
        *puVar8 = *puVar5;
        puVar8[1] = uVar9;
        puVar8[2] = uVar10;
        puVar8[3] = uVar11;
        puVar7 = puVar5 + 4;
        puVar3 = puVar8 + 4;
      } while (puVar7 != (uint *)((int)pbVar4 + 0x20));
      uVar9 = *puVar7;
      uVar10 = puVar5[5];
      uVar11 = puVar5[6];
      uVar2 = (uint)((int)puVar8 + 0x13) & 3;
      puVar7 = (uint *)((undefined1 *)((int)puVar8 + 0x13) + -uVar2);
      *puVar7 = *puVar7 & -1 << (uVar2 + 1) * 8 | uVar9 >> (3 - uVar2) * 8;
      puVar8[4] = uVar9;
      uVar9 = (uint)((int)puVar8 + 0x17) & 3;
      puVar7 = (uint *)((undefined1 *)((int)puVar8 + 0x17) + -uVar9);
      *puVar7 = *puVar7 & -1 << (uVar9 + 1) * 8 | uVar10 >> (3 - uVar9) * 8;
      puVar8[5] = uVar10;
      uVar9 = (uint)((int)puVar8 + 0x1b) & 3;
      puVar7 = (uint *)((undefined1 *)((int)puVar8 + 0x1b) + -uVar9);
      *puVar7 = *puVar7 & -1 << (uVar9 + 1) * 8 | uVar11 >> (3 - uVar9) * 8;
      puVar8[6] = uVar11;
      *pbVar6 = 0;
      *(undefined2 *)((int)pbVar6 + 0x2c) = 0xffff;
      puVar7 = (uint *)pbVar6;
      puVar3 = &g_ReplayCarIndex;
      do {
        puVar8 = puVar3;
        puVar5 = puVar7;
        uVar9 = puVar5[1];
        uVar10 = puVar5[2];
        uVar11 = puVar5[3];
        *puVar8 = *puVar5;
        puVar8[1] = uVar9;
        puVar8[2] = uVar10;
        puVar8[3] = uVar11;
        puVar7 = puVar5 + 4;
        puVar3 = puVar8 + 4;
      } while (puVar7 != (uint *)((int)pbVar6 + 0x20));
      uVar9 = *puVar7;
      uVar10 = puVar5[5];
      uVar11 = puVar5[6];
      uVar2 = (int)puVar8 + 0x13U & 3;
      puVar7 = (uint *)(((int)puVar8 + 0x13U) - uVar2);
      *puVar7 = *puVar7 & -1 << (uVar2 + 1) * 8 | uVar9 >> (3 - uVar2) * 8;
      puVar8[4] = uVar9;
      uVar9 = (int)puVar8 + 0x17U & 3;
      puVar7 = (uint *)(((int)puVar8 + 0x17U) - uVar9);
      *puVar7 = *puVar7 & -1 << (uVar9 + 1) * 8 | uVar10 >> (3 - uVar9) * 8;
      puVar8[5] = uVar10;
      uVar9 = (int)puVar8 + 0x1bU & 3;
      puVar7 = (uint *)(((int)puVar8 + 0x1bU) - uVar9);
      *puVar7 = *puVar7 & -1 << (uVar9 + 1) * 8 | uVar11 >> (3 - uVar9) * 8;
      puVar8[6] = uVar11;
      g_ReplayCarIndex._0_1_ = 0;
      DAT_800ccef8 = (int)g_TrackSurface;
      FUN_80045960();
    }
    else {
      pbVar4 = &g_TrackCollisionData;
      bVar1 = g_TrackCollisionData;
      while (bVar1 < 100) {
        switch(bVar1) {
        case 0:
          pbVar4 = (byte *)((int)pbVar4 + 0x2c);
          break;
        default:
          goto LAB_80045d1c;
        case 2:
        case 3:
          pbVar4 = (byte *)((int)pbVar4 + 0x28);
          break;
        case 4:
          pbVar4 = (byte *)((int)pbVar4 + 4);
        }
        bVar1 = (byte)*(uint *)pbVar4;
      }
      pbVar4 = (byte *)0x0;
LAB_80045d1c:
      pbVar6 = &g_TrackCollisionData;
      bVar1 = g_TrackCollisionData;
      while (uVar9 = (uint)bVar1, uVar9 < 100) {
        if (uVar9 < 5) {
                    /* WARNING: Could not recover jumptable at 0x80045d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(&DAT_8001bf4c + uVar9 * 4))();
          return;
        }
        pbVar6 = pbVar6 + 0x2c;
        bVar1 = *pbVar6;
      }
      if (DAT_800aea6c == 0) {
        puVar7 = (uint *)pbVar4;
        puVar3 = (uint *)0x0;
        do {
          puVar8 = puVar3;
          puVar5 = puVar7;
          uVar9 = puVar5[1];
          uVar10 = puVar5[2];
          uVar11 = puVar5[3];
          *puVar8 = *puVar5;
          puVar8[1] = uVar9;
          puVar8[2] = uVar10;
          puVar8[3] = uVar11;
          puVar7 = puVar5 + 4;
          puVar3 = puVar8 + 4;
        } while (puVar7 != (uint *)((int)pbVar4 + 0x20));
        uVar9 = *puVar7;
        uVar10 = puVar5[5];
        uVar11 = puVar5[6];
        uVar2 = (int)puVar8 + 0x13U & 3;
        puVar7 = (uint *)(((int)puVar8 + 0x13U) - uVar2);
        *puVar7 = *puVar7 & -1 << (uVar2 + 1) * 8 | uVar9 >> (3 - uVar2) * 8;
        puVar8[4] = uVar9;
        uVar9 = (int)puVar8 + 0x17U & 3;
        puVar7 = (uint *)(((int)puVar8 + 0x17U) - uVar9);
        *puVar7 = *puVar7 & -1 << (uVar9 + 1) * 8 | uVar10 >> (3 - uVar9) * 8;
        puVar8[5] = uVar10;
        uVar9 = (int)puVar8 + 0x1bU & 3;
        puVar7 = (uint *)(((int)puVar8 + 0x1bU) - uVar9);
        *puVar7 = *puVar7 & -1 << (uVar9 + 1) * 8 | uVar11 >> (3 - uVar9) * 8;
        puVar8[6] = uVar11;
        uRam00000000 = 0;
        puVar7 = (uint *)0x0;
        puVar3 = &g_ReplayCarIndex;
        do {
          puVar8 = puVar3;
          puVar5 = puVar7;
          uVar9 = puVar5[1];
          uVar10 = puVar5[2];
          uVar11 = puVar5[3];
          *puVar8 = *puVar5;
          puVar8[1] = uVar9;
          puVar8[2] = uVar10;
          puVar8[3] = uVar11;
          uVar9 = uRam00000020;
          puVar7 = puVar5 + 4;
          puVar3 = puVar8 + 4;
        } while (puVar5 + 4 != &uRam00000020);
        uVar10 = puVar5[5];
        uVar11 = puVar5[6];
        uVar2 = (int)puVar8 + 0x13U & 3;
        puVar7 = (uint *)(((int)puVar8 + 0x13U) - uVar2);
        *puVar7 = *puVar7 & -1 << (uVar2 + 1) * 8 | uRam00000020 >> (3 - uVar2) * 8;
        puVar8[4] = uVar9;
        uVar9 = (int)puVar8 + 0x17U & 3;
        puVar7 = (uint *)(((int)puVar8 + 0x17U) - uVar9);
        *puVar7 = *puVar7 & -1 << (uVar9 + 1) * 8 | uVar10 >> (3 - uVar9) * 8;
        puVar8[5] = uVar10;
        uVar9 = (int)puVar8 + 0x1bU & 3;
        puVar7 = (uint *)(((int)puVar8 + 0x1bU) - uVar9);
        *puVar7 = *puVar7 & -1 << (uVar9 + 1) * 8 | uVar11 >> (3 - uVar9) * 8;
        puVar8[6] = uVar11;
        g_ReplayCarIndex._0_1_ = 0;
        DAT_800ccef8 = (int)g_TrackSurface;
        FUN_80045960();
        DAT_800aea6c = -1;
      }
      else {
        puVar7 = (uint *)pbVar4;
        puVar3 = (uint *)0x0;
        do {
          puVar8 = puVar3;
          puVar5 = puVar7;
          uVar9 = puVar5[1];
          uVar10 = puVar5[2];
          uVar11 = puVar5[3];
          *puVar8 = *puVar5;
          puVar8[1] = uVar9;
          puVar8[2] = uVar10;
          puVar8[3] = uVar11;
          puVar7 = puVar5 + 4;
          puVar3 = puVar8 + 4;
        } while (puVar7 != (uint *)((int)pbVar4 + 0x20));
        uVar9 = *puVar7;
        uVar10 = puVar5[5];
        uVar11 = puVar5[6];
        uVar2 = (int)puVar8 + 0x13U & 3;
        puVar7 = (uint *)(((int)puVar8 + 0x13U) - uVar2);
        *puVar7 = *puVar7 & -1 << (uVar2 + 1) * 8 | uVar9 >> (3 - uVar2) * 8;
        puVar8[4] = uVar9;
        uVar9 = (int)puVar8 + 0x17U & 3;
        puVar7 = (uint *)(((int)puVar8 + 0x17U) - uVar9);
        *puVar7 = *puVar7 & -1 << (uVar9 + 1) * 8 | uVar10 >> (3 - uVar9) * 8;
        puVar8[5] = uVar10;
        uVar9 = (int)puVar8 + 0x1bU & 3;
        puVar7 = (uint *)(((int)puVar8 + 0x1bU) - uVar9);
        *puVar7 = *puVar7 & -1 << (uVar9 + 1) * 8 | uVar11 >> (3 - uVar9) * 8;
        puVar8[6] = uVar11;
        uRam00000000 = 0;
        puVar7 = (uint *)0x0;
        puVar3 = &g_ReplayCarIndex;
        do {
          puVar8 = puVar3;
          puVar5 = puVar7;
          uVar9 = puVar5[1];
          uVar10 = puVar5[2];
          uVar11 = puVar5[3];
          *puVar8 = *puVar5;
          puVar8[1] = uVar9;
          puVar8[2] = uVar10;
          puVar8[3] = uVar11;
          uVar9 = uRam00000020;
          puVar7 = puVar5 + 4;
          puVar3 = puVar8 + 4;
        } while (puVar5 + 4 != &uRam00000020);
        uVar10 = puVar5[5];
        uVar11 = puVar5[6];
        uVar2 = (int)puVar8 + 0x13U & 3;
        puVar7 = (uint *)(((int)puVar8 + 0x13U) - uVar2);
        *puVar7 = *puVar7 & -1 << (uVar2 + 1) * 8 | uRam00000020 >> (3 - uVar2) * 8;
        puVar8[4] = uVar9;
        uVar9 = (int)puVar8 + 0x17U & 3;
        puVar7 = (uint *)(((int)puVar8 + 0x17U) - uVar9);
        *puVar7 = *puVar7 & -1 << (uVar9 + 1) * 8 | uVar10 >> (3 - uVar9) * 8;
        puVar8[5] = uVar10;
        uVar9 = (int)puVar8 + 0x1bU & 3;
        puVar7 = (uint *)(((int)puVar8 + 0x1bU) - uVar9);
        *puVar7 = *puVar7 & -1 << (uVar9 + 1) * 8 | uVar11 >> (3 - uVar9) * 8;
        puVar8[6] = uVar11;
        g_ReplayCarIndex._0_1_ = 0;
      }
    }
    DAT_800aea6a = 0xffff;
  }
  return;
}


