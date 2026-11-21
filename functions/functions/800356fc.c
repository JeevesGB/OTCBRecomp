/* Function: CalcCarTrackOffset */
/* Address: 800356fc */

int CalcCarTrackOffset(int param_1,uint param_2,short param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  uVar10 = (&g_SinCosTable)[param_2 & 0xfff];
  if ((int)uVar10 < 0) {
    uVar11 = (int)uVar10 >> 0x10 | 0xffff8000;
  }
  else {
    uVar11 = (int)uVar10 >> 0x10 & 0x7fff;
  }
  if ((uVar10 & 0x8000) == 0) {
    uVar10 = uVar10 & 0x7fff;
  }
  else {
    uVar10 = uVar10 | 0xffff8000;
  }
  iVar8 = *(int *)(param_1 + 0x50);
  iVar9 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + (int)param_3 * uVar10;
  *(uint *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + (int)param_3 * uVar11;
  iVar2 = iVar8;
  if (iVar8 < 0) {
    iVar2 = -iVar8;
  }
  iVar4 = iVar9;
  if (iVar9 < 0) {
    iVar4 = -iVar9;
  }
  if (iVar2 < iVar4) {
    iVar2 = iVar4;
  }
  lVar1 = Lzc(iVar2);
  uVar6 = 0xe - lVar1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  iVar8 = iVar8 >> (uVar6 & 0x1f);
  iVar9 = iVar9 >> (uVar6 & 0x1f);
  uVar5 = (&g_SinCosTable)[-(int)(short)param_2 & 0xfff];
  uVar7 = 0xc - uVar6;
  if ((int)uVar5 < 0) {
    uVar3 = (int)uVar5 >> 0x10 | 0xffff8000;
  }
  else {
    uVar3 = (int)uVar5 >> 0x10 & 0x7fff;
  }
  if ((uVar5 & 0x8000) == 0) {
    uVar5 = uVar5 & 0x7fff;
  }
  else {
    uVar5 = uVar5 | 0xffff8000;
  }
  iVar4 = (int)(uVar5 * iVar9 + uVar3 * iVar8) >> (uVar7 & 0x1f);
  iVar2 = (int)(uVar3 * iVar9 - uVar5 * iVar8) >> (uVar7 & 0x1f);
  if (iVar2 < 1) {
    iVar9 = -iVar2 >> 5;
    iVar8 = iVar9;
    if (iVar9 < 500) {
      iVar8 = 500;
    }
    iVar2 = iVar2 * -6 >> 4;
    if (iVar4 < 0) {
      iVar4 = iVar4 + iVar2;
      if (0 < iVar4) {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = iVar4 - iVar2;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
    }
    iVar8 = iVar8 >> (uVar6 & 0x1f);
    iVar4 = iVar4 >> (uVar6 & 0x1f);
    *(int *)(param_1 + 0x50) = (int)(iVar8 * uVar10 + iVar4 * uVar11) >> (uVar7 & 0x1f);
    *(int *)(param_1 + 0x58) = (int)(iVar8 * uVar11 - iVar4 * uVar10) >> (uVar7 & 0x1f);
  }
  else {
    iVar9 = 0;
  }
  return iVar9;
}


