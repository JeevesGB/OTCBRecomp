/* Function: FUN_800487e0 */
/* Address: 800487e0 */

void FUN_800487e0(int param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  
  iVar11 = 0;
  if (*(short *)(param_1 + 0x3d0) != 0) {
    iVar11 = -1;
  }
  iVar2 = (int)*(short *)(g_CarTrackData + 0x10);
  iVar8 = iVar2;
  if (*(short *)(param_1 + 0x1ec) == 0) {
    iVar3 = *(int *)(param_1 + 0x198);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if ((0x14000 < iVar3) && (0x1e < *(short *)(param_1 + 0x210))) {
      iVar8 = iVar2 * 5 >> 3;
    }
  }
  iVar7 = 0;
  puVar10 = &DAT_1f800054;
  puVar9 = &DAT_1f800054;
  iVar3 = param_1;
  do {
    iVar6 = iVar2;
    if (iVar7 < 2) {
      iVar6 = iVar8;
    }
    psVar1 = (short *)(iVar3 + 800);
    uVar5 = (uint)*(short *)(iVar3 + 900);
    if ((((iVar11 != 0) && ((int)uVar5 < 3000)) && ((int)*(short *)(param_1 + 0x3dc) < (int)uVar5))
       && (0 < (short)puVar9[0x5e])) {
      uVar5 = (int)*(short *)(param_1 + 0x3dc);
    }
    iVar4 = ((int)uVar5 >> 8) + 1;
    if (0x10 < iVar4) {
      iVar4 = 0x10;
    }
    puVar9 = puVar9 + 1;
    iVar3 = iVar3 + 2;
    iVar7 = iVar7 + 1;
    *(int *)(puVar10 + 0x2a) =
         (iVar6 * *psVar1 >> 4) *
         ((int)*(short *)(&DAT_800aec04 + ((int)uVar5 >> 8) * 2) +
         ((int)(((int)*(short *)(&DAT_800aec04 + iVar4 * 2) -
                (int)*(short *)(&DAT_800aec04 + ((int)uVar5 >> 8) * 2)) * (uVar5 & 0xff)) >> 8)) >>
         0xc;
    puVar10 = puVar10 + 2;
  } while (iVar7 < 4);
  return;
}


