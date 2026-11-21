/* Function: UpdatePlayerCarObject */
/* Address: 80041be8 */

void UpdatePlayerCarObject(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  
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
  if (g_RaceFlag != 0) {
    UpdateCarTurbo(param_1);
  }
  UpdateCarAIControl(param_1);
  UpdateCarEngine(param_1);
  UpdateCarBrakes(param_1);
  UpdateCarSteering(param_1);
  *(undefined2 *)(param_1 + 0x174) = 0;
  iVar3 = GetCarCollisionSegment(param_1);
  if (iVar3 != 0x7fffffff) {
    iVar4 = CalcCarTrackOffset(param_1,(int)(short)iVar3,(int)g_TrackWidth);
    *(undefined2 *)(param_1 + 0x174) = 0xffff;
    if ((g_RaceClass != 0) && (3000 < iVar4)) {
      HandleCarWallContact(param_1,iVar4,iVar3);
    }
    if ((*(uint *)(param_1 + 0x40) & 0x10000) != 0) {
      TriggerSlipstreamEffect(iVar4 << 1,(int)*(short *)(*(int *)(param_1 + 0x18) + 0x4a));
      *(undefined2 *)(*(int *)(param_1 + 0x28) + 0x78) = 8;
    }
  }
  UpdateCarTrackPosition(param_1);
  UpdateCarLapCounter(param_1);
  UpdateCarSpeedometer(param_1);
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
  UpdatePlayerHUD(param_1);
  if (*(short *)(param_1 + 0x44) == 1) {
    if (*(short *)(*(int *)(param_1 + 0x24) + 6) != 0) {
      g_PhysicsFlag5 = 0xffff;
    }
    UpdateCarCamera(param_1);
    iVar3 = *(int *)(param_1 + 0x3c);
    if ((*(uint *)(param_1 + 0x160) & 0x20) == 0) {
      *(undefined2 *)(iVar3 + 8) = 0;
    }
    else if ((*(short *)(iVar3 + 8) == 0) &&
            (*(undefined2 *)(iVar3 + 8) = 0xffff, 0x2e4a0 < *(int *)(param_1 + 0x60))) {
      PlayCarSFX(0x16,3,(int)*(short *)(*(int *)(param_1 + 0x18) + 0x4a));
      if (*(short *)(*(int *)(param_1 + 0x28) + 0x78) < 4) {
        *(undefined2 *)(*(int *)(param_1 + 0x28) + 0x78) = 4;
      }
    }
    iVar3 = *(int *)(param_1 + 0x28);
    uVar5 = 0;
    if (*(short *)(iVar3 + 0x78) == 0) {
      if ((*(int *)(param_1 + 0x60) < 0x3b41) ||
         (uVar2 = 0x96,
         *(short *)(*(int *)(param_1 + 0x3c) + 10) == 0 &&
         (*(short *)(param_1 + 0x37a) == 0 &&
         (*(short *)(param_1 + 0x378) == 0 &&
         (*(short *)(param_1 + 0x374) == 0 && *(short *)(param_1 + 0x376) == 0))))) {
        uVar2 = **(undefined2 **)(param_1 + 0x3c);
      }
      else {
        uVar5 = 1;
      }
    }
    else {
      *(short *)(iVar3 + 0x78) = *(short *)(iVar3 + 0x78) + -1;
      uVar5 = 1;
      uVar2 = 0xfa;
    }
    *(undefined2 *)(iVar3 + 0x7a) = uVar5;
    *(undefined2 *)(iVar3 + 0x7c) = uVar2;
    UpdateCarGears(param_1);
    iVar6 = 0;
    sVar1 = *(short *)(param_1 + 0x16c);
    iVar3 = param_1;
    iVar4 = param_1;
    do {
      if (((*(int *)(iVar3 + 0x33c) <= sVar1 * -0x200) && (0x351 < *(short *)(iVar4 + 900))) &&
         (g_PhysicsFlag + iVar6 == ((g_PhysicsFlag + iVar6) / 3) * 3)) {
        UpdateTireSmoke(param_1,iVar6);
      }
      iVar4 = iVar4 + 2;
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar6 < 4);
    iVar4 = 0;
    iVar6 = 0;
    iVar3 = param_1;
    do {
      if ((*(short *)(iVar3 + 0x364) != 0) && (*(short *)(iVar3 + 0x374) != 0)) {
        iVar6 = iVar6 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 2;
    } while (iVar4 < 4);
    iVar3 = *(int *)(param_1 + 0x60);
    if (0x3b40 < iVar3) {
      iVar3 = 0x3b40;
    }
    UpdateEngineRPMSound
              (4,(int)*(short *)(*(int *)(param_1 + 0x3c) + 4),0xd00,
               iVar3 * iVar6 * 0x7f * (int)*(short *)(*(int *)(param_1 + 0x18) + 0x4a) >> 0x17);
    UpdateCarLights(param_1);
  }
  UpdateCarLapData(param_1);
  UpdateCarMirror(param_1);
  UpdateCarCollisionResponse(param_1);
  InitCarShadow(param_1);
  InitCarAnimation(param_1);
  UpdateCarRenderTransform(param_1);
  return;
}


