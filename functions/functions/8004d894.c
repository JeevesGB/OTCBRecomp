/* Function: FUN_8004d894 */
/* Address: 8004d894 */

void FUN_8004d894(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar3 = g_TrackSurface * 0x14;
  if (*(int *)(&DAT_800aee74 + iVar3) != 0) {
    param_1 = param_1 + *(short *)(&DAT_800aee78 + iVar3);
    param_2 = param_2 + *(short *)(&DAT_800aee7a + iVar3);
    DrawSprite(&DAT_800ccf28,param_1,param_2,g_RaceOTPtr2 + 0xc);
    iVar6 = 0;
    if (0 < g_CollisionFlag4) {
      piVar7 = &g_CarObjectList;
      do {
        iVar1 = (int)*(short *)(&DAT_800aee84 + iVar3);
        iVar5 = *(int *)(*piVar7 + 0x74);
        if (iVar1 == 0) {
          trap(0x1c00);
        }
        if ((iVar1 == -1) && (iVar5 == -0x80000000)) {
          trap(0x1800);
        }
        iVar4 = *(int *)(*piVar7 + 0x7c);
        iVar2 = (int)*(short *)(&DAT_800aee86 + iVar3);
        if (iVar2 == 0) {
          trap(0x1c00);
        }
        if ((iVar2 == -1) && (iVar4 == -0x80000000)) {
          trap(0x1800);
        }
        piVar7 = piVar7 + 1;
        DrawSpriteEx(g_TrackConfigBuffer + 0x208,
                     (param_1 + (iVar5 / iVar1 + *(int *)(&DAT_800aee7c + iVar3) + 0x800 >> 0xc)) *
                     0x10000 >> 0x10,
                     (param_2 + (iVar4 / iVar2 + *(int *)(&DAT_800aee80 + iVar3) + 0x800 >> 0xc)) *
                     0x10000 >> 0x10,g_RaceOTPtr2 + 8,(iVar6 << 0x11) >> 0x10,0xffffffff,0xffffffff)
        ;
        iVar6 = iVar6 + 1;
      } while (iVar6 < g_CollisionFlag4);
    }
    if (g_CollisionFlag5 != 0) {
      iVar6 = (int)*(short *)(&DAT_800aee84 + iVar3);
      if (iVar6 == 0) {
        trap(0x1c00);
      }
      if ((iVar6 == -1) && (*(int *)(g_CollisionFlag5 + 0x74) == -0x80000000)) {
        trap(0x1800);
      }
      iVar1 = (int)*(short *)(&DAT_800aee86 + iVar3);
      if (iVar1 == 0) {
        trap(0x1c00);
      }
      if ((iVar1 == -1) && (*(int *)(g_CollisionFlag5 + 0x7c) == -0x80000000)) {
        trap(0x1800);
      }
      DrawSpriteEx(g_TrackConfigBuffer + 0x208,
                   (param_1 +
                   (*(int *)(g_CollisionFlag5 + 0x74) / iVar6 + *(int *)(&DAT_800aee7c + iVar3) +
                    0x800 >> 0xc)) * 0x10000 >> 0x10,
                   (param_2 +
                   (*(int *)(g_CollisionFlag5 + 0x7c) / iVar1 + *(int *)(&DAT_800aee80 + iVar3) +
                    0x800 >> 0xc)) * 0x10000 >> 0x10,g_RaceOTPtr2 + 8,3,0xffffffff,0xffffffff);
    }
    FUN_8004d708(&DAT_800aee74 + iVar3,param_1,param_2);
  }
  return;
}


