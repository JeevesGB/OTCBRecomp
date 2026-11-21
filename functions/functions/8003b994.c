/* Function: FUN_8003b994 */
/* Address: 8003b994 */

void FUN_8003b994(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined2 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 local_50;
  int local_4c [3];
  int local_40 [14];
  
  uVar10 = *(uint *)((int)&g_SinCosTable + (*(int *)(param_1 + 0x18c) >> 10 & 0x3ffcU));
  iVar4 = *(int *)(param_1 + 0x10);
  if ((int)uVar10 < 0) {
    uVar14 = (int)uVar10 >> 0x10 | 0xffff8000;
  }
  else {
    uVar14 = (int)uVar10 >> 0x10 & 0x7fff;
  }
  if ((uVar10 & 0x8000) == 0) {
    uVar10 = uVar10 & 0x7fff;
  }
  else {
    uVar10 = uVar10 | 0xffff8000;
  }
  iVar12 = 0;
  puVar8 = &local_50;
  iVar17 = *(int *)(param_1 + 0x68);
  iVar16 = *(int *)(param_1 + 0x70);
  iVar9 = param_1;
  iVar15 = param_1;
  do {
    iVar7 = (int)*(short *)(iVar4 + 4);
    iVar5 = (int)*(short *)(iVar4 + 6);
    *(uint *)(iVar9 + 0xf8) = iVar17 + iVar7 * uVar14 + iVar5 * uVar10;
    *(uint *)(iVar9 + 0xfc) = (iVar16 - iVar7 * uVar10) + iVar5 * uVar14;
    puVar8[1] = *(int *)(iVar9 + 0xf8) >> 0xc;
    puVar8[2] = *(int *)(iVar9 + 0xfc) >> 0xc;
    puVar8[4] = (int)*(short *)(iVar15 + 0x138);
    if (iVar7 < 0) {
      iVar7 = iVar7 + -0x1e;
    }
    else {
      iVar7 = iVar7 + 0x1e;
    }
    if (iVar5 < 0) {
      iVar5 = iVar5 + -0x1e;
    }
    else {
      iVar5 = iVar5 + 0x1e;
    }
    iVar15 = iVar15 + 2;
    puVar8 = puVar8 + 4;
    iVar4 = iVar4 + 4;
    iVar12 = iVar12 + 1;
    *(uint *)(iVar9 + 0x118) = iVar17 + iVar7 * uVar14 + iVar5 * uVar10;
    *(uint *)(iVar9 + 0x11c) = (iVar16 - iVar7 * uVar10) + iVar5 * uVar14;
    iVar9 = iVar9 + 8;
  } while (iVar12 < 4);
  local_50 = 4;
  FUN_8002dfcc(&local_50);
  iVar4 = g_TrackLength;
  iVar5 = -0x7fffffff;
  iVar17 = 0x7fffffff;
  iVar7 = 0;
  puVar8 = &local_50;
  iVar12 = (int)*(short *)(param_1 + 0x15c);
  iVar13 = g_TrackLength >> 1;
  iVar9 = param_1;
  iVar15 = param_1;
  iVar16 = iVar12;
  do {
    iVar3 = puVar8[3];
    *(int *)(iVar15 + 0x140) = iVar3;
    sVar1 = *(short *)(puVar8 + 4);
    *(short *)(iVar9 + 0x138) = sVar1;
    iVar6 = (int)sVar1;
    uVar11 = (undefined2)iVar7;
    if (iVar5 < iVar3) {
      *(undefined2 *)(param_1 + 0x150) = uVar11;
      iVar5 = iVar3;
    }
    iVar2 = iVar6 - iVar16;
    if (iVar3 < iVar17) {
      *(undefined2 *)(param_1 + 0x152) = uVar11;
      iVar17 = iVar3;
    }
    if (iVar2 < 0) {
      iVar2 = iVar2 + iVar4;
    }
    iVar3 = iVar6 - iVar12;
    if (iVar2 < iVar13) {
      *(undefined2 *)(param_1 + 0x154) = uVar11;
      iVar16 = iVar6;
    }
    if (iVar3 < 0) {
      iVar3 = iVar3 + iVar4;
    }
    if (iVar13 < iVar3) {
      *(undefined2 *)(param_1 + 0x156) = uVar11;
      iVar12 = iVar6;
    }
    iVar9 = iVar9 + 2;
    puVar8 = puVar8 + 4;
    iVar7 = iVar7 + 1;
    iVar15 = iVar15 + 4;
  } while (iVar7 < 4);
  return;
}


