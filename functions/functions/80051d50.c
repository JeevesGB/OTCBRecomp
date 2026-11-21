/* Function: RenderTrackContext */
/* Address: 80051d50 */

void RenderTrackContext(ushort *param_1)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 6) == 0) {
    if (param_1[2] == 0) {
LAB_80051e44:
      param_1[3] = 0xffff;
      param_1[6] = 0;
      param_1[7] = 0;
      return;
    }
    uVar1 = param_1[1];
    param_1[1] = uVar1 + 1;
    param_1[2] = param_1[2] - 1;
    *(ushort **)(param_1 + 6) = param_1 + (uVar1 & 3) * 4 + 8;
    iVar3 = (int)(short)param_1[(uVar1 & 3) * 4 + 8];
    *(int *)(param_1 + 0x18) = iVar3 * 0x20 + -0x7ff50f64;
    pcVar2 = (code *)(&g_TrackSegmentRenderTable)[iVar3 * 8];
  }
  else {
    uVar1 = *param_1;
    *param_1 = uVar1 - 1;
    if ((int)((uint)uVar1 << 0x10) < 0) {
      if (param_1[2] == 0) goto LAB_80051e44;
      uVar1 = param_1[1];
      param_1[1] = uVar1 + 1;
      param_1[2] = param_1[2] - 1;
      *(ushort **)(param_1 + 6) = param_1 + (uVar1 & 3) * 4 + 8;
      iVar3 = (int)(short)param_1[(uVar1 & 3) * 4 + 8];
      *(int *)(param_1 + 0x18) = iVar3 * 0x20 + -0x7ff50f64;
      pcVar2 = (code *)(&g_TrackSegmentRenderTable)[iVar3 * 8];
    }
    else {
      pcVar2 = *(code **)(*(int *)(param_1 + 0x18) + 0x1c);
    }
  }
  (*pcVar2)(param_1);
  return;
}


