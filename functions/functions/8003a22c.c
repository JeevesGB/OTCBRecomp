/* Function: FUN_8003a22c */
/* Address: 8003a22c */

int FUN_8003a22c(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  int iVar17;
  ushort *puVar18;
  undefined1 local_50 [40];
  undefined1 local_28 [40];
  
  puVar18 = (ushort *)local_50;
  iVar7 = 0;
  puVar6 = &DAT_800ccb88;
  puVar5 = local_28;
  iVar3 = 0;
  do {
    iVar3 = iVar3 >> 0x10;
    gte_ldv3c((SVECTOR *)(puVar6 + iVar3 * 4));
    gte_rtpt();
    iVar3 = iVar3 * 4;
    gte_stsxy3c((long *)((int)puVar18 + iVar3));
    gte_stsz3c((long *)(puVar5 + iVar3));
    iVar7 = iVar7 + 3;
    iVar3 = iVar7 * 0x10000;
  } while (iVar7 * 0x10000 >> 0x10 < 9);
  iVar8 = 1;
  uVar10 = *puVar18;
  uVar13 = puVar18[1];
  iVar7 = *(int *)(puVar18 + 0x14);
  iVar2 = 0x10000;
  iVar3 = iVar7;
  uVar11 = uVar10;
  uVar15 = uVar13;
  do {
    uVar14 = *(ushort *)((int)puVar18 + (iVar2 >> 0xe));
    uVar16 = *(ushort *)((int)puVar18 + (iVar2 >> 0xe));
    uVar9 = uVar16;
    uVar12 = uVar11;
    if (((short)uVar14 < (short)uVar10) ||
       (uVar9 = uVar10, uVar12 = uVar16, (short)uVar11 < (short)uVar14)) {
      uVar10 = uVar9;
      uVar11 = uVar12;
    }
    uVar14 = *(ushort *)((int)puVar18 + ((iVar8 << 0x10) >> 0xe) + 2);
    uVar1 = (uint)uVar14;
    uVar16 = uVar15;
    if (((int)(uVar1 << 0x10) < (int)((uint)uVar13 << 0x10)) ||
       (uVar16 = uVar14, uVar14 = uVar13, (int)(short)uVar15 < (int)(uVar1 << 0x10) >> 0x10)) {
      uVar13 = uVar14;
      uVar15 = uVar16;
    }
    iVar4 = *(int *)((int)puVar18 + ((iVar8 << 0x10) >> 0xe) + 0x28);
    iVar2 = iVar4;
    iVar17 = iVar3;
    if ((iVar4 < iVar7) || (iVar2 = iVar7, iVar17 = iVar4, iVar3 < iVar4)) {
      iVar7 = iVar2;
      iVar3 = iVar17;
    }
    iVar8 = iVar8 + 1;
    iVar2 = iVar8 * 0x10000;
  } while (iVar8 * 0x10000 >> 0x10 < 9);
  iVar2 = -1;
  if (((((int)((uint)DAT_1f80003c << 0x10) <= (int)((uint)uVar11 << 0x10)) &&
       (iVar2 = -1, (int)((uint)uVar10 << 0x10) <= (int)((uint)DAT_1f80003a << 0x10))) &&
      (iVar2 = -1, (int)((uint)DAT_1f80003e << 0x10) <= (int)((uint)uVar15 << 0x10))) &&
     (((iVar2 = -1, (short)uVar13 <= DAT_1f800040 && (iVar2 = -1, iVar7 <= (int)(uint)DAT_1f800038))
      && (iVar2 = -1, (int)(uint)JOY_MCD_BAUD <= iVar3)))) {
    iVar2 = iVar7;
  }
  return iVar2;
}


