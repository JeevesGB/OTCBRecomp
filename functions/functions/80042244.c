/* Function: UpdatePadInput */
/* Address: 80042244 */

void UpdatePadInput(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (((g_RaceMode == 2) && (g_RaceComplete == 0)) && (iVar3 = 0, 0 < g_CollisionFlag4)) {
    piVar4 = &g_CarObjectList;
    do {
      iVar2 = *piVar4;
      if (*(short *)(iVar2 + 0x44) == 1) {
        uVar1 = 0;
        if (*(int *)(iVar2 + 0x20) != 0) {
          uVar1 = FUN_8003f278(*(undefined4 *)(*(int *)(iVar2 + 0x20) + 4));
        }
        if (*(short *)(iVar2 + 0x21e) != 0) {
          uVar1 = uVar1 | 0x10;
        }
        *(ushort *)(*(int *)(iVar2 + 8) + 0x2a) = uVar1;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < g_CollisionFlag4);
  }
  return;
}


