/* Function: FUN_80048b38 */
/* Address: 80048b38 */

void FUN_80048b38(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int r0;
  long lVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  int *r1;
  undefined1 local_10 [8];
  
  r1 = (int *)local_10;
  iVar11 = 0;
  iVar14 = 0xd;
  puVar15 = &g_SinCosTable;
  uVar13 = 0xffff8000;
  iVar12 = 0xc;
  puVar10 = &DAT_1f800054;
  puVar9 = &DAT_1f800054;
  do {
    iVar5 = *(int *)(puVar9 + 0x56);
    r0 = *(int *)(puVar9 + 0x3e);
    iVar7 = iVar5;
    if (iVar5 < 0) {
      iVar7 = -iVar5;
    }
    lVar6 = r0;
    gte_Lzc(iVar7,r1);
    uVar8 = iVar14 - *r1;
    if ((int)uVar8 < 0) {
      uVar8 = 0;
    }
    if (lVar6 < 0) {
      r0 = -lVar6;
    }
    gte_Lzc(r0,r1);
    uVar2 = iVar14 - *r1;
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    iVar5 = iVar5 >> (uVar8 & 0x1f);
    uVar4 = puVar15[*puVar10 & 0xfff];
    iVar7 = lVar6 >> (uVar2 & 0x1f);
    if ((int)uVar4 < 0) {
      uVar3 = (int)uVar4 >> 0x10 | uVar13;
    }
    else {
      uVar3 = (int)uVar4 >> 0x10 & 0x7fff;
    }
    uVar1 = uVar4 | uVar13;
    if ((uVar4 & 0x8000) == 0) {
      uVar1 = uVar4 & 0x7fff;
    }
    puVar10 = puVar10 + 1;
    puVar9 = puVar9 + 2;
    iVar11 = iVar11 + 1;
    *(int *)(param_1 + 0x300) =
         ((int)(iVar7 * uVar3) >> (iVar12 - uVar2 & 0x1f)) +
         ((int)(iVar5 * uVar1) >> (iVar12 - uVar8 & 0x1f));
    *(int *)(param_1 + 0x304) =
         ((int)(iVar5 * uVar3) >> (iVar12 - uVar8 & 0x1f)) -
         ((int)(iVar7 * uVar1) >> (iVar12 - uVar2 & 0x1f));
    param_1 = param_1 + 8;
  } while (iVar11 < 4);
  return;
}


