/* Function: HandleCarWallContact */
/* Address: 8003f108 */

void HandleCarWallContact(int param_1,short param_2,int param_3)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  short *psVar4;
  int iVar5;
  ushort *puVar6;
  short *psVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  piVar9 = *(int **)(param_1 + 0x20);
  if (piVar9 != (int *)0x0) {
    sVar1 = *(short *)(&DAT_800ae9c4 + ((*(int *)(param_1 + 0x18c) >> 0xc) - param_3 >> 10 & 3U) * 2
                      );
    iVar8 = (int)sVar1;
    param_2 = *(short *)((int)piVar9 + iVar8 * 2 + 8) + param_2;
    if ((-1 < *(short *)((int)piVar9 + iVar8 * 2 + 8)) &&
       (*(short *)((int)piVar9 + iVar8 * 2 + 8) = param_2, 10000 < param_2)) {
      iVar5 = *piVar9;
      iVar10 = *(int *)(*(int *)(param_1 + 0x14) + 4);
      if (iVar5 != 0) {
        psVar7 = (short *)(iVar5 + *(int *)(iVar5 + iVar8 * 4 + 4));
        iVar5 = (int)*psVar7;
        while (iVar5 = iVar5 + -1, iVar5 != -1) {
          psVar4 = psVar7 + 1;
          psVar7 = psVar7 + 2;
          psVar4 = (short *)(iVar10 + *psVar4);
          sVar2 = *psVar4;
          *psVar4 = *psVar7;
          *psVar7 = sVar2;
        }
      }
      puVar6 = (ushort *)piVar9[1];
      uVar3 = *puVar6;
      *puVar6 = uVar3 + 1;
      *(short *)((int)puVar6 + ((int)((uint)uVar3 << 0x10) >> 0xf) + 2) = sVar1;
      *(undefined2 *)((int)piVar9 + iVar8 * 2 + 8) = 0xffff;
    }
  }
  return;
}


