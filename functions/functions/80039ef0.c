/* Function: GetCarTrackDistance */
/* Address: 80039ef0 */

int GetCarTrackDistance(int param_1)

{
  uint uVar1;
  SVECTOR *r0;
  int iVar2;
  long *r0_00;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  int *r0_01;
  undefined1 local_40 [64];
  
  r0_01 = (int *)local_40;
  r0 = (SVECTOR *)(DAT_800ccbd0 + param_1 * 0x20);
  gte_ldv3c(r0);
  gte_rtpt();
  r0_00 = (long *)((int)r0_01 + 0x20);
  gte_stsxy3c(r0_00);
  gte_ldv0(r0 + 3);
  gte_rtps();
  gte_stsxy((long *)((int)r0_01 + 0x2c));
  gte_stsz4c(r0_01);
  gte_ldv3c((SVECTOR *)0x800ae934);
  gte_rtpt();
  gte_stsxy3c((long *)((int)r0_01 + 0x30));
  gte_ldv0((SVECTOR *)0x800ae94c);
  gte_rtps();
  gte_stsxy((long *)((int)r0_01 + 0x3c));
  gte_stsz4c((long *)((int)r0_01 + 0x10));
  iVar6 = 1;
  uVar9 = *(ushort *)(r0_01 + 8);
  uVar13 = *(ushort *)((int)r0_01 + 0x22);
  iVar7 = *r0_01;
  iVar3 = 0x10000;
  iVar2 = iVar7;
  uVar10 = uVar9;
  uVar15 = uVar13;
  do {
    puVar4 = (ushort *)((int)r0_00 + (iVar3 >> 0xe));
    uVar14 = *puVar4;
    uVar16 = *puVar4;
    uVar8 = uVar16;
    uVar11 = uVar10;
    if (((short)uVar14 < (short)uVar9) ||
       (uVar8 = uVar9, uVar11 = uVar16, (short)uVar10 < (short)uVar14)) {
      uVar9 = uVar8;
      uVar10 = uVar11;
    }
    uVar14 = *(ushort *)((int)r0_00 + ((iVar6 << 0x10) >> 0xe) + 2);
    uVar1 = (uint)uVar14;
    uVar16 = uVar15;
    if (((int)(uVar1 << 0x10) < (int)((uint)uVar13 << 0x10)) ||
       (uVar16 = uVar14, uVar14 = uVar13, (int)(short)uVar15 < (int)(uVar1 << 0x10) >> 0x10)) {
      uVar13 = uVar14;
      uVar15 = uVar16;
    }
    iVar5 = *(int *)((int)r0_01 + ((iVar6 << 0x10) >> 0xe));
    iVar3 = iVar5;
    iVar12 = iVar2;
    if ((iVar5 < iVar7) || (iVar3 = iVar7, iVar12 = iVar5, iVar2 < iVar5)) {
      iVar7 = iVar3;
      iVar2 = iVar12;
    }
    iVar6 = iVar6 + 1;
    iVar3 = iVar6 * 0x10000;
  } while (iVar6 * 0x10000 >> 0x10 < 8);
  iVar2 = -1;
  if (((((int)((uint)DAT_1f80003c << 0x10) <= (int)((uint)uVar10 << 0x10)) &&
       (iVar2 = -1, (int)((uint)uVar9 << 0x10) <= (int)((uint)DAT_1f80003a << 0x10))) &&
      (iVar2 = -1, (int)((uint)DAT_1f80003e << 0x10) <= (int)((uint)uVar15 << 0x10))) &&
     ((iVar2 = -1, (short)uVar13 <= DAT_1f800040 && (iVar2 = -1, iVar7 <= (int)(uint)DAT_1f800038)))
     ) {
    iVar2 = iVar7 * g_GTEMaxVal;
  }
  return iVar2;
}


