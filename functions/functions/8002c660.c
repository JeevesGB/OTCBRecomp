/* Function: UpdateRaceState */
/* Address: 8002c660 */

void UpdateRaceState(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  UpdateRaceProgress();
  if ((g_CarOnTrack != 0) && ((g_RacePad1 & 0x800) != 0)) {
    uVar2 = FlipDisplayAndSync();
    iVar1 = g_CollisionFlag4;
    switch(uVar2) {
    case 1:
      g_PhysicsFlag2 = 0xffff;
      g_RaceActive = 0xffff;
      g_RacePosition = 0xffff;
      break;
    case 2:
      g_PhysicsFlag2 = 0xffff;
      g_RaceActive = 0xffff;
      break;
    case 3:
      g_RaceRetired = 0xffff;
    case 4:
    case 5:
      g_PhysicsFlag2 = 0xffff;
    }
    iVar4 = 0;
    if (0 < g_CollisionFlag4) {
      piVar3 = &g_CarObjectList;
      do {
        *(ushort *)(*(int *)(*piVar3 + 0x28) + 0x4c) =
             *(ushort *)(*(int *)(*piVar3 + 0x28) + 0x4c) | 0x100;
        iVar4 = iVar4 + 1;
        *(ushort *)(*(int *)(*piVar3 + 0x28) + 0x4e) =
             *(ushort *)(*(int *)(*piVar3 + 0x28) + 0x4e) | 0x100;
        piVar3 = piVar3 + 1;
      } while (iVar4 < iVar1);
    }
  }
  return;
}


