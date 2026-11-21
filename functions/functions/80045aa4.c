/* Function: InitTrackGeometryBuffers */
/* Address: 80045aa4 */

/* WARNING: Removing unreachable block (ram,0x80045b6c) */
/* WARNING: Removing unreachable block (ram,0x80045b70) */
/* WARNING: Removing unreachable block (ram,0x80045bbc) */

void InitTrackGeometryBuffers(void)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  DAT_800aea68 = 0;
  DAT_800aea6e = 0;
  DAT_800aea6c = 0;
  if (((DAT_800aea6a != 0) && (g_RaceMode == 0)) &&
     (puVar5 = (uint *)&g_TrackCollisionData, g_TrackSurface == DAT_800ccef8)) {
    DAT_800aea68 = 0xffff;
    bVar3 = g_TrackCollisionData;
    while (bVar3 < 100) {
      switch(bVar3) {
      case 0:
      case 1:
        puVar5 = puVar5 + 0xb;
        break;
      case 2:
      case 3:
        puVar5 = puVar5 + 10;
        break;
      case 4:
        puVar5 = puVar5 + 1;
      }
      bVar3 = (byte)*puVar5;
    }
    puVar2 = &g_ReplayCarIndex;
    puVar4 = puVar5;
    do {
      puVar7 = puVar4;
      puVar6 = puVar2;
      uVar8 = puVar6[1];
      uVar9 = puVar6[2];
      uVar10 = puVar6[3];
      *puVar7 = *puVar6;
      puVar7[1] = uVar8;
      puVar7[2] = uVar9;
      puVar7[3] = uVar10;
      uVar8 = DAT_800ccee8;
      puVar2 = puVar6 + 4;
      puVar4 = puVar7 + 4;
    } while (puVar6 + 4 != &DAT_800ccee8);
    uVar9 = puVar6[5];
    uVar10 = puVar6[6];
    uVar1 = (uint)((int)puVar7 + 0x13) & 3;
    puVar2 = (uint *)((byte *)((int)puVar7 + 0x13) + -uVar1);
    *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | DAT_800ccee8 >> (3 - uVar1) * 8;
    puVar7[4] = uVar8;
    uVar8 = (uint)((int)puVar7 + 0x17) & 3;
    puVar2 = (uint *)((byte *)((int)puVar7 + 0x17) + -uVar8);
    *puVar2 = *puVar2 & -1 << (uVar8 + 1) * 8 | uVar9 >> (3 - uVar8) * 8;
    puVar7[5] = uVar9;
    uVar8 = (uint)((int)puVar7 + 0x1b) & 3;
    puVar2 = (uint *)((byte *)((int)puVar7 + 0x1b) + -uVar8);
    *puVar2 = *puVar2 & -1 << (uVar8 + 1) * 8 | uVar10 >> (3 - uVar8) * 8;
    puVar7[6] = uVar10;
    *(byte *)puVar5 = 0;
    *(undefined2 *)(puVar5 + 0xb) = 0xffff;
  }
  return;
}


