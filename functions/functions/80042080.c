/* Function: FUN_80042080 */
/* Address: 80042080 */

void FUN_80042080(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = 0;
  if (0 < g_CollisionFlag4) {
    piVar5 = &g_CarObjectList;
    do {
      iVar2 = *piVar5;
      if (g_RaceComplete == 0) {
        iVar3 = *(int *)(iVar2 + 0x28);
        FUN_8003dbfc(iVar3);
        if (((g_RaceMode == 0) && (*(int *)(iVar3 + 0x1c) < 0xfa01)) &&
           ((g_CollisionFlag5 == 0 ||
            ((g_ReplayData == 0 || (*(int *)(*(int *)(iVar2 + 0x24) + 0x18) < g_ReplayData)))))) {
          g_ReplayData = *(int *)(*(int *)(iVar2 + 0x24) + 0x18);
          FUN_8004640c();
        }
        if (g_RaceMode == 2) {
          uVar1 = 0;
          if (*(int *)(iVar2 + 0x20) != 0) {
            uVar1 = FUN_8003f278(*(undefined4 *)(*(int *)(iVar2 + 0x20) + 4));
          }
          if (*(short *)(iVar2 + 0x21e) != 0) {
            uVar1 = uVar1 | 0x10;
          }
          *(ushort *)(*(int *)(iVar2 + 8) + 0x2a) = uVar1;
        }
      }
      *(undefined2 *)(iVar2 + 0x44) = 2;
      *(undefined2 *)(iVar2 + 0x176) = 0xffff;
      *(undefined2 *)(iVar2 + 0x3d0) = 0;
      *(undefined2 *)(iVar2 + 0x1f2) = 0;
      *(undefined2 *)(iVar2 + 0x23e) = 0;
      *(undefined2 *)(iVar2 + 0x240) = 0;
      piVar5 = piVar5 + 1;
      UpdateEngineRPMSound(1,(int)*(short *)(*(int *)(iVar2 + 0x3c) + 2),0,1);
      UpdateEngineRPMSound(5,(int)*(short *)(*(int *)(iVar2 + 0x3c) + 6),0,1);
      FUN_80043848(iVar2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < g_CollisionFlag4);
  }
  return;
}


