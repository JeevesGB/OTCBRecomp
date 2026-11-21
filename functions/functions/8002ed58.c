/* Function: FUN_8002ed58 */
/* Address: 8002ed58 */

void FUN_8002ed58(uint param_1,int param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = param_1;
  if ((int)param_1 < 0) {
    uVar1 = param_1 + 0xf;
  }
  iVar2 = (int)uVar1 >> 4;
  iVar3 = iVar2 + -1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + g_TrackSegmentCount;
  }
  iVar5 = iVar2 + 1;
  iVar6 = iVar2 + 2;
  if (g_TrackSegmentCount <= iVar5) {
    iVar5 = iVar5 - g_TrackSegmentCount;
  }
  if (g_TrackSegmentCount <= iVar6) {
    iVar6 = iVar6 - g_TrackSegmentCount;
  }
  uVar1 = (int)*(short *)(iVar5 * 2 + DAT_800cca18) - (int)*(short *)(iVar2 * 2 + DAT_800cca18);
  if ((uVar1 & 0x800) == 0) {
    uVar1 = uVar1 & 0x7ff;
  }
  else {
    uVar1 = uVar1 | 0xfffff800;
  }
  uVar1 = (&g_SinCosTable)
          [(int)*(short *)(iVar2 * 2 + DAT_800cca18) + ((int)(uVar1 * (param_1 & 0xf)) >> 4) & 0xfff
          ];
  if ((int)uVar1 < 0) {
    uVar7 = (int)uVar1 >> 0x10 | 0xffff8000;
  }
  else {
    uVar7 = (int)uVar1 >> 0x10 & 0x7fff;
  }
  if ((uVar1 & 0x8000) == 0) {
    uVar1 = uVar1 & 0x7fff;
  }
  else {
    uVar1 = uVar1 | 0xffff8000;
  }
  iVar4 = (param_1 & 0xf) * 0x10;
  *param_3 = *(int *)(iVar3 * 0xc + g_TrackSegmentArray) * *(int *)(&DAT_800b5394 + iVar4) +
             *(int *)(iVar2 * 0xc + g_TrackSegmentArray) * *(int *)(&DAT_800b5398 + iVar4) +
             *(int *)(iVar5 * 0xc + g_TrackSegmentArray) * *(int *)(&DAT_800b539c + iVar4) +
             *(int *)(iVar6 * 0xc + g_TrackSegmentArray) * *(int *)(&DAT_800b53a0 + iVar4) +
             uVar1 * param_2;
  *param_4 = *(int *)(iVar3 * 0xc + g_TrackSegmentArray + 8) * *(int *)(&DAT_800b5394 + iVar4) +
             *(int *)(iVar2 * 0xc + g_TrackSegmentArray + 8) * *(int *)(&DAT_800b5398 + iVar4) +
             *(int *)(iVar5 * 0xc + g_TrackSegmentArray + 8) * *(int *)(&DAT_800b539c + iVar4) +
             *(int *)(iVar6 * 0xc + g_TrackSegmentArray + 8) * *(int *)(&DAT_800b53a0 + iVar4) +
             uVar7 * param_2;
  return;
}


