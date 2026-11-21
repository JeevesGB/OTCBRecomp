/* Function: FUN_80042ec0 */
/* Address: 80042ec0 */

undefined4 FUN_80042ec0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = *(int *)(param_1 + 0x60);
  iVar6 = iVar4 >> 6;
  if (iVar4 < 0x25080) {
    return 0;
  }
  iVar1 = (iVar6 * iVar6 + -0x19000) / 12000 + (DAT_800cca10 >> 1);
  iVar7 = iVar1 / DAT_800cca10;
  if (DAT_800cca10 == 0) {
    trap(0x1c00);
  }
  if ((DAT_800cca10 == -1) && (iVar1 == -0x80000000)) {
    trap(0x1800);
  }
  iVar1 = 0;
  if (0 < iVar7) {
    iVar5 = 0;
    do {
      iVar3 = ((int)((uint)*(ushort *)(param_1 + 0x15c) << 0x10) >> 0x14) + iVar1;
      if (g_TrackSegmentCount < iVar3) {
        iVar3 = iVar3 - g_TrackSegmentCount;
      }
      uVar2 = (uint)*(ushort *)(iVar3 * 2 + DAT_800ccb80);
      if ((uVar2 != 0) &&
         (iVar3 = (int)(uVar2 * (int)*(short *)(*(int *)(param_1 + 0x3c) + 6)) >> 8,
         iVar3 <= iVar4 >> 0xc)) {
        if (iVar5 <= (iVar6 + iVar3 * -0x40) / 12000) {
          return 0xffffffff;
        }
        return 0;
      }
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + DAT_800cca10;
    } while (iVar1 < iVar7);
  }
  return 0;
}


