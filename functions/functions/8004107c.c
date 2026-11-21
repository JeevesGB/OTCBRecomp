/* Function: UpdateCarInput */
/* Address: 8004107c */

void UpdateCarInput(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *g_CarPhysicsParams;
  for (iVar2 = g_CarPositionFlag; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    iVar1 = -1;
    if (iVar2 != param_1) {
      iVar1 = GetCarVisibility(iVar2);
    }
    if ((iVar1 < 0) || (iVar3 <= iVar1)) {
      *(uint *)(iVar2 + 0x40) = *(uint *)(iVar2 + 0x40) & 0xfffffffd;
    }
    else {
      *(uint *)(iVar2 + 0x40) = *(uint *)(iVar2 + 0x40) | 2;
      UpdateCarControls(*(undefined4 *)(iVar2 + 0x14));
    }
  }
  return;
}


