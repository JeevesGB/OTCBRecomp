/* Function: UpdateCarLights */
/* Address: 8004143c */

void UpdateCarLights(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  
  iVar3 = 2;
  if (0x2507f < *(int *)(param_1 + 0x60)) {
    iVar4 = param_1 + 8;
    iVar2 = param_1 + 4;
    do {
      if ((*(short *)(iVar2 + 0x364) != 0) &&
         ((*(uint *)(((int)((uint)*(ushort *)(iVar2 + 0xb0) << 0x10) >> 0x14) * 4 +
                    g_TrackSegmentData) & 0x40) != 0)) {
        iVar1 = *(int *)(iVar4 + 0xb8);
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if (iVar1 < 0x14000) break;
      }
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 2;
    } while (iVar3 < 4);
    if (iVar3 < 4) {
      sVar5 = *(short *)(*(int *)(param_1 + 0x18) + 0x4a);
      *(undefined2 *)(*(int *)(param_1 + 0x3c) + 10) = 0xffff;
      sVar5 = (short)(sVar5 * 0x7f >> 7);
      goto LAB_80041524;
    }
  }
  sVar5 = 1;
  *(undefined2 *)(*(int *)(param_1 + 0x3c) + 10) = 0;
LAB_80041524:
  UpdateEngineRPMSound(5,(int)*(short *)(*(int *)(param_1 + 0x3c) + 6),0x1900,(int)sVar5);
  return;
}


