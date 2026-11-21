/* Function: UpdateCarObject */
/* Address: 800419f4 */

void UpdateCarObject(int param_1)

{
  int iVar1;
  int iVar2;
  
  UpdateCarRenderData(*(undefined4 *)(param_1 + 0x28));
  if ((*(ushort *)(*(int *)(param_1 + 0x28) + 0x4c) & 0x80) == 0) {
    *(undefined2 *)(param_1 + 0x1f2) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x1f2) = 0xffff;
  }
  UpdateCarPhysicsStep(param_1);
  UpdateCarGearbox(param_1);
  UpdateCarHUDData(param_1);
  UpdateCarAIControl(param_1);
  UpdateCarEngine(param_1);
  UpdateCarBrakes(param_1);
  UpdateCarSteering(param_1);
  *(undefined2 *)(param_1 + 0x174) = 0;
  iVar1 = GetCarCollisionSegment(param_1);
  if (iVar1 != 0x7fffffff) {
    iVar2 = CalcCarTrackOffset(param_1,(int)(short)iVar1,(int)g_TrackWidth);
    *(undefined2 *)(param_1 + 0x174) = 0xffff;
    if ((g_RaceClass != 0) && (3000 < iVar2)) {
      HandleCarWallContact(param_1,iVar2,iVar1);
    }
    if ((*(uint *)(param_1 + 0x40) & 0x10000) != 0) {
      TriggerSlipstreamEffect(iVar2 << 1,(int)*(short *)(*(int *)(param_1 + 0x18) + 0x4a));
      *(undefined2 *)(*(int *)(param_1 + 0x28) + 0x78) = 8;
    }
  }
  UpdateCarTrackPosition(param_1);
  if (*(short *)(param_1 + 0x44) == 1) {
    UpdatePlayerHUD(param_1);
    UpdateCarCamera(param_1);
    if (*(short *)(param_1 + 0x44) == 1) {
      if ((*(ushort *)(*(int *)(param_1 + 0x28) + 0x4e) & 0x100) != 0) {
        *(undefined2 *)(*(int *)(param_1 + 0x38) + 0x16) = 0xffff;
      }
      if ((*(ushort *)(*(int *)(param_1 + 0x28) + 0x4c) & 0x200) == 0) {
        *(undefined2 *)(*(int *)(param_1 + 0x38) + 0x18) = 0;
      }
      else {
        *(undefined2 *)(*(int *)(param_1 + 0x38) + 0x18) = 0xffff;
      }
    }
  }
  UpdateCarLapData(param_1);
  UpdateCarCollisionResponse(param_1);
  InitCarAnimation(param_1);
  InitCarShadow(param_1);
  UpdateCarRenderTransform(param_1);
  return;
}


