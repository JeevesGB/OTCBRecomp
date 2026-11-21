/* Function: FUN_8003c7dc */
/* Address: 8003c7dc */

uint FUN_8003c7dc(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = ((int)param_1 >> 4) + 1;
  if (g_TrackSegmentCount <= iVar3) {
    iVar3 = iVar3 - g_TrackSegmentCount;
  }
  iVar2 = (int)*(short *)(((int)param_1 >> 4) * 2 + DAT_800cca18);
  uVar1 = *(short *)(iVar3 * 2 + DAT_800cca18) - iVar2;
  if ((uVar1 & 0x800) == 0) {
    uVar1 = uVar1 & 0x7ff;
  }
  else {
    uVar1 = uVar1 | 0xfffff800;
  }
  uVar1 = (iVar2 * 0x1000 + uVar1 * (param_1 & 0xf) * 0x100) - 0x400000;
  if ((uVar1 & 0x800000) == 0) {
    uVar1 = uVar1 & 0x7fffff;
  }
  else {
    uVar1 = uVar1 | 0xff800000;
  }
  return uVar1;
}


