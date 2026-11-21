/* Function: FUN_8003ddc0 */
/* Address: 8003ddc0 */

void FUN_8003ddc0(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort *puVar14;
  int iVar15;
  short *psVar16;
  ushort *puVar17;
  ushort *puVar18;
  
  puVar18 = *(ushort **)(param_1 + 8);
  if (-1 < param_2) {
    uVar13 = *puVar18;
    *(int *)puVar18 = param_2;
    puVar14 = (ushort *)(*(int *)(param_1 + 0x18) + 4);
    iVar10 = *(int *)((int)puVar18 + ((int)((uint)uVar13 << 0x10) >> 0xe) + 0x14);
    iVar15 = *(short *)(*(int *)(param_1 + 0x18) + 2) * 0x10;
    iVar4 = *(int *)(puVar18 + param_2 * 2 + 10);
    while (iVar15 = iVar15 + -1, iVar15 != -1) {
      uVar13 = 0;
      uVar5 = 0;
      do {
        if ((*puVar14 & 0x7fff) == (*(ushort *)((int)puVar18 + uVar5 * 2 + iVar10) & 0x7fff)) {
          *puVar14 = (*puVar14 & 0x8000) + (*(ushort *)((int)puVar18 + uVar5 * 2 + iVar4) & 0x7fff);
          break;
        }
        uVar13 = uVar13 + 1;
        uVar5 = (uint)uVar13;
      } while (uVar13 < 0x20);
      puVar14 = puVar14 + 1;
    }
    iVar15 = *(short *)(*(int *)(param_1 + 0x1c) + 2) * 0x10;
    puVar14 = (ushort *)(*(int *)(param_1 + 0x1c) + 4);
    while (iVar15 = iVar15 + -1, iVar15 != -1) {
      uVar13 = 0;
      uVar5 = 0;
      do {
        if ((*puVar14 & 0x7fff) == (*(ushort *)((int)puVar18 + uVar5 * 2 + iVar10) & 0x7fff)) {
          *puVar14 = (*puVar14 & 0x8000) + (*(ushort *)((int)puVar18 + uVar5 * 2 + iVar4) & 0x7fff);
          break;
        }
        uVar13 = uVar13 + 1;
        uVar5 = (uint)uVar13;
      } while (uVar13 < 0x20);
      puVar14 = puVar14 + 1;
    }
    puVar14 = (ushort *)((int)puVar18 + *(int *)(puVar18 + 6));
    iVar15 = (int)(short)*puVar14;
joined_r0x8003df40:
    iVar15 = iVar15 + -1;
    if (iVar15 != -1) {
      puVar14 = puVar14 + 1;
      uVar13 = 0;
      uVar5 = 0;
      do {
        if ((*puVar14 & 0x7fff) == (*(ushort *)((int)puVar18 + uVar5 * 2 + iVar10) & 0x7fff)) {
          *puVar14 = (*puVar14 & 0x8000) + (*(ushort *)((int)puVar18 + uVar5 * 2 + iVar4) & 0x7fff);
          break;
        }
        uVar13 = uVar13 + 1;
        uVar5 = (uint)uVar13;
      } while (uVar13 < 0x20);
      goto joined_r0x8003df40;
    }
    puVar14 = (ushort *)(*(int *)(param_1 + 0x10) + 0x20);
    for (iVar15 = *(int *)(param_1 + 4) * 0x10 + -0x11; iVar15 != -1; iVar15 = iVar15 + -1) {
      uVar13 = 0;
      uVar5 = 0;
      do {
        uVar13 = uVar13 + 1;
        if ((*puVar14 & 0x7fff) == (*(ushort *)((int)puVar18 + uVar5 * 2 + iVar10) & 0x7fff)) {
          *puVar14 = (*puVar14 & 0x8000) + (*(ushort *)((int)puVar18 + uVar5 * 2 + iVar4) & 0x7fff);
          break;
        }
        uVar5 = (uint)uVar13;
      } while (uVar13 < 0x20);
      puVar14 = puVar14 + 1;
    }
  }
  uVar13 = *(ushort *)(param_1 + 4);
  iVar4 = (int)((uint)uVar13 << 0x14) >> 0x10;
  memcpy(*(uchar **)(param_1 + 0x14),*(uchar **)(param_1 + 0x10),iVar4 << 1);
  psVar16 = *(short **)(param_1 + 0x24);
  sVar1 = *psVar16;
  sVar2 = psVar16[1];
  sVar3 = psVar16[2];
  puVar17 = *(ushort **)(param_1 + 0x10);
  iVar15 = iVar4 + -1;
  puVar14 = puVar17;
  if (iVar4 != 0) {
    do {
      uVar12 = *puVar14;
      uVar5 = (uint)uVar12;
      puVar14 = puVar14 + 1;
      if ((uVar12 & 0x7fff) != 0) {
        iVar4 = (uVar5 & 0x1f) + (int)sVar1 / 10;
        if (iVar4 * 0x10000 < 0) {
          iVar4 = 0;
        }
        iVar10 = ((int)(uVar5 << 0x10) >> 0x15 & 0x1fU) + (int)sVar3 / 10;
        if (0x1f < (short)iVar4) {
          iVar4 = 0x1f;
        }
        iVar7 = iVar10 * 0x10000;
        if (iVar10 * 0x10000 < 0) {
          iVar10 = 0;
          iVar7 = 0;
        }
        iVar8 = ((int)(uVar5 << 0x10) >> 0x1a & 0x1fU) + (int)sVar2 / 10;
        if (0x1f < iVar7 >> 0x10) {
          iVar10 = 0x1f;
        }
        iVar7 = iVar8 * 0x10000;
        if (iVar8 * 0x10000 < 0) {
          iVar8 = 0;
          iVar7 = 0;
        }
        if (0x1f < iVar7 >> 0x10) {
          iVar8 = 0x1f;
        }
        uVar5 = iVar4 + (uVar5 & 0x8000) + iVar10 * 0x20 + iVar8 * 0x400;
        uVar12 = (ushort)uVar5;
        if ((uVar5 & 0xffff) == 0) {
          uVar12 = uVar12 + 1;
        }
      }
      *puVar17 = uVar12;
      iVar15 = iVar15 + -1;
      puVar17 = puVar17 + 1;
    } while (iVar15 != -1);
  }
  sVar1 = psVar16[3];
  sVar2 = psVar16[4];
  sVar3 = psVar16[5];
  puVar14 = *(ushort **)(param_1 + 0x14);
  iVar4 = ((int)((uint)uVar13 << 0x14) >> 0x10) + -1;
  iVar15 = *(int *)(puVar18 + 6);
  uVar5 = (uint)*(short *)((int)puVar18 + iVar15);
  if (iVar4 != -1) {
    puVar17 = puVar14;
    do {
      uVar11 = 0;
      if (0 < (int)uVar5) {
        uVar6 = 0;
        do {
          if ((*puVar14 & 0x7fff) == (int)((short *)((int)puVar18 + iVar15))[uVar6 + 1]) break;
          uVar11 = uVar11 + 1;
          uVar6 = uVar11 & 0xffff;
        } while ((int)(uVar11 & 0xffff) < (int)uVar5);
      }
      if ((uVar11 & 0xffff) == uVar5) {
        uVar13 = *puVar14;
        uVar11 = (uint)uVar13;
        if ((uVar13 & 0x7fff) != 0) {
          iVar10 = (uVar11 & 0x1f) + (int)sVar1 / 10;
          if (iVar10 * 0x10000 < 0) {
            iVar10 = 0;
          }
          iVar7 = ((int)(uVar11 << 0x10) >> 0x15 & 0x1fU) + (int)sVar3 / 10;
          if (0x1f < (short)iVar10) {
            iVar10 = 0x1f;
          }
          iVar8 = iVar7 * 0x10000;
          if (iVar7 * 0x10000 < 0) {
            iVar7 = 0;
            iVar8 = 0;
          }
          iVar9 = ((int)(uVar11 << 0x10) >> 0x1a & 0x1fU) + (int)sVar2 / 10;
          if (0x1f < iVar8 >> 0x10) {
            iVar7 = 0x1f;
          }
          iVar8 = iVar9 * 0x10000;
          if (iVar9 * 0x10000 < 0) {
            iVar9 = 0;
            iVar8 = 0;
          }
          if (0x1f < iVar8 >> 0x10) {
            iVar9 = 0x1f;
          }
          uVar11 = iVar10 + (uVar11 & 0x8000) + iVar7 * 0x20 + iVar9 * 0x400;
          uVar13 = (ushort)uVar11;
          if ((uVar11 & 0xffff) == 0) {
            uVar13 = uVar13 + 1;
          }
        }
      }
      else {
        uVar13 = *puVar14;
      }
      puVar14 = puVar14 + 1;
      *puVar17 = uVar13;
      iVar4 = iVar4 + -1;
      puVar17 = puVar17 + 1;
    } while (iVar4 != -1);
  }
  return;
}


