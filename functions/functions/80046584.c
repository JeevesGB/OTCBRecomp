/* Function: FUN_80046584 */
/* Address: 80046584 */

uint FUN_80046584(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = (int)*(short *)(param_2 + *(short *)(param_2 + 0x154) * 2 + 0x138) -
           (int)*(short *)(param_1 + *(short *)(param_1 + 0x154) * 2 + 0x138);
  if (iVar11 < 0) {
    iVar11 = iVar11 + g_TrackLength;
  }
  if (g_TrackLength / 2 < iVar11) {
    iVar11 = iVar11 - g_TrackLength;
  }
  iVar10 = iVar11;
  if (iVar11 < 0) {
    iVar10 = -iVar11;
  }
  if (0xa0 < iVar10) {
    return 1;
  }
  if (iVar11 < 0) {
    sVar1 = *(short *)(param_1 + 0x156);
    sVar2 = *(short *)(param_2 + 0x154);
  }
  else {
    sVar1 = *(short *)(param_1 + 0x154);
    sVar2 = *(short *)(param_2 + 0x156);
  }
  uVar7 = (uint)sVar2;
  uVar6 = (uint)sVar1;
  iVar10 = (int)*(short *)(param_2 + uVar7 * 2 + 0x138) -
           (int)*(short *)(param_1 + uVar6 * 2 + 0x138);
  if (iVar10 < 0) {
    iVar10 = iVar10 + g_TrackLength;
  }
  if (g_TrackLength / 2 < iVar10) {
    iVar10 = iVar10 - g_TrackLength;
  }
  if (iVar10 < 0) {
    if (-iVar10 < 0x14) goto LAB_800466cc;
LAB_80046774:
    iVar10 = iVar10 * DAT_800cca10 >> 4;
    piVar5 = DAT_1f800050;
  }
  else {
    if (0x13 < iVar10) goto LAB_80046774;
LAB_800466cc:
    iVar9 = param_2 + uVar7 * 8;
    param_2 = param_2 + (uVar7 ^ 1) * 8;
    iVar8 = param_1 + uVar6 * 8;
    param_1 = param_1 + (uVar6 ^ 1) * 8;
    iVar4 = (*(int *)(iVar9 + 0xf8) + *(int *)(param_2 + 0xf8) >> 1) -
            (*(int *)(iVar8 + 0xf8) + *(int *)(param_1 + 0xf8) >> 1) >> 0xc;
    iVar8 = (*(int *)(iVar9 + 0xfc) + *(int *)(param_2 + 0xfc) >> 1) -
            (*(int *)(iVar8 + 0xfc) + *(int *)(param_1 + 0xfc) >> 1) >> 0xc;
    lVar3 = SquareRoot0(iVar4 * iVar4 + iVar8 * iVar8);
    piVar5 = DAT_1f800050;
    *DAT_1f800050 = lVar3;
    if (-1 < iVar10) goto LAB_80046794;
    iVar10 = -lVar3;
  }
  *piVar5 = iVar10;
LAB_80046794:
  if (iVar11 < 0) {
    uVar6 = 2;
    if (*DAT_1f800050 < 0xc9) {
      uVar6 = 4;
    }
  }
  else {
    uVar6 = *DAT_1f800050 >> 0x1f & 2;
  }
  return uVar6;
}


