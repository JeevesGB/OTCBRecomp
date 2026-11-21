/* Function: FUN_8004d708 */
/* Address: 8004d708 */

void FUN_8004d708(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = 0;
  if (0 < g_CollisionFlag3) {
    piVar7 = &DAT_800ccca0;
    do {
      iVar1 = (int)*(short *)(param_1 + 0x10);
      iVar4 = *(int *)(*piVar7 + 0x74);
      if (iVar1 == 0) {
        trap(0x1c00);
      }
      if ((iVar1 == -1) && (iVar4 == -0x80000000)) {
        trap(0x1800);
      }
      iVar3 = *(int *)(*piVar7 + 0x7c);
      iVar2 = (int)*(short *)(param_1 + 0x12);
      if (iVar2 == 0) {
        trap(0x1c00);
      }
      if ((iVar2 == -1) && (iVar3 == -0x80000000)) {
        trap(0x1800);
      }
      uVar5 = 2;
      if ((g_RaceMode != 2) || (0 < iVar6)) {
        uVar5 = 1;
      }
      piVar7 = piVar7 + 1;
      DrawSpriteEx(g_TrackConfigBuffer + 0x208,
                   (param_2 + (iVar4 / iVar1 + *(int *)(param_1 + 8) + 0x800 >> 0xc)) * 0x10000 >>
                   0x10,(param_3 + (iVar3 / iVar2 + *(int *)(param_1 + 0xc) + 0x800 >> 0xc)) *
                        0x10000 >> 0x10,g_RaceOTPtr2 + 8,uVar5,0xffffffff,0xffffffff);
      iVar6 = iVar6 + 1;
    } while (iVar6 < g_CollisionFlag3);
  }
  return;
}


