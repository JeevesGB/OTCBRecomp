/* Function: FUN_80048964 */
/* Address: 80048964 */

/* WARNING: Removing unreachable block (ram,0x80048ab0) */

void FUN_80048964(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar10 = 0;
  if ((*(short *)(param_1 + 0x1f8) == 0) && (*(short *)(param_1 + 0x5c) < 0x28)) {
    iVar10 = -1;
  }
  iVar9 = 0x23;
  if (*(short *)(param_1 + 0x1ec) == 2) {
    iVar9 = 0x2d;
  }
  iVar7 = 0;
  puVar5 = &DAT_1f800054;
  puVar6 = &DAT_1f800054;
  do {
    iVar4 = *(int *)(puVar5 + 0x4e);
    iVar3 = (int)(short)puVar6[0x3a];
    iVar8 = *(int *)(puVar5 + 0x32);
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = -iVar4;
    }
    if (((puVar6[0x5e] != 0) && (iVar10 != 0)) && (*(short *)(param_1 + iVar7 * 2 + 0x37c) == 0)) {
      iVar2 = (iVar2 >> 4) * iVar9;
    }
    iVar2 = FUN_8005430c(iVar2,iVar8);
    if (iVar2 < 0x1000) {
      iVar2 = SquareRoot0((iVar2 + 0x1000) * (0x1000 - iVar2));
      if (iVar3 < 0) {
        iVar2 = -iVar2;
        bVar1 = iVar3 < iVar2;
      }
      else {
        bVar1 = iVar2 < iVar3;
      }
      if (bVar1) {
        iVar3 = iVar2;
      }
    }
    else {
      iVar11 = 0x1000000 / iVar2;
      if (iVar2 == 0) {
        trap(0x1c00);
      }
      if (iVar11 < 1) {
        iVar11 = 1;
      }
      iVar3 = 0;
      iVar4 = (iVar4 >> 6) * iVar11 >> 6;
    }
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + 1;
    *(int *)(puVar5 + 0x56) = iVar4;
    *(int *)(puVar5 + 0x3e) = (iVar8 >> 6) * iVar3 + 0x20 >> 6;
    puVar5 = puVar5 + 2;
  } while (iVar7 < 4);
  return;
}


