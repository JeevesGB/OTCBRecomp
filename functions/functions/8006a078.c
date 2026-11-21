/* Function: IsChampionshipComplete */
/* Address: 8006a078 */

undefined4 IsChampionshipComplete(undefined4 param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  
  uVar1 = GetReplayCarIndex(*(undefined1 *)(param_2 + 0x11));
  puVar8 = &g_CarDisplayObjects + (uVar1 & 0xff) * 0xb0;
  piVar2 = (int *)GetReplayLapData(*(undefined1 *)(param_2 + 0x11),*puVar8);
  iVar6 = 0;
  iVar7 = *piVar2;
  iVar5 = 0;
  puVar3 = puVar8;
  if (iVar7 != 0) {
    do {
      if (puVar3[1] != '\0') {
        iVar6 = iVar6 + 1;
      }
      iVar5 = iVar5 + 1;
      puVar3 = puVar8 + iVar5;
    } while (iVar5 != iVar7);
  }
  uVar4 = 0xffffffff;
  if (iVar6 != iVar7) {
    uVar4 = 0;
  }
  return uVar4;
}


